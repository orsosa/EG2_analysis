#include <iostream>
#include "TROOT.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TLegend.h"
#include "TFile.h"
#include "TH1F.h"
#include "THStack.h"



extern"C"{
  float fitemc_rock_(float *X,float *A,bool *GOODFIT);
}

double emc (double *x, double *p)
{
  bool gf;
  float X=x[0], A=p[0];
  double out = fitemc_rock_(&X,&A,&gf);
  return out;
}


int main()

{
  TFile *fout =  new TFile("emc_cmp.root","recreate");
  TCanvas *c = new TCanvas("c","c",800,600);
  //  c->DrawFrame(0,0.85,0.8,1.1,"EMC parametrization");
  c->SetGrid();
  //TFile *infile = new TFile("../Ne_AllTarg_HSim_Ocut_fix_vz_high.root","read");
  //  TFile *infile = new TFile("../Ne_AllTarg_HSim_Ncut_fix_vz_high.root","read");
    TFile *infile = new TFile("../Ne_AllTarg_HSim_Ncut_noycut_fix_vz_high.root","read");
  
  THStack *hs = (THStack *)infile->Get("hemcstN_a");
  TH1F *hC_a = (TH1F*)hs->GetHists()->FindObject("hEMCCN_a");
  TH1F *hFe_a= (TH1F*)hs->GetHists()->FindObject("hEMCCN_a");
  TH1F *hPb_a = (TH1F*)hs->GetHists()->FindObject("hEMCCN_a");

  hs = (THStack *)infile->Get("hemcstN");
  TH1F *hC = (TH1F*)hs->GetHists()->FindObject("hEMCCN");
  TH1F *hFe= (TH1F*)hs->GetHists()->FindObject("hEMCCN");
  TH1F *hPb = (TH1F*)hs->GetHists()->FindObject("hEMCCN");

  //  hs->Draw("nostack");
  TF1 *EMC_C = new TF1("emc_C",emc,0.08,0.7,1);
  TF1 *EMC_Fe =  new TF1("emc_Fe",emc,0.08,0.7,1); 
  TF1 *EMC_Pb = new TF1("emc_Pb",emc,0.08,0.7,1);
  fout->cd();
  hC->Write("",TObject::kOverwrite);
  hC_a->Write("",TObject::kOverwrite);
  EMC_C->Write("",TObject::kOverwrite);
  infile->cd();
  //  bool GOODFIT;
  //float X=0.5,A=12;
  //float out = fitemc_rock_(&X,&A,&GOODFIT);
  EMC_C->SetParameter(0,12);
  EMC_C->SetLineColor(kRed);

  hC->SetLineColor(kRed);hC->SetMarkerColor(kRed);hC->SetMarkerStyle(kOpenSquareDiagonal);
  hC_a->SetLineColor(kRed);hC_a->SetMarkerColor(kRed);
  hC->SetMaximum(1.15);
  hC->SetMinimum(0.85);
  hC_a->SetMaximum(1.15);
  hC_a->SetMinimum(0.85);
  EMC_C->SetMaximum(1.15);
  EMC_C->SetMinimum(0.85);

  
  EMC_C->Draw("");
  hC_a->Draw("same");
  hC->Draw("same");

  

  EMC_Fe->SetParameter(0,56);
  EMC_Fe->SetLineColor(kBlue);
  //EMC_Fe->Draw("same");

  EMC_Pb->SetParameter(0,208);
  EMC_Pb->SetLineColor(kBlack);
  //EMC_Pb->Draw("same");

  TLegend *l= new TLegend(0.6,0.7,0.7,0.9);
  l->AddEntry(EMC_C,"C ext","lp");
  //l->AddEntry(EMC_Fe,"Fe ext","lp");
  //l->AddEntry(EMC_Pb,"Pb ext","lp");
  l->AddEntry(hC,"C data","lp");
  //l->AddEntry(hFe,"Fe data","lp");
  //l->AddEntry(hPb,"Pb data","lp");

  l->Draw();
  c->SaveAs("emc_f_cmp.gif");
  c->SaveAs("emc_f_cmp.C");


  TH1F *hC_d  = (TH1F *)hC->Clone("hC_d");
  TH1F *hFe_d = (TH1F *)hC->Clone("hFe_d");
  TH1F *hPb_d = (TH1F *)hC->Clone("hPb_d");
  Double_t x;
  for (int k=0;k< hC_d->GetNbinsX();k++)
  {
    x = hC_d->GetBinLowEdge(k+1) + hC_d->GetBinWidth(k+1)/2.;
    hC_d->SetBinContent(k+1,hC->GetBinContent(k+1)-EMC_C->Eval(x));
    hFe_d->SetBinContent(k+1,hFe->GetBinContent(k+1)-EMC_Fe->Eval(x));
    hPb_d->SetBinContent(k+1,hPb->GetBinContent(k+1)-EMC_Pb->Eval(x));
    /*
    hC_d->SetBinContent(k+1,(hC->GetBinContent(k+1)-EMC_C(x))/EMC_C(x));
    hFe_d->SetBinContent(k+1,hFe->GetBinContent(k+1)-EMC_Fe(x)/);
    hPb_d->SetBinContent(k+1,hPb->GetBinContent(k+1)-EMC_Pb(x));
    */
  }

  THStack *hsd = new THStack();
  hsd->Add(hC_d);
  //hsd->Add(hFe_d);
  //hsd->Add(hPb_d);
  hsd->Draw("nostack");
  hsd->SetTitle("data/externals comparison");
  hsd->GetXaxis()->SetTitle("x_{B}");
  hsd->GetXaxis()->SetTitle("diff");
  TLegend *l1= new TLegend(0.6,0.7,0.7,0.9);
  l->AddEntry(hC_d,"C","lp");
  //l->AddEntry(hFe_d,"Fe","lp");
  //l->AddEntry(hPb_d,"Pb","lp");
  c->SaveAs("emc_diff.gif");
  c->SaveAs("emc_diff.C");

  std::cout<<"Done!"<<std::endl;
  fout->Close();
  return 0;
}
