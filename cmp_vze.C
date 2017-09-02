#include <iostream>
#include <fstream>
#include "TCanvas.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TString.h"
#include "TLine.h"
#include "TCut.h"
#include "TH2F.h"
#include "TStyle.h"

Int_t p_vertex_cut_elec = 0;
Double_t ele_liq_lim[6][2];
Double_t ele_sol_low[6];
Double_t  ele_sol_high;

int getHaykLim(TCut &hscut, TCut &hlcut, Int_t &n_sector);

int cmp_vze(){
  TCanvas *c =new TCanvas("c","c",1280,960);
  c->SetLogz();
  c->SetGrid();
  /*  TStyle *gst = new TStyle();
  gst->SetOptStat(0);
  gst->cd();
  */
  gStyle->SetOptStat(0);
  //  gStyle->SetPalette(40);
  TFile *f;
  TString tt[3]={"C","Fe","Pb"};
  Int_t Nt=3,Ns=6;
  char aux[100];
  TNtuple *t;
  TLine *lin = new TLine();
  lin->SetLineWidth(2);
  TCut hscut,hlcut;
  Int_t n_sector=0;
  getHaykLim(hscut, hlcut, n_sector);
  for (int k=0;k<Nt;k++)
  {
    f= new TFile("Nelec"+ tt[k] + "D_sector.root","read");
    t = (TNtuple *)f->Get("NElectrons");
    //t->SetMaxEntryLoop(1e6);
    t->SetAlias("xB","Q2/2/Nu/0.93827");
    //solid
    std::ifstream stin("stlim"+ tt[k]+".txt");
    //liquid
    std::ifstream ltin("ltlim"+ tt[k]+".txt");
    stin.getline(aux,100);
    ltin.getline(aux,100);

    Float_t sec,ll,hl,ymin=0.1,ymax=0.6, zmin=-34,zmax=-18;
    TH2F *h = new TH2F("h","xB vs electron vertex",500,zmin,zmax,500,ymin,ymax);
    h->GetXaxis()->SetTitle("vz (mm)");
    h->GetYaxis()->SetTitle("xB");
    
    f->Add(h);
    TCut secCut;

    for (int i=0;i<Ns;i++)
    {
      secCut = Form("sector==%d",i);
      t->Draw("xB:vze>>h",secCut,"colz");

      stin>>sec>>ll>>hl;
      lin->SetLineColor(kBlue);
      lin->DrawLine(ll,ymin,ll,ymax);
      lin->DrawLine(hl,ymin,hl,ymax);

      ltin>>sec>>ll>>hl;
      lin->DrawLine(ll,ymin,ll,ymax);
      lin->DrawLine(hl,ymin,hl,ymax);

      lin->SetLineColor(kRed);
      ll=ele_sol_low[i];
      hl=ele_sol_high;
      lin->DrawLine(ll,ymin,ll,ymax);
      lin->DrawLine(hl,ymin,hl,ymax);
      
      ele_liq_lim[6][2];
      ll=ele_liq_lim[i][0];
      hl=ele_liq_lim[i][1];
      lin->DrawLine(ll,ymin,ll,ymax);
      lin->DrawLine(hl,ymin,hl,ymax);
      
      c->SaveAs("xB_vze" + tt[k] + Form("%d.gif",i));
      c->SaveAs("xB_vze" + tt[k] + Form("%d.C",i));
    }
    f->Remove(h);
    delete f;
    stin.close();
    ltin.close();
  }
  return 0;
}

int getHaykLim(TCut &hscut, TCut &hlcut, Int_t &n_sector)
{
  ele_liq_lim[0][0] = -32.5;
  ele_liq_lim[0][1] = -28;
  ele_liq_lim[1][0] = -32.5;
  ele_liq_lim[1][1] = -27.5;
  ele_liq_lim[2][0] = -32;
  ele_liq_lim[2][1] = -27.25;
  ele_liq_lim[3][0] = -32;
  ele_liq_lim[3][1] = -27.75;
  ele_liq_lim[4][0] = -32.5;
  ele_liq_lim[4][1] = -28.35;
  ele_liq_lim[5][0] = -33.5;
  ele_liq_lim[5][1] = -28.75;
  
  ele_sol_high = -20;
  
  ele_sol_low[0] = -26.5;
  ele_sol_low[1] = -26.;
  ele_sol_low[2] = -25.65;
  ele_sol_low[3] = -25.85;
  ele_sol_low[4] = -26.65;
  ele_sol_low[5] = -27.15;
  
  hlcut=Form("%e<vze&&vze<%e",ele_liq_lim[n_sector][0],ele_liq_lim[n_sector][1]);
  hscut=Form("%e<vze&&vze<%e",ele_sol_low[n_sector], ele_sol_high);
  
  return 0;
}
