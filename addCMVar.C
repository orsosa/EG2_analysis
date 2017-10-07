#define addCMVar_cxx
// The class definition in addCMVar.h has been generated automatically
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
// Root > T->Process("addCMVar.C")
// Root > T->Process("addCMVar.C","some options")
// Root > T->Process("addCMVar.C+")
//

#include "addCMVar.h"
#include <TH2.h>
#include <TStyle.h>


void addCMVar::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void addCMVar::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t addCMVar::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either addCMVar::GetEntry() or TBranch::GetEntry()
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
  GetEntry(entry);
  kData[0] = primary_M;
  kData[1] = primary_Phx;
  kData[1] =   primary_Phy;
  kData[3] =   primary_Phz;
  kData[4] =   primary_Nu;
  kData[5] =   primary_Q2;
  kData[6] =   primary_Z;
  kData[7] =   primary_Cospq;
  kData[8] =   primary_Pt2;
  kData[9] =   primary_Event;
  kData[10] =   primary_M2_01;
  kData[11] =   primary_M2_02;
  kData[12] =   primary_vzec;
  kData[13] =   primary_z1;
  kData[14] =   primary_z2;
  kData[15] =   primary_z3;
  kData[16] =   primary_W;
  kData[17] =   primary_vxec;
  kData[18] =   primary_vyec;
  kData[19] =   primary_qx1;
  kData[20] =   primary_qy1;
  kData[21] =   primary_qz1;
  kData[22] =   primary_qx2;
  kData[23] =   primary_qy2;
  kData[24] =   primary_qz2;
  kData[25] =   primary_E1;
  kData[26] =   primary_E2;
  kData[27] =   primary_E1c;
  kData[28] =   primary_E2c;
  kData[29] =   primary_x1;
  kData[30] =   primary_y1;
  kData[31] =   primary_x2;
  kData[32] =   primary_y2;

  for (int k=0;k<4;k++)
  {                                                         
    Double_t px= P4_fP_fX[k];
    Double_t py= P4_fP_fY[k] ;
    Double_t pz= P4_fP_fZ[k];
    Double_t e=  P4_fE[k];
    new ((*arr)[k]) TLorentzVector(px,py,pz,e);
  }

  Float_t etaPx,etaPy,etaPz,etaE,\
    pi0Px, pi0Py, pi0Pz, pi0E,	 \
    pipPx, pipPy, pipPz, pipE,	 \
    pimPx, pimPy, pimPz, pimE,				\
    bx,by,bz,b,g, bDotr_pip, bDotr_pim, bDotr_pi0,	\
    pimPx_b,pimPy_b,pimPz_b,pimE_b,			\
    pipPx_b,pipPy_b,pipPz_b,pipE_b,			\
    pi0Px_b,pi0Py_b,pi0Pz_b,pi0E_b;
 pipPx=P4_fP_fX[2];  pipPy=P4_fP_fY[2];  pipPz=P4_fP_fZ[2];  pipE=TMath::Sqrt(pipPx*pipPx + pipPy*pipPy + pipPz*pipPz + 0.13957*0.13957);
  pimPx=P4_fP_fX[3];  pimPy=P4_fP_fY[3];  pimPz=P4_fP_fZ[3]; pimE=TMath::Sqrt(pimPx*pimPx + pimPy*pimPy + pimPz*pimPz + 0.13957*0.13957);
  pi0Px=P4_fP_fX[0]+P4_fP_fX[1];  pi0Py=P4_fP_fY[0]+P4_fP_fY[1];  pi0Pz=P4_fP_fZ[0]+P4_fP_fZ[1];  pi0E=P4_fE[0]+P4_fE[1];

  etaPx=pi0Px+pipPx+pimPx;
  etaPy=pi0Py+pipPy+pimPy;
  etaPz=pi0Pz+pipPz+pimPz;
  etaE=pi0E+pipE+pimE;

  bx = etaPx/etaE;  by = etaPy/etaE;  bz = etaPz/etaE;
  b = TMath::Sqrt(bx*bx + by*by + bz*bz);
  g = 1.0/TMath::Sqrt(1-b*b);
  bDotr_pip = bx*pipPx + by*pipPy + bz*pipPz;
  bDotr_pim = bx*pimPx + by*pimPy + bz*pimPz;
  bDotr_pi0 = bx*pi0Px + by*pi0Py + bz*pi0Pz;

  pipE_b = g*(pipE - bDotr_pip);
  pimE_b = g*(pimE - bDotr_pim);
  pi0E_b = g*(pi0E - bDotr_pi0);

  pipPx_b = pipPx+(g-1)/(b*b)*(bDotr_pip)*bx - g*pipE*bx;
  pipPy_b = pipPy+(g-1)/(b*b)*(bDotr_pip)*by - g*pipE*by;
  pipPz_b = pipPz+(g-1)/(b*b)*(bDotr_pip)*bz - g*pipE*bz;

  pimPx_b = pimPx+(g-1)/(b*b)*(bDotr_pim)*bx - g*pimE*bx;
  pimPy_b = pimPy+(g-1)/(b*b)*(bDotr_pim)*by - g*pimE*by;
  pimPz_b = pimPz+(g-1)/(b*b)*(bDotr_pim)*bz - g*pimE*bz;


  pi0Px_b = pi0Px+(g-1)/(b*b)*(bDotr_pi0)*bx - g*pi0E*bx;
  pi0Py_b = pi0Py+(g-1)/(b*b)*(bDotr_pi0)*by - g*pi0E*by;
  pi0Pz_b = pi0Pz+(g-1)/(b*b)*(bDotr_pi0)*bz - g*pi0E*bz;


  new ((*arrCM)[0]) TLorentzVector(pi0Px,pi0Py,pi0Pz,pi0E);
  new ((*arrCM)[1]) TLorentzVector(pipPx,pipPy,pipPz,pipE);
  new ((*arrCM)[2]) TLorentzVector(pimPx,pimPy,pimPz,pimE);
  out_tree->Fill();

  return kTRUE;
}

void addCMVar::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void addCMVar::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

  out_tree->Write("",TObject::kOverwrite);
  delete arr;
  delete arrCM;
  outf->Close();
}
