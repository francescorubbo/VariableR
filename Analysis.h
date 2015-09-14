//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Sep 10 07:20:28 2015 by ROOT version 5.34/05
// from TTree nominal/nominal
// found on file: /atlas/local/rubbo/VariableR/user.amarzin.410000.ttbar.DAOD_SUSY10.e3698_s2608_s2183_r6765_r6282_p2411_tag_11_v1_output_tree.root.42036889/user.amarzin.6435979._000001.output_tree.root
//////////////////////////////////////////////////////////

#ifndef Analysis_h
#define Analysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class Analysis : public TSelector {
public :

  TFile *outfile;
  TTree *outtree;
  std::vector<float> *jpt;
  std::vector<float> *jeta;
  std::vector<float> *jphi;
  std::vector<float> *jmass;
  std::vector<int>   *jconst;

  std::vector<float>   *toppt;

  std::vector<std::vector<int> > *jhasb;
  std::vector<std::vector<int> > *jhasq;

   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Int_t           event_number;
   Int_t           run_number;
   Float_t         average_interactions_per_crossing;
   Float_t         actual_interactions_per_crossing;
   Float_t         primary_vertex_z;
   Int_t           process;
   Int_t           muons_n;
   std::vector<float>   *muons_pt;
   std::vector<float>   *muons_phi;
   std::vector<float>   *muons_eta;
   std::vector<float>   *muons_e;
   std::vector<int>     *muons_passOR;
   std::vector<int>     *muons_isSignal;
   std::vector<int>     *muons_isCosmic;
   std::vector<int>     *muons_isBad;
   std::vector<float>   *muons_ptvarcone20;
   std::vector<float>   *muons_ptvarcone30;
   std::vector<float>   *muons_topoetcone20;
   std::vector<double>  *muons_d0sig;
   std::vector<double>  *muons_z0;
   std::vector<int>     *muons_isSignal_ptDependentIso;
   std::vector<int>     *muons_isSignal_ptDependentIso_noD0Sig;
   std::vector<int>     *muons_isTrigMatch;
   Int_t           electrons_n;
   std::vector<float>   *electrons_pt;
   std::vector<float>   *electrons_phi;
   std::vector<float>   *electrons_eta;
   std::vector<float>   *electrons_e;
   std::vector<float>   *electrons_passOR;
   std::vector<int>     *electrons_isSignal;
   std::vector<int>     *electrons_passId;
   std::vector<float>   *electrons_ptvarcone20;
   std::vector<float>   *electrons_ptvarcone30;
   std::vector<float>   *electrons_topoetcone20;
   std::vector<double>  *electrons_d0sig;
   std::vector<double>  *electrons_z0;
   std::vector<int>     *electrons_isSignal_ptDependentIso;
   std::vector<int>     *electrons_isSignal_ptDependentIso_noD0Sig;
   std::vector<int>     *electrons_isTrigMatch;
   Int_t           jets_n;
   std::vector<float>   *jets_pt;
   std::vector<float>   *jets_phi;
   std::vector<float>   *jets_eta;
   std::vector<float>   *jets_e;
   std::vector<int>     *jets_isBad;
   std::vector<int>     *jets_nTracks;
   std::vector<int>     *jets_truthLabel;
   std::vector<double>  *jets_btag_weight;
   std::vector<int>     *jets_isb_60;
   std::vector<int>     *jets_isb_70;
   std::vector<int>     *jets_isb_85;
   Float_t         metcst;
   Float_t         metcst_phi;
   Float_t         mettst;
   Float_t         mettst_phi;
   Float_t         meff;
   Float_t         ht;
   Float_t         met_sig;
   Float_t         mt;
   Float_t         mt_min_bmet;
   Float_t         mt_min_bmetW;
   std::vector<bool>    *trigger;
   Double_t        weight_btag;
   Double_t        weight_elec;
   Double_t        weight_mc;
   Double_t        weight_muon;
   Double_t        weight_pu;
   Double_t        weight_btag_FT_EFF_B_systematics__1down;
   Double_t        weight_btag_FT_EFF_B_systematics__1up;
   Double_t        weight_btag_FT_EFF_C_systematics__1down;
   Double_t        weight_btag_FT_EFF_C_systematics__1up;
   Double_t        weight_btag_FT_EFF_Light_systematics__1down;
   Double_t        weight_btag_FT_EFF_Light_systematics__1up;
   Double_t        weight_btag_FT_EFF_extrapolation__1down;
   Double_t        weight_btag_FT_EFF_extrapolation__1up;
   Double_t        weight_elec_EL_EFF_ID_TotalCorrUncertainty__1down;
   Double_t        weight_elec_EL_EFF_ID_TotalCorrUncertainty__1up;
   Double_t        weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1down;
   Double_t        weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1up;
   Double_t        weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1down;
   Double_t        weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1up;
   Double_t        weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1down;
   Double_t        weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1up;
   Double_t        weight_muon_MUON_EFF_STAT__1down;
   Double_t        weight_muon_MUON_EFF_STAT__1up;
   Double_t        weight_muon_MUON_EFF_SYS__1down;
   Double_t        weight_muon_MUON_EFF_SYS__1up;
   Double_t        weight_muon_MUON_EFF_TrigStatUncertainty__1down;
   Double_t        weight_muon_MUON_EFF_TrigStatUncertainty__1up;
   Double_t        weight_muon_MUON_EFF_TrigSystUncertainty__1down;
   Double_t        weight_muon_MUON_EFF_TrigSystUncertainty__1up;
   Double_t        weight_muon_MUON_ISO_STAT__1down;
   Double_t        weight_muon_MUON_ISO_STAT__1up;
   Double_t        weight_muon_MUON_ISO_SYS__1down;
   Double_t        weight_muon_MUON_ISO_SYS__1up;
   Int_t           ttbar_class;
   Int_t           ttbar_class_ext;
   Int_t           ttbar_class_prompt;
   Int_t           top_decay_type;
   Int_t           antitop_decay_type;
   Int_t           mc_n;
   std::vector<float>   *mc_pt;
   std::vector<float>   *mc_eta;
   std::vector<float>   *mc_phi;
   std::vector<float>   *mc_m;
   std::vector<float>   *mc_pdgId;
   std::vector<std::vector<int> > *mc_children_index;
   Float_t         met_truth;
   Float_t         met_truth_phi;
   Float_t         met_truth_filter;
   Float_t         mtt;
   /* Double_t        weight_topPt; */
   /* Double_t        weight_topPt_ISRFSR_UP; */
   /* Double_t        weight_topPt_ISRFSR_DOWN; */
   /* Double_t        weight_topPt_Fragmentation_UP; */
   /* Double_t        weight_topPt_Fragmentation_DOWN; */
   /* Double_t        weight_topPt_MCGenerator_UP; */
   /* Double_t        weight_topPt_MCGenerator_DOWN; */
   /* Double_t        weight_topPt_JER_UP; */
   /* Double_t        weight_topPt_JER_DOWN; */
   /* Double_t        weight_topPt_bJES_UP; */
   /* Double_t        weight_topPt_bJES_DOWN; */
   /* Double_t        weight_topPt_closebyJES_UP; */
   /* Double_t        weight_topPt_closebyJES_DOWN; */
   /* Double_t        weight_topPt_etacalibJES_UP; */
   /* Double_t        weight_topPt_etacalibJES_DOWN; */
   /* Double_t        weight_topPt_effdetset1JES_UP; */
   /* Double_t        weight_topPt_effdetset1JES_DOWN; */
   /* Double_t        weight_topPt_btageff_UP; */
   /* Double_t        weight_topPt_btageff_DOWN; */
   Int_t           ak10_jets_n;
   std::vector<float>   *ak10_jets_pt;
   std::vector<float>   *ak10_jets_phi;
   std::vector<float>   *ak10_jets_eta;
   std::vector<float>   *ak10_jets_e;
   std::vector<float>   *ak10_jets_m;
   std::vector<float>   *ak10_jets_SPLIT12;
   std::vector<float>   *ak10_jets_SPLIT23;
   std::vector<float>   *ak10_jets_tau21;
   std::vector<float>   *ak10_jets_tau32;
   std::vector<float>   *ak10_jets_isTopLoose;
   std::vector<float>   *ak10_jets_isTopTight;
   std::vector<float>   *ak10_jets_isTopSmoothLoose;
   std::vector<float>   *ak10_jets_isTopSmoothTight;
   Double_t        TRFweight_2excl;
   Double_t        TRFweight_2incl;
   Double_t        TRFweight_3excl;
   Double_t        TRFweight_3incl;
   Double_t        TRFweight_4incl;
   std::vector<int>     *jets_isb_85_TRF_2excl;
   std::vector<int>     *jets_isb_85_TRF_2incl;
   std::vector<int>     *jets_isb_85_TRF_3excl;
   std::vector<int>     *jets_isb_85_TRF_3incl;
   std::vector<int>     *jets_isb_85_TRF_4incl;

   // List of branches
   TBranch        *b_event_number;   //!
   TBranch        *b_run_number;   //!
   TBranch        *b_average_interactions_per_crossing;   //!
   TBranch        *b_actual_interactions_per_crossing;   //!
   TBranch        *b_primary_vertex_z;   //!
   TBranch        *b_process;   //!
   TBranch        *b_muons_n;   //!
   TBranch        *b_muons_pt;   //!
   TBranch        *b_muons_phi;   //!
   TBranch        *b_muons_eta;   //!
   TBranch        *b_muons_e;   //!
   TBranch        *b_muons_passOR;   //!
   TBranch        *b_muons_isSignal;   //!
   TBranch        *b_muons_isCosmic;   //!
   TBranch        *b_muons_isBad;   //!
   TBranch        *b_muons_ptvarcone20;   //!
   TBranch        *b_muons_ptvarcone30;   //!
   TBranch        *b_muons_topoetcone20;   //!
   TBranch        *b_muons_d0sig;   //!
   TBranch        *b_muons_z0;   //!
   TBranch        *b_muons_isSignal_ptDependentIso;   //!
   TBranch        *b_muons_isSignal_ptDependentIso_noD0Sig;   //!
   TBranch        *b_muons_isTrigMatch;   //!
   TBranch        *b_electrons_n;   //!
   TBranch        *b_electrons_pt;   //!
   TBranch        *b_electrons_phi;   //!
   TBranch        *b_electrons_eta;   //!
   TBranch        *b_electrons_e;   //!
   TBranch        *b_electrons_passOR;   //!
   TBranch        *b_electrons_isSignal;   //!
   TBranch        *b_electrons_passId;   //!
   TBranch        *b_electrons_ptvarcone20;   //!
   TBranch        *b_electrons_ptvarcone30;   //!
   TBranch        *b_electrons_topoetcone20;   //!
   TBranch        *b_electrons_d0sig;   //!
   TBranch        *b_electrons_z0;   //!
   TBranch        *b_electrons_isSignal_ptDependentIso;   //!
   TBranch        *b_electrons_isSignal_ptDependentIso_noD0Sig;   //!
   TBranch        *b_electrons_isTrigMatch;   //!
   TBranch        *b_jets_n;   //!
   TBranch        *b_jets_pt;   //!
   TBranch        *b_jets_phi;   //!
   TBranch        *b_jets_eta;   //!
   TBranch        *b_jets_e;   //!
   TBranch        *b_jets_isBad;   //!
   TBranch        *b_jets_nTracks;   //!
   TBranch        *b_jets_truthLabel;   //!
   TBranch        *b_jets_btag_weight;   //!
   TBranch        *b_jets_isb_60;   //!
   TBranch        *b_jets_isb_70;   //!
   TBranch        *b_jets_isb_85;   //!
   TBranch        *b_metcst;   //!
   TBranch        *b_metcst_phi;   //!
   TBranch        *b_mettst;   //!
   TBranch        *b_mettst_phi;   //!
   TBranch        *b_meff;   //!
   TBranch        *b_ht;   //!
   TBranch        *b_met_sig;   //!
   TBranch        *b_mt;   //!
   TBranch        *b_mt_min_bmet;   //!
   TBranch        *b_mt_min_bmetW;   //!
   TBranch        *b_trigger;   //!
   TBranch        *b_weight_btag;   //!
   TBranch        *b_weight_elec;   //!
   TBranch        *b_weight_mc;   //!
   TBranch        *b_weight_muon;   //!
   TBranch        *b_weight_pu;   //!
   TBranch        *b_weight_btag_FT_EFF_B_systematics__1down;   //!
   TBranch        *b_weight_btag_FT_EFF_B_systematics__1up;   //!
   TBranch        *b_weight_btag_FT_EFF_C_systematics__1down;   //!
   TBranch        *b_weight_btag_FT_EFF_C_systematics__1up;   //!
   TBranch        *b_weight_btag_FT_EFF_Light_systematics__1down;   //!
   TBranch        *b_weight_btag_FT_EFF_Light_systematics__1up;   //!
   TBranch        *b_weight_btag_FT_EFF_extrapolation__1down;   //!
   TBranch        *b_weight_btag_FT_EFF_extrapolation__1up;   //!
   TBranch        *b_weight_elec_EL_EFF_ID_TotalCorrUncertainty__1down;   //!
   TBranch        *b_weight_elec_EL_EFF_ID_TotalCorrUncertainty__1up;   //!
   TBranch        *b_weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1down;   //!
   TBranch        *b_weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1up;   //!
   TBranch        *b_weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1down;   //!
   TBranch        *b_weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1up;   //!
   TBranch        *b_weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1down;   //!
   TBranch        *b_weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1up;   //!
   TBranch        *b_weight_muon_MUON_EFF_STAT__1down;   //!
   TBranch        *b_weight_muon_MUON_EFF_STAT__1up;   //!
   TBranch        *b_weight_muon_MUON_EFF_SYS__1down;   //!
   TBranch        *b_weight_muon_MUON_EFF_SYS__1up;   //!
   TBranch        *b_weight_muon_MUON_EFF_TrigStatUncertainty__1down;   //!
   TBranch        *b_weight_muon_MUON_EFF_TrigStatUncertainty__1up;   //!
   TBranch        *b_weight_muon_MUON_EFF_TrigSystUncertainty__1down;   //!
   TBranch        *b_weight_muon_MUON_EFF_TrigSystUncertainty__1up;   //!
   TBranch        *b_weight_muon_MUON_ISO_STAT__1down;   //!
   TBranch        *b_weight_muon_MUON_ISO_STAT__1up;   //!
   TBranch        *b_weight_muon_MUON_ISO_SYS__1down;   //!
   TBranch        *b_weight_muon_MUON_ISO_SYS__1up;   //!
   TBranch        *b_ttbar_class;   //!
   TBranch        *b_ttbar_class_ext;   //!
   TBranch        *b_ttbar_class_prompt;   //!
   TBranch        *b_top_decay_type;   //!
   TBranch        *b_antitop_decay_type;   //!
   TBranch        *b_mc_n;   //!
   TBranch        *b_mc_pt;   //!
   TBranch        *b_mc_eta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_m;   //!
   TBranch        *b_mc_pdgId;   //!
   TBranch        *b_mc_children_index;   //!
   TBranch        *b_met_truth;   //!
   TBranch        *b_met_truth_phi;   //!
   TBranch        *b_met_truth_filter;   //!
   TBranch        *b_mtt;   //!
   /* TBranch        *b_weight_topPt;   //! */
   /* TBranch        *b_weight_topPt_ISRFSR_UP;   //! */
   /* TBranch        *b_weight_topPt_ISRFSR_DOWN;   //! */
   /* TBranch        *b_weight_topPt_Fragmentation_UP;   //! */
   /* TBranch        *b_weight_topPt_Fragmentation_DOWN;   //! */
   /* TBranch        *b_weight_topPt_MCGenerator_UP;   //! */
   /* TBranch        *b_weight_topPt_MCGenerator_DOWN;   //! */
   /* TBranch        *b_weight_topPt_JER_UP;   //! */
   /* TBranch        *b_weight_topPt_JER_DOWN;   //! */
   /* TBranch        *b_weight_topPt_bJES_UP;   //! */
   /* TBranch        *b_weight_topPt_bJES_DOWN;   //! */
   /* TBranch        *b_weight_topPt_closebyJES_UP;   //! */
   /* TBranch        *b_weight_topPt_closebyJES_DOWN;   //! */
   /* TBranch        *b_weight_topPt_etacalibJES_UP;   //! */
   /* TBranch        *b_weight_topPt_etacalibJES_DOWN;   //! */
   /* TBranch        *b_weight_topPt_effdetset1JES_UP;   //! */
   /* TBranch        *b_weight_topPt_effdetset1JES_DOWN;   //! */
   /* TBranch        *b_weight_topPt_btageff_UP;   //! */
   /* TBranch        *b_weight_topPt_btageff_DOWN;   //! */
   TBranch        *b_ak10_jets_n;   //!
   TBranch        *b_ak10_jets_pt;   //!
   TBranch        *b_ak10_jets_phi;   //!
   TBranch        *b_ak10_jets_eta;   //!
   TBranch        *b_ak10_jets_e;   //!
   TBranch        *b_ak10_jets_m;   //!
   TBranch        *b_ak10_jets_SPLIT12;   //!
   TBranch        *b_ak10_jets_SPLIT23;   //!
   TBranch        *b_ak10_jets_tau21;   //!
   TBranch        *b_ak10_jets_tau32;   //!
   TBranch        *b_ak10_jets_isTopLoose;   //!
   TBranch        *b_ak10_jets_isTopTight;   //!
   TBranch        *b_ak10_jets_isTopSmoothLoose;   //!
   TBranch        *b_ak10_jets_isTopSmoothTight;   //!
   TBranch        *b_TRFweight_2excl;   //!
   TBranch        *b_TRFweight_2incl;   //!
   TBranch        *b_TRFweight_3excl;   //!
   TBranch        *b_TRFweight_3incl;   //!
   TBranch        *b_TRFweight_4incl;   //!
   TBranch        *b_jets_isb_85_TRF_2excl;   //!
   TBranch        *b_jets_isb_85_TRF_2incl;   //!
   TBranch        *b_jets_isb_85_TRF_3excl;   //!
   TBranch        *b_jets_isb_85_TRF_3incl;   //!
   TBranch        *b_jets_isb_85_TRF_4incl;   //!

   Analysis(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~Analysis() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(Analysis,0);
};

#endif

#ifdef Analysis_cxx
void Analysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   muons_pt = 0;
   muons_phi = 0;
   muons_eta = 0;
   muons_e = 0;
   muons_passOR = 0;
   muons_isSignal = 0;
   muons_isCosmic = 0;
   muons_isBad = 0;
   muons_ptvarcone20 = 0;
   muons_ptvarcone30 = 0;
   muons_topoetcone20 = 0;
   muons_d0sig = 0;
   muons_z0 = 0;
   muons_isSignal_ptDependentIso = 0;
   muons_isSignal_ptDependentIso_noD0Sig = 0;
   muons_isTrigMatch = 0;
   electrons_pt = 0;
   electrons_phi = 0;
   electrons_eta = 0;
   electrons_e = 0;
   electrons_passOR = 0;
   electrons_isSignal = 0;
   electrons_passId = 0;
   electrons_ptvarcone20 = 0;
   electrons_ptvarcone30 = 0;
   electrons_topoetcone20 = 0;
   electrons_d0sig = 0;
   electrons_z0 = 0;
   electrons_isSignal_ptDependentIso = 0;
   electrons_isSignal_ptDependentIso_noD0Sig = 0;
   electrons_isTrigMatch = 0;
   jets_pt = 0;
   jets_phi = 0;
   jets_eta = 0;
   jets_e = 0;
   jets_isBad = 0;
   jets_nTracks = 0;
   jets_truthLabel = 0;
   jets_btag_weight = 0;
   jets_isb_60 = 0;
   jets_isb_70 = 0;
   jets_isb_85 = 0;
   trigger = 0;
   mc_pt = 0;
   mc_eta = 0;
   mc_phi = 0;
   mc_m = 0;
   mc_pdgId = 0;
   mc_children_index = 0;
   ak10_jets_pt = 0;
   ak10_jets_phi = 0;
   ak10_jets_eta = 0;
   ak10_jets_e = 0;
   ak10_jets_m = 0;
   ak10_jets_SPLIT12 = 0;
   ak10_jets_SPLIT23 = 0;
   ak10_jets_tau21 = 0;
   ak10_jets_tau32 = 0;
   ak10_jets_isTopLoose = 0;
   ak10_jets_isTopTight = 0;
   ak10_jets_isTopSmoothLoose = 0;
   ak10_jets_isTopSmoothTight = 0;
   jets_isb_85_TRF_2excl = 0;
   jets_isb_85_TRF_2incl = 0;
   jets_isb_85_TRF_3excl = 0;
   jets_isb_85_TRF_3incl = 0;
   jets_isb_85_TRF_4incl = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("event_number", &event_number, &b_event_number);
   fChain->SetBranchAddress("run_number", &run_number, &b_run_number);
   fChain->SetBranchAddress("average_interactions_per_crossing", &average_interactions_per_crossing, &b_average_interactions_per_crossing);
   fChain->SetBranchAddress("actual_interactions_per_crossing", &actual_interactions_per_crossing, &b_actual_interactions_per_crossing);
   fChain->SetBranchAddress("primary_vertex_z", &primary_vertex_z, &b_primary_vertex_z);
   fChain->SetBranchAddress("process", &process, &b_process);
   fChain->SetBranchAddress("muons_n", &muons_n, &b_muons_n);
   fChain->SetBranchAddress("muons_pt", &muons_pt, &b_muons_pt);
   fChain->SetBranchAddress("muons_phi", &muons_phi, &b_muons_phi);
   fChain->SetBranchAddress("muons_eta", &muons_eta, &b_muons_eta);
   fChain->SetBranchAddress("muons_e", &muons_e, &b_muons_e);
   fChain->SetBranchAddress("muons_passOR", &muons_passOR, &b_muons_passOR);
   fChain->SetBranchAddress("muons_isSignal", &muons_isSignal, &b_muons_isSignal);
   fChain->SetBranchAddress("muons_isCosmic", &muons_isCosmic, &b_muons_isCosmic);
   fChain->SetBranchAddress("muons_isBad", &muons_isBad, &b_muons_isBad);
   fChain->SetBranchAddress("muons_ptvarcone20", &muons_ptvarcone20, &b_muons_ptvarcone20);
   fChain->SetBranchAddress("muons_ptvarcone30", &muons_ptvarcone30, &b_muons_ptvarcone30);
   fChain->SetBranchAddress("muons_topoetcone20", &muons_topoetcone20, &b_muons_topoetcone20);
   fChain->SetBranchAddress("muons_d0sig", &muons_d0sig, &b_muons_d0sig);
   fChain->SetBranchAddress("muons_z0", &muons_z0, &b_muons_z0);
   fChain->SetBranchAddress("muons_isSignal_ptDependentIso", &muons_isSignal_ptDependentIso, &b_muons_isSignal_ptDependentIso);
   fChain->SetBranchAddress("muons_isSignal_ptDependentIso_noD0Sig", &muons_isSignal_ptDependentIso_noD0Sig, &b_muons_isSignal_ptDependentIso_noD0Sig);
   fChain->SetBranchAddress("muons_isTrigMatch", &muons_isTrigMatch, &b_muons_isTrigMatch);
   fChain->SetBranchAddress("electrons_n", &electrons_n, &b_electrons_n);
   fChain->SetBranchAddress("electrons_pt", &electrons_pt, &b_electrons_pt);
   fChain->SetBranchAddress("electrons_phi", &electrons_phi, &b_electrons_phi);
   fChain->SetBranchAddress("electrons_eta", &electrons_eta, &b_electrons_eta);
   fChain->SetBranchAddress("electrons_e", &electrons_e, &b_electrons_e);
   fChain->SetBranchAddress("electrons_passOR", &electrons_passOR, &b_electrons_passOR);
   fChain->SetBranchAddress("electrons_isSignal", &electrons_isSignal, &b_electrons_isSignal);
   fChain->SetBranchAddress("electrons_passId", &electrons_passId, &b_electrons_passId);
   fChain->SetBranchAddress("electrons_ptvarcone20", &electrons_ptvarcone20, &b_electrons_ptvarcone20);
   fChain->SetBranchAddress("electrons_ptvarcone30", &electrons_ptvarcone30, &b_electrons_ptvarcone30);
   fChain->SetBranchAddress("electrons_topoetcone20", &electrons_topoetcone20, &b_electrons_topoetcone20);
   fChain->SetBranchAddress("electrons_d0sig", &electrons_d0sig, &b_electrons_d0sig);
   fChain->SetBranchAddress("electrons_z0", &electrons_z0, &b_electrons_z0);
   fChain->SetBranchAddress("electrons_isSignal_ptDependentIso", &electrons_isSignal_ptDependentIso, &b_electrons_isSignal_ptDependentIso);
   fChain->SetBranchAddress("electrons_isSignal_ptDependentIso_noD0Sig", &electrons_isSignal_ptDependentIso_noD0Sig, &b_electrons_isSignal_ptDependentIso_noD0Sig);
   fChain->SetBranchAddress("electrons_isTrigMatch", &electrons_isTrigMatch, &b_electrons_isTrigMatch);
   fChain->SetBranchAddress("jets_n", &jets_n, &b_jets_n);
   fChain->SetBranchAddress("jets_pt", &jets_pt, &b_jets_pt);
   fChain->SetBranchAddress("jets_phi", &jets_phi, &b_jets_phi);
   fChain->SetBranchAddress("jets_eta", &jets_eta, &b_jets_eta);
   fChain->SetBranchAddress("jets_e", &jets_e, &b_jets_e);
   fChain->SetBranchAddress("jets_isBad", &jets_isBad, &b_jets_isBad);
   fChain->SetBranchAddress("jets_nTracks", &jets_nTracks, &b_jets_nTracks);
   fChain->SetBranchAddress("jets_truthLabel", &jets_truthLabel, &b_jets_truthLabel);
   fChain->SetBranchAddress("jets_btag_weight", &jets_btag_weight, &b_jets_btag_weight);
   fChain->SetBranchAddress("jets_isb_60", &jets_isb_60, &b_jets_isb_60);
   fChain->SetBranchAddress("jets_isb_70", &jets_isb_70, &b_jets_isb_70);
   fChain->SetBranchAddress("jets_isb_85", &jets_isb_85, &b_jets_isb_85);
   fChain->SetBranchAddress("metcst", &metcst, &b_metcst);
   fChain->SetBranchAddress("metcst_phi", &metcst_phi, &b_metcst_phi);
   fChain->SetBranchAddress("mettst", &mettst, &b_mettst);
   fChain->SetBranchAddress("mettst_phi", &mettst_phi, &b_mettst_phi);
   fChain->SetBranchAddress("meff", &meff, &b_meff);
   fChain->SetBranchAddress("ht", &ht, &b_ht);
   fChain->SetBranchAddress("met_sig", &met_sig, &b_met_sig);
   fChain->SetBranchAddress("mt", &mt, &b_mt);
   fChain->SetBranchAddress("mt_min_bmet", &mt_min_bmet, &b_mt_min_bmet);
   fChain->SetBranchAddress("mt_min_bmetW", &mt_min_bmetW, &b_mt_min_bmetW);
   fChain->SetBranchAddress("trigger", &trigger, &b_trigger);
   fChain->SetBranchAddress("weight_btag", &weight_btag, &b_weight_btag);
   fChain->SetBranchAddress("weight_elec", &weight_elec, &b_weight_elec);
   fChain->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
   fChain->SetBranchAddress("weight_muon", &weight_muon, &b_weight_muon);
   fChain->SetBranchAddress("weight_pu", &weight_pu, &b_weight_pu);
   fChain->SetBranchAddress("weight_btag_FT_EFF_B_systematics__1down", &weight_btag_FT_EFF_B_systematics__1down, &b_weight_btag_FT_EFF_B_systematics__1down);
   fChain->SetBranchAddress("weight_btag_FT_EFF_B_systematics__1up", &weight_btag_FT_EFF_B_systematics__1up, &b_weight_btag_FT_EFF_B_systematics__1up);
   fChain->SetBranchAddress("weight_btag_FT_EFF_C_systematics__1down", &weight_btag_FT_EFF_C_systematics__1down, &b_weight_btag_FT_EFF_C_systematics__1down);
   fChain->SetBranchAddress("weight_btag_FT_EFF_C_systematics__1up", &weight_btag_FT_EFF_C_systematics__1up, &b_weight_btag_FT_EFF_C_systematics__1up);
   fChain->SetBranchAddress("weight_btag_FT_EFF_Light_systematics__1down", &weight_btag_FT_EFF_Light_systematics__1down, &b_weight_btag_FT_EFF_Light_systematics__1down);
   fChain->SetBranchAddress("weight_btag_FT_EFF_Light_systematics__1up", &weight_btag_FT_EFF_Light_systematics__1up, &b_weight_btag_FT_EFF_Light_systematics__1up);
   fChain->SetBranchAddress("weight_btag_FT_EFF_extrapolation__1down", &weight_btag_FT_EFF_extrapolation__1down, &b_weight_btag_FT_EFF_extrapolation__1down);
   fChain->SetBranchAddress("weight_btag_FT_EFF_extrapolation__1up", &weight_btag_FT_EFF_extrapolation__1up, &b_weight_btag_FT_EFF_extrapolation__1up);
   fChain->SetBranchAddress("weight_elec_EL_EFF_ID_TotalCorrUncertainty__1down", &weight_elec_EL_EFF_ID_TotalCorrUncertainty__1down, &b_weight_elec_EL_EFF_ID_TotalCorrUncertainty__1down);
   fChain->SetBranchAddress("weight_elec_EL_EFF_ID_TotalCorrUncertainty__1up", &weight_elec_EL_EFF_ID_TotalCorrUncertainty__1up, &b_weight_elec_EL_EFF_ID_TotalCorrUncertainty__1up);
   fChain->SetBranchAddress("weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1down", &weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1down, &b_weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1down);
   fChain->SetBranchAddress("weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1up", &weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1up, &b_weight_elec_EL_EFF_Iso_TotalCorrUncertainty__1up);
   fChain->SetBranchAddress("weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1down", &weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1down, &b_weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1down);
   fChain->SetBranchAddress("weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1up", &weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1up, &b_weight_elec_EL_EFF_Reco_TotalCorrUncertainty__1up);
   fChain->SetBranchAddress("weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1down", &weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1down, &b_weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1down);
   fChain->SetBranchAddress("weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1up", &weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1up, &b_weight_elec_EL_EFF_Trigger_TotalCorrUncertainty__1up);
   fChain->SetBranchAddress("weight_muon_MUON_EFF_STAT__1down", &weight_muon_MUON_EFF_STAT__1down, &b_weight_muon_MUON_EFF_STAT__1down);
   fChain->SetBranchAddress("weight_muon_MUON_EFF_STAT__1up", &weight_muon_MUON_EFF_STAT__1up, &b_weight_muon_MUON_EFF_STAT__1up);
   fChain->SetBranchAddress("weight_muon_MUON_EFF_SYS__1down", &weight_muon_MUON_EFF_SYS__1down, &b_weight_muon_MUON_EFF_SYS__1down);
   fChain->SetBranchAddress("weight_muon_MUON_EFF_SYS__1up", &weight_muon_MUON_EFF_SYS__1up, &b_weight_muon_MUON_EFF_SYS__1up);
   fChain->SetBranchAddress("weight_muon_MUON_EFF_TrigStatUncertainty__1down", &weight_muon_MUON_EFF_TrigStatUncertainty__1down, &b_weight_muon_MUON_EFF_TrigStatUncertainty__1down);
   fChain->SetBranchAddress("weight_muon_MUON_EFF_TrigStatUncertainty__1up", &weight_muon_MUON_EFF_TrigStatUncertainty__1up, &b_weight_muon_MUON_EFF_TrigStatUncertainty__1up);
   fChain->SetBranchAddress("weight_muon_MUON_EFF_TrigSystUncertainty__1down", &weight_muon_MUON_EFF_TrigSystUncertainty__1down, &b_weight_muon_MUON_EFF_TrigSystUncertainty__1down);
   fChain->SetBranchAddress("weight_muon_MUON_EFF_TrigSystUncertainty__1up", &weight_muon_MUON_EFF_TrigSystUncertainty__1up, &b_weight_muon_MUON_EFF_TrigSystUncertainty__1up);
   fChain->SetBranchAddress("weight_muon_MUON_ISO_STAT__1down", &weight_muon_MUON_ISO_STAT__1down, &b_weight_muon_MUON_ISO_STAT__1down);
   fChain->SetBranchAddress("weight_muon_MUON_ISO_STAT__1up", &weight_muon_MUON_ISO_STAT__1up, &b_weight_muon_MUON_ISO_STAT__1up);
   fChain->SetBranchAddress("weight_muon_MUON_ISO_SYS__1down", &weight_muon_MUON_ISO_SYS__1down, &b_weight_muon_MUON_ISO_SYS__1down);
   fChain->SetBranchAddress("weight_muon_MUON_ISO_SYS__1up", &weight_muon_MUON_ISO_SYS__1up, &b_weight_muon_MUON_ISO_SYS__1up);
   fChain->SetBranchAddress("ttbar_class", &ttbar_class, &b_ttbar_class);
   fChain->SetBranchAddress("ttbar_class_ext", &ttbar_class_ext, &b_ttbar_class_ext);
   fChain->SetBranchAddress("ttbar_class_prompt", &ttbar_class_prompt, &b_ttbar_class_prompt);
   fChain->SetBranchAddress("top_decay_type", &top_decay_type, &b_top_decay_type);
   fChain->SetBranchAddress("antitop_decay_type", &antitop_decay_type, &b_antitop_decay_type);
   fChain->SetBranchAddress("mc_n", &mc_n, &b_mc_n);
   fChain->SetBranchAddress("mc_pt", &mc_pt, &b_mc_pt);
   fChain->SetBranchAddress("mc_eta", &mc_eta, &b_mc_eta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_m", &mc_m, &b_mc_m);
   fChain->SetBranchAddress("mc_pdgId", &mc_pdgId, &b_mc_pdgId);
   fChain->SetBranchAddress("mc_children_index", &mc_children_index, &b_mc_children_index);
   fChain->SetBranchAddress("met_truth", &met_truth, &b_met_truth);
   fChain->SetBranchAddress("met_truth_phi", &met_truth_phi, &b_met_truth_phi);
   fChain->SetBranchAddress("met_truth_filter", &met_truth_filter, &b_met_truth_filter);
   fChain->SetBranchAddress("mtt", &mtt, &b_mtt);
   /* fChain->SetBranchAddress("weight_topPt", &weight_topPt, &b_weight_topPt); */
   /* fChain->SetBranchAddress("weight_topPt_ISRFSR_UP", &weight_topPt_ISRFSR_UP, &b_weight_topPt_ISRFSR_UP); */
   /* fChain->SetBranchAddress("weight_topPt_ISRFSR_DOWN", &weight_topPt_ISRFSR_DOWN, &b_weight_topPt_ISRFSR_DOWN); */
   /* fChain->SetBranchAddress("weight_topPt_Fragmentation_UP", &weight_topPt_Fragmentation_UP, &b_weight_topPt_Fragmentation_UP); */
   /* fChain->SetBranchAddress("weight_topPt_Fragmentation_DOWN", &weight_topPt_Fragmentation_DOWN, &b_weight_topPt_Fragmentation_DOWN); */
   /* fChain->SetBranchAddress("weight_topPt_MCGenerator_UP", &weight_topPt_MCGenerator_UP, &b_weight_topPt_MCGenerator_UP); */
   /* fChain->SetBranchAddress("weight_topPt_MCGenerator_DOWN", &weight_topPt_MCGenerator_DOWN, &b_weight_topPt_MCGenerator_DOWN); */
   /* fChain->SetBranchAddress("weight_topPt_JER_UP", &weight_topPt_JER_UP, &b_weight_topPt_JER_UP); */
   /* fChain->SetBranchAddress("weight_topPt_JER_DOWN", &weight_topPt_JER_DOWN, &b_weight_topPt_JER_DOWN); */
   /* fChain->SetBranchAddress("weight_topPt_bJES_UP", &weight_topPt_bJES_UP, &b_weight_topPt_bJES_UP); */
   /* fChain->SetBranchAddress("weight_topPt_bJES_DOWN", &weight_topPt_bJES_DOWN, &b_weight_topPt_bJES_DOWN); */
   /* fChain->SetBranchAddress("weight_topPt_closebyJES_UP", &weight_topPt_closebyJES_UP, &b_weight_topPt_closebyJES_UP); */
   /* fChain->SetBranchAddress("weight_topPt_closebyJES_DOWN", &weight_topPt_closebyJES_DOWN, &b_weight_topPt_closebyJES_DOWN); */
   /* fChain->SetBranchAddress("weight_topPt_etacalibJES_UP", &weight_topPt_etacalibJES_UP, &b_weight_topPt_etacalibJES_UP); */
   /* fChain->SetBranchAddress("weight_topPt_etacalibJES_DOWN", &weight_topPt_etacalibJES_DOWN, &b_weight_topPt_etacalibJES_DOWN); */
   /* fChain->SetBranchAddress("weight_topPt_effdetset1JES_UP", &weight_topPt_effdetset1JES_UP, &b_weight_topPt_effdetset1JES_UP); */
   /* fChain->SetBranchAddress("weight_topPt_effdetset1JES_DOWN", &weight_topPt_effdetset1JES_DOWN, &b_weight_topPt_effdetset1JES_DOWN); */
   /* fChain->SetBranchAddress("weight_topPt_btageff_UP", &weight_topPt_btageff_UP, &b_weight_topPt_btageff_UP); */
   /* fChain->SetBranchAddress("weight_topPt_btageff_DOWN", &weight_topPt_btageff_DOWN, &b_weight_topPt_btageff_DOWN); */
   fChain->SetBranchAddress("ak10_jets_n", &ak10_jets_n, &b_ak10_jets_n);
   fChain->SetBranchAddress("ak10_jets_pt", &ak10_jets_pt, &b_ak10_jets_pt);
   fChain->SetBranchAddress("ak10_jets_phi", &ak10_jets_phi, &b_ak10_jets_phi);
   fChain->SetBranchAddress("ak10_jets_eta", &ak10_jets_eta, &b_ak10_jets_eta);
   fChain->SetBranchAddress("ak10_jets_e", &ak10_jets_e, &b_ak10_jets_e);
   fChain->SetBranchAddress("ak10_jets_m", &ak10_jets_m, &b_ak10_jets_m);
   fChain->SetBranchAddress("ak10_jets_SPLIT12", &ak10_jets_SPLIT12, &b_ak10_jets_SPLIT12);
   fChain->SetBranchAddress("ak10_jets_SPLIT23", &ak10_jets_SPLIT23, &b_ak10_jets_SPLIT23);
   fChain->SetBranchAddress("ak10_jets_tau21", &ak10_jets_tau21, &b_ak10_jets_tau21);
   fChain->SetBranchAddress("ak10_jets_tau32", &ak10_jets_tau32, &b_ak10_jets_tau32);
   fChain->SetBranchAddress("ak10_jets_isTopLoose", &ak10_jets_isTopLoose, &b_ak10_jets_isTopLoose);
   fChain->SetBranchAddress("ak10_jets_isTopTight", &ak10_jets_isTopTight, &b_ak10_jets_isTopTight);
   fChain->SetBranchAddress("ak10_jets_isTopSmoothLoose", &ak10_jets_isTopSmoothLoose, &b_ak10_jets_isTopSmoothLoose);
   fChain->SetBranchAddress("ak10_jets_isTopSmoothTight", &ak10_jets_isTopSmoothTight, &b_ak10_jets_isTopSmoothTight);
   fChain->SetBranchAddress("TRFweight_2excl", &TRFweight_2excl, &b_TRFweight_2excl);
   fChain->SetBranchAddress("TRFweight_2incl", &TRFweight_2incl, &b_TRFweight_2incl);
   fChain->SetBranchAddress("TRFweight_3excl", &TRFweight_3excl, &b_TRFweight_3excl);
   fChain->SetBranchAddress("TRFweight_3incl", &TRFweight_3incl, &b_TRFweight_3incl);
   fChain->SetBranchAddress("TRFweight_4incl", &TRFweight_4incl, &b_TRFweight_4incl);
   fChain->SetBranchAddress("jets_isb_85_TRF_2excl", &jets_isb_85_TRF_2excl, &b_jets_isb_85_TRF_2excl);
   fChain->SetBranchAddress("jets_isb_85_TRF_2incl", &jets_isb_85_TRF_2incl, &b_jets_isb_85_TRF_2incl);
   fChain->SetBranchAddress("jets_isb_85_TRF_3excl", &jets_isb_85_TRF_3excl, &b_jets_isb_85_TRF_3excl);
   fChain->SetBranchAddress("jets_isb_85_TRF_3incl", &jets_isb_85_TRF_3incl, &b_jets_isb_85_TRF_3incl);
   fChain->SetBranchAddress("jets_isb_85_TRF_4incl", &jets_isb_85_TRF_4incl, &b_jets_isb_85_TRF_4incl);
}

Bool_t Analysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef Analysis_cxx
