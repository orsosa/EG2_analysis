//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Sep 11 15:55:30 2017 by ROOT version 5.34/36
// from TTree outdata/eta ->  2pi0 -> 4a
// found on file: eta4a_CD.root
//////////////////////////////////////////////////////////

#ifndef pi0_corr4a_h
#define pi0_corr4a_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include <TClonesArray.h>
#include <TObject.h>
#include <TVector3.h>
#include <TLorentzVector.h>
#include "TNtuple.h"

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxP4 = 4;

class pi0_corr4a : public TSelector {
public :
   TFile *outfile;
   TNtuple *out_tree;
   Int_t Nentries;

   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   // Declaration of leaf types
   Int_t           P4_;
   UInt_t          P4_fUniqueID[kMaxP4];   //[P4_]
   UInt_t          P4_fBits[kMaxP4];   //[P4_]
   UInt_t          P4_fP_fUniqueID[kMaxP4];   //[P4_]
   UInt_t          P4_fP_fBits[kMaxP4];   //[P4_]
   Double_t        P4_fP_fX[kMaxP4];   //[P4_]
   Double_t        P4_fP_fY[kMaxP4];   //[P4_]
   Double_t        P4_fP_fZ[kMaxP4];   //[P4_]
   Double_t        P4_fE[kMaxP4];   //[P4_]
   Float_t         primary_M;
   Float_t         primary_Phx;
   Float_t         primary_Phy;
   Float_t         primary_Phz;
   Float_t         primary_Nu;
   Float_t         primary_Q2;
   Float_t         primary_Z;
   Float_t         primary_Cospq;
   Float_t         primary_Pt2;
   Float_t         primary_Event;
   Float_t         primary_M2_01;
   Float_t         primary_M2_02;
   Float_t         primary_vzec;
   Float_t         primary_z1;
   Float_t         primary_z2;
   Float_t         primary_z3;
   Float_t         primary_W;
   Float_t         primary_vxec;
   Float_t         primary_vyec;
   Float_t         primary_qx1;
   Float_t         primary_qy1;
   Float_t         primary_qz1;
   Float_t         primary_qx2;
   Float_t         primary_qy2;
   Float_t         primary_qz2;
   Float_t         primary_E1;
   Float_t         primary_E2;
   Float_t         primary_E1c;
   Float_t         primary_E2c;
   Float_t         primary_x1;
   Float_t         primary_y1;
   Float_t         primary_x2;
   Float_t         primary_y2;

   // List of branches
   TBranch        *b_P4_;   //!
   TBranch        *b_P4_fUniqueID;   //!
   TBranch        *b_P4_fBits;   //!
   TBranch        *b_P4_fP_fUniqueID;   //!
   TBranch        *b_P4_fP_fBits;   //!
   TBranch        *b_P4_fP_fX;   //!
   TBranch        *b_P4_fP_fY;   //!
   TBranch        *b_P4_fP_fZ;   //!
   TBranch        *b_P4_fE;   //!
   TBranch        *b_primary;   //!

   pi0_corr4a(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~pi0_corr4a() { }
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

   ClassDef(pi0_corr4a,0);
};

#endif

#ifdef pi0_corr4a_cxx
void pi0_corr4a::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;

   outfile = new TFile("corr2pi0_DQ_Dq.root","recreate");
   
   out_tree = new TNtuple("out_tree","Q and q difference","DQ2_bk:DQ2:DQ:Dq:DQ_bk:Dq_bk:DQE:DQE_bk");
   fChain = tree;
   fChain->SetMakeClass(1);
   
   fChain->SetBranchAddress("P4", &P4_, &b_P4_);
   fChain->SetBranchAddress("P4.fUniqueID", P4_fUniqueID, &b_P4_fUniqueID);
   fChain->SetBranchAddress("P4.fBits", P4_fBits, &b_P4_fBits);
   fChain->SetBranchAddress("P4.fP.fUniqueID", P4_fP_fUniqueID, &b_P4_fP_fUniqueID);
   fChain->SetBranchAddress("P4.fP.fBits", P4_fP_fBits, &b_P4_fP_fBits);
   fChain->SetBranchAddress("P4.fP.fX", P4_fP_fX, &b_P4_fP_fX);
   fChain->SetBranchAddress("P4.fP.fY", P4_fP_fY, &b_P4_fP_fY);
   fChain->SetBranchAddress("P4.fP.fZ", P4_fP_fZ, &b_P4_fP_fZ);
   fChain->SetBranchAddress("P4.fE", P4_fE, &b_P4_fE);
   fChain->SetBranchAddress("primary", &primary_M, &b_primary);
   Nentries =  fChain->GetEntries();

}

Bool_t pi0_corr4a::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef pi0_corr4a_cxx
