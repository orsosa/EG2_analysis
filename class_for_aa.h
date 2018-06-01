//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Feb 13 02:31:18 2018 by ROOT version 6.12/04
// from TTree outdata/eta -> a a
// found on file: etaout_gsim_C_aa_all.root
//////////////////////////////////////////////////////////

#ifndef class_for_aa_h
#define class_for_aa_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "RooDataSet.h"
#include "RooRealVar.h"
class class_for_aa {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static const Int_t kMaxP4 = 2;

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

   class_for_aa(TTree *tree=0);
   virtual ~class_for_aa();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(RooDataSet *ds=0,RooRealVar *m=0);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual Float_t Eeta(){return P4_fE[0]+P4_fE[1];}
   virtual Float_t Pxeta(){return P4_fP_fX[0]+P4_fP_fX[1];}
   virtual Float_t Pyeta(){return P4_fP_fY[0]+P4_fP_fY[1];}
   virtual Float_t Pzeta(){return P4_fP_fZ[0]+P4_fP_fZ[1];}
   virtual Float_t get_meta(){return TMath::Sqrt(Eeta()*Eeta() - Pxeta()*Pxeta() - Pyeta()*Pyeta() - Pzeta()*Pzeta());}
   virtual Float_t ma0_2() { return P4_fE[0]*P4_fE[0] - P4_fP_fX[0]*P4_fP_fX[0] - P4_fP_fY[0]*P4_fP_fY[0] - P4_fP_fZ[0]*P4_fP_fZ[0];}
   virtual Float_t ma1_2() { return P4_fE[1]*P4_fE[1] - P4_fP_fX[1]*P4_fP_fX[1] - P4_fP_fY[1]*P4_fP_fY[1] - P4_fP_fZ[1]*P4_fP_fZ[1];}
  
};

#endif

#ifdef class_for_aa_cxx
class_for_aa::class_for_aa(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("etaout_gsim_C_aa_all.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("etaout_gsim_C_aa_all.root");
      }
      f->GetObject("outdata",tree);

   }
   Init(tree);
}

class_for_aa::~class_for_aa()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t class_for_aa::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t class_for_aa::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void class_for_aa::Init(TTree *tree)
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
   fChain = tree;
   fCurrent = -1;
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
   Notify();
}

Bool_t class_for_aa::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void class_for_aa::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t class_for_aa::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.

  GetEntry(entry);
  Float_t mpi0 =get_meta();
  Float_t Z=primary_Z;
  //if (0<=ma0_2()&&0<=ma1_2()&&0.7<Z&&Z<0.8)
  if (0<=ma0_2()&&0<=ma1_2())
    return 1;
  return -1;
}
#endif // #ifdef class_for_aa_cxx
