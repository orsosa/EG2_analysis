#define pi0_corr4a_cxx
// The class definition in pi0_corr4a.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("pi0_corr4a.C")
// Root > T->Process("pi0_corr4a.C","some options")
// Root > T->Process("pi0_corr4a.C+")
//

#include <iostream>
#include "pi0_corr4a.h"
#include <TH2.h>
#include <TStyle.h>

void pi0_corr4a::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void pi0_corr4a::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t pi0_corr4a::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either pi0_corr4a::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

  if (entry<Nentries-1)
  {
    GetEntry(entry);
    TLorentzVector P0_0(P4_fP_fX[0],P4_fP_fY[0],P4_fP_fZ[0],P4_fE[0]); 
    TLorentzVector P0_1(P4_fP_fX[1],P4_fP_fY[1],P4_fP_fZ[1],P4_fE[1]); 
    TLorentzVector P0_2(P4_fP_fX[2],P4_fP_fY[2],P4_fP_fZ[2],P4_fE[2]); 
    TLorentzVector P0_3(P4_fP_fX[3],P4_fP_fY[3],P4_fP_fZ[3],P4_fE[3]); 
    GetEntry(entry+1);
    TLorentzVector P1_0(P4_fP_fX[0],P4_fP_fY[0],P4_fP_fZ[0],P4_fE[0]); 
    TLorentzVector P1_1(P4_fP_fX[1],P4_fP_fY[1],P4_fP_fZ[1],P4_fE[1]); 
    TLorentzVector P1_2(P4_fP_fX[2],P4_fP_fY[2],P4_fP_fZ[2],P4_fE[2]); 
    TLorentzVector P1_3(P4_fP_fX[3],P4_fP_fY[3],P4_fP_fZ[3],P4_fE[3]); 

    TLorentzVector DQ= (P0_0 + P0_1) - (P0_2 + P0_3);
    TLorentzVector DQ_bk= (P0_0 + P0_1) - (P1_2 + P1_3);


    Float_t mpi0_0 = TMath::Sqrt( 2*P0_0*P0_1);
    Float_t mpi0_1 = TMath::Sqrt( 2*P0_2*P0_3);

    if (0.1<mpi0_0&&mpi0_0<0.16 && 0.1<mpi0_1&&mpi0_1<0.16)
    {
      Float_t DE2 = DQ.E()*DQ.E();
      Float_t DPx2= DQ.Px()*DQ.Px();
      Float_t DPy2= DQ.Py()*DQ.Py();
      Float_t DPz2= DQ.Pz()*DQ.Pz();

      Float_t DE2_bk = DQ_bk.E()*DQ_bk.E();
      Float_t DPx2_bk= DQ_bk.Px()*DQ_bk.Px();
      Float_t DPy2_bk= DQ_bk.Py()*DQ_bk.Py();
      Float_t DPz2_bk= DQ_bk.Pz()*DQ_bk.Pz();

      Float_t DiffQ2 =  ( DPx2 + DPy2 + DPz2 - DE2);
      Float_t DiffQ =  (DiffQ2>0)?TMath::Sqrt(DiffQ2):-1;

      Float_t DiffQ2_bk= (DPx2_bk + DPy2_bk + DPz2_bk - DE2_bk);
      Float_t DiffQ_bk =  (DiffQ2_bk>0)?TMath::Sqrt(DiffQ2_bk):-1;

      Float_t DiffQ2E =  2*(P0_0*P0_1 + P0_0*P0_2 + P0_0*P0_3 \
			    + P0_1*P0_2 + P0_1*P0_3\
			    + P0_2*P0_3);

      Float_t DiffQ2E_bk =  2*(P0_0*P1_1 + P0_0*P1_2 + P0_0*P1_3 \
			    + P0_1*P1_2 + P0_1*P1_3\
			    + P0_2*P1_3);

      Float_t DiffQE = (DiffQ2E>0)?TMath::Sqrt(DiffQ2E):-1;
      Float_t DiffQE_bk = (DiffQ2E_bk>0)?TMath::Sqrt(DiffQ2E_bk):-1;

      Float_t Dq=DQ.P();
      Float_t Dq_bk=DQ_bk.P();

      if (DiffQ2>0 &&  DiffQ2_bk>0)
	out_tree->Fill(DiffQ2_bk, DiffQ2, DiffQ, Dq,DiffQ_bk, Dq_bk, DiffQE, DiffQE_bk);
      else
         out_tree->Fill(DiffQ2_bk, DiffQ2, -1, Dq,-1, Dq_bk);
    }
  }
   return kTRUE;
}

void pi0_corr4a::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void pi0_corr4a::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.
  out_tree->Write("",TObject::kOverwrite);
  outfile->Close();
  delete outfile;

}
