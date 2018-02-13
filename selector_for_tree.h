//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Feb 13 02:07:33 2018 by ROOT version 6.12/04
// from TTree outdata/eta -> a a
// found on file: etaout_gsim_C_aa_all.root
//////////////////////////////////////////////////////////

#ifndef selector_for_tree_h
#define selector_for_tree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include "TClonesArray.h"



class selector_for_tree : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderArray<unsigned int> P4_fUniqueID = {fReader, "P4.fUniqueID"};
   TTreeReaderArray<unsigned int> P4_fBits = {fReader, "P4.fBits"};
   TTreeReaderArray<unsigned int> P4_fP_fUniqueID = {fReader, "P4.fP.fUniqueID"};
   TTreeReaderArray<unsigned int> P4_fP_fBits = {fReader, "P4.fP.fBits"};
   TTreeReaderArray<Double_t> P4_fP_fX = {fReader, "P4.fP.fX"};
   TTreeReaderArray<Double_t> P4_fP_fY = {fReader, "P4.fP.fY"};
   TTreeReaderArray<Double_t> P4_fP_fZ = {fReader, "P4.fP.fZ"};
   TTreeReaderValue<Float_t> M = {fReader, "primary.M"};
   TTreeReaderValue<Float_t> Phx = {fReader, "primary.Phx"};
   TTreeReaderValue<Float_t> Phy = {fReader, "primary.Phy"};
   TTreeReaderValue<Float_t> Phz = {fReader, "primary.Phz"};
   TTreeReaderValue<Float_t> Nu = {fReader, "primary.Nu"};
   TTreeReaderValue<Float_t> Q2 = {fReader, "primary.Q2"};
   TTreeReaderValue<Float_t> Z = {fReader, "primary.Z"};
   TTreeReaderValue<Float_t> Cospq = {fReader, "primary.Cospq"};
   TTreeReaderValue<Float_t> Pt2 = {fReader, "primary.Pt2"};
   TTreeReaderValue<Float_t> Event = {fReader, "primary.Event"};
   TTreeReaderValue<Float_t> M2_01 = {fReader, "primary.M2_01"};
   TTreeReaderValue<Float_t> M2_02 = {fReader, "primary.M2_02"};
   TTreeReaderValue<Float_t> vzec = {fReader, "primary.vzec"};
   TTreeReaderValue<Float_t> z1 = {fReader, "primary.z1"};
   TTreeReaderValue<Float_t> z2 = {fReader, "primary.z2"};
   TTreeReaderValue<Float_t> z3 = {fReader, "primary.z3"};
   TTreeReaderValue<Float_t> W = {fReader, "primary.W"};
   TTreeReaderValue<Float_t> vxec = {fReader, "primary.vxec"};
   TTreeReaderValue<Float_t> vyec = {fReader, "primary.vyec"};
   TTreeReaderValue<Float_t> qx1 = {fReader, "primary.qx1"};
   TTreeReaderValue<Float_t> qy1 = {fReader, "primary.qy1"};
   TTreeReaderValue<Float_t> qz1 = {fReader, "primary.qz1"};
   TTreeReaderValue<Float_t> qx2 = {fReader, "primary.qx2"};
   TTreeReaderValue<Float_t> qy2 = {fReader, "primary.qy2"};
   TTreeReaderValue<Float_t> qz2 = {fReader, "primary.qz2"};
   TTreeReaderValue<Float_t> E1 = {fReader, "primary.E1"};
   TTreeReaderValue<Float_t> E2 = {fReader, "primary.E2"};
   TTreeReaderValue<Float_t> E1c = {fReader, "primary.E1c"};
   TTreeReaderValue<Float_t> E2c = {fReader, "primary.E2c"};
   TTreeReaderValue<Float_t> x1 = {fReader, "primary.x1"};
   TTreeReaderValue<Float_t> y1 = {fReader, "primary.y1"};
   TTreeReaderValue<Float_t> x2 = {fReader, "primary.x2"};
   TTreeReaderValue<Float_t> y2 = {fReader, "primary.y2"};


   selector_for_tree(TTree * /*tree*/ =0) { }
   virtual ~selector_for_tree() { }
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

   ClassDef(selector_for_tree,0);

};

#endif

#ifdef selector_for_tree_cxx
void selector_for_tree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t selector_for_tree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef selector_for_tree_cxx
