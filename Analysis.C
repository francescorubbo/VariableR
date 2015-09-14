#define Analysis_cxx

#include "Analysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TLorentzVector.h>

#include "fastjet/PseudoJet.hh"
#include "fastjet/contrib/VariableRPlugin.hh"
#include <fastjet/tools/Filter.hh>

#include <vector>

// user info class 
class MyUserInfo : public fastjet::PseudoJet::UserInfoBase{
 public:
 MyUserInfo(const int & top, const bool & isbq):  _top(top), _isbq(isbq){}
  int  top   ()  const { return _top;}
  bool  isbq   ()  const { return _isbq;}
 protected:
  int _top; // which top it belongs to: 0,1,2,3
  bool _isbq;    // isbq: true, false
};

void Analysis::Begin(TTree * /*tree*/)
{

   TString option = GetOption();

}

void Analysis::SlaveBegin(TTree * /*tree*/)
{

   TString option = GetOption();

   outfile = new TFile("outtree.root","recreate");
   outtree = new TTree("outtree", "Event Tree");
   outtree->Branch("jpt","std::vector<float>",&jpt);
   outtree->Branch("jeta","std::vector<float>",&jeta);
   outtree->Branch("jphi","std::vector<float>",&jphi);
   outtree->Branch("jmass","std::vector<float>",&jmass);
   outtree->Branch("jconst","std::vector<int>",&jconst);
   outtree->Branch("toppt","std::vector<float>",&toppt);
   outtree->Branch("jhasb",&jhasb);
   outtree->Branch("jhasq",&jhasq);

   jpt   = new vector<float>(); jpt  ->clear();
   jeta  = new vector<float>(); jeta ->clear();
   jphi  = new vector<float>(); jphi ->clear();
   jmass = new vector<float>(); jmass->clear();
   jconst = new vector<int>(); jconst->clear();
   toppt = new vector<float>(); toppt->clear();
   jhasb = new vector<vector<int> >();jhasb->clear();
   jhasq = new vector<vector<int> >();jhasq->clear();

   fOutput->Add(outtree); 
}

Bool_t Analysis::Process(Long64_t entry)
{

  jpt  ->clear();    
  jeta ->clear(); 
  jphi ->clear(); 
  jmass->clear();
  jconst->clear();
  toppt->clear();
  jhasb->clear();
  jhasq->clear();
  
  if (entry%1==0) cout << "\r Events  " << entry << "\r" << flush;
  this->GetEntry(entry);
    
  double rho = 2*173.5;
  double min_r = 0.4;
  double max_r = 1.5;
  double ptmin = 200.;

  // fill jets
  //-----------------------------------------------
  vector<fastjet::PseudoJet> pseudojets; pseudojets.clear();
  for (int ijet=0;ijet<jets_n;++ijet){
    if(jets_isBad->at(ijet)!=0) return kFALSE;
    if(jets_pt->at(ijet)<20.) continue;
    if(fabs(jets_eta->at(ijet))>2.8) continue;
    TLorentzVector tvit = TLorentzVector();
    tvit.SetPtEtaPhiE(jets_pt->at(ijet),
		      jets_eta->at(ijet),
		      jets_phi->at(ijet),
		      jets_e->at(ijet));
    pseudojets.push_back( fastjet::PseudoJet(tvit.Px(), tvit.Py(), 
					     tvit.Pz(), tvit.E()) );
  }

  // fill truth
  //----------------------------------------------
  vector<int> tops;
  vector<int> Wq1s;
  vector<int> Wq2s;
  vector<int> bs;
  for (int imc=0;imc<mc_n;++imc)
    if (fabs(mc_pdgId->at(imc))==6){
      int windex = mc_children_index->at(imc)[0];
      int bindex = mc_children_index->at(imc)[1];
      int wq1 = mc_children_index->at(windex)[0];
      int wq2 = mc_children_index->at(windex)[1];
      if(fabs(mc_pdgId->at(wq1))>5 || fabs(mc_pdgId->at(wq2))>5) continue;
      tops.push_back( imc );
      Wq1s.push_back( wq1 );
      Wq2s.push_back( wq2 );
      bs.push_back( bindex );
      toppt->push_back( mc_pt->at(imc) );
    }//endif

  for (int it=0;it<tops.size();++it){
    fastjet::PseudoJet wq1; wq1.reset_PtYPhiM(1e-10,mc_eta->at(Wq1s[it]),mc_phi->at(Wq1s[it]));
    fastjet::PseudoJet wq2; wq2.reset_PtYPhiM(1e-10,mc_eta->at(Wq2s[it]),mc_phi->at(Wq2s[it]));
    fastjet::PseudoJet bq; bq.reset_PtYPhiM(1e-10,mc_eta->at(bs[it]),mc_phi->at(bs[it]));
    wq1.set_user_info(new MyUserInfo(it, false));
    wq1.set_user_info(new MyUserInfo(it, false));
    bq.set_user_info(new MyUserInfo(it, true));
    pseudojets.push_back( wq1 );
    pseudojets.push_back( wq2 );
    pseudojets.push_back( bq );
  }// top loop

  fastjet::contrib::VariableRPlugin lvjet_pluginAKT(rho, min_r, max_r, fastjet::contrib::VariableRPlugin::AKTLIKE);
  fastjet::JetDefinition jet_def(&lvjet_pluginAKT);
  fastjet::ClusterSequence clust_seqAKT(pseudojets, jet_def);
  vector<fastjet::PseudoJet> inclusive_jetsAKT = clust_seqAKT.inclusive_jets(ptmin);

  for (int ijet=0;ijet<inclusive_jetsAKT.size();++ijet){
    fastjet::PseudoJet *jet = &(inclusive_jetsAKT[ijet]);
    jpt->push_back( jet->pt() );
    jeta->push_back( jet->eta() );
    jphi->push_back( jet->phi() );
    jmass->push_back( jet->m() );
    int ntruth=0;
    vector<int> hasb;
    vector<int> hasq;
    for (int iconst=0;iconst<jet->constituents().size();++iconst){
      fastjet::PseudoJet *jetconst = &(jet->constituents()[iconst]);
      if (jetconst->has_user_info<MyUserInfo>()){
	ntruth++;
	int topid = jetconst->user_info<MyUserInfo>().top();
	bool isbq = jetconst->user_info<MyUserInfo>().isbq();
	if(isbq) hasb.push_back(topid);
	else hasq.push_back(topid);
      }//endif is truth
    }//loop constituents
    jconst->push_back( jet->constituents().size()-ntruth );
    jhasb->push_back( hasb );
    jhasq->push_back( hasq );
  }// loop reclustered jets

  outtree->Fill();

  return kTRUE;
}

void Analysis::SlaveTerminate()
{

  delete jpt;
  delete jeta;
  delete jphi;
  delete jmass;
  delete jconst;
  delete toppt;
  delete jhasb;
  delete jhasq;

}

void Analysis::Terminate()
{
  outtree = dynamic_cast<TTree*>(fOutput->FindObject("outtree"));
  outtree->Write("",TObject::kOverwrite);
}
