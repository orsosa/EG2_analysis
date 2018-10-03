#include "TSpectrum.h"
#include "Riostream.h"
#include "TApplication.h"
#include "TROOT.h"
#include "TFile.h"
#include "TNtuple.h"
#include "TTree.h"
#include "TGraph.h"
#include "TMath.h"
#include "Math/WrappedTF1.h"
#include "Math/GSLIntegrator.h"
#include "TBenchmark.h"
#include "TLorentzVector.h"
#include "RooWorkspace.h"
#include "RooRealVar.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TLatex.h"
#include "TF1.h"
#include "TStyle.h"
#include "TCut.h"
#include "TString.h"
#include "TH1F.h"
#include "TH1D.h"
#include "THStack.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <sys/stat.h>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "BinMgr_rev.hxx"

TString srLTfile, gsLTfile, srSTfile, gsSTfile, dataLTfile, dataSTfile, dataElecfile, outdir, st, lt, suffix, bin_info, indir, sig_name;

std::vector<int> binorder;

bool acc_flag =false;
bool no_acc = false;
inline void print_help();
inline int parse_opt(int argc, char* argv[]);

int main(int argc, char *argv[])
{
  TBenchmark bench;
  bench.Start("job");
  parse_opt(argc,argv);

  TCanvas *c = new TCanvas("c","c",1200,900);
  
  c->SetGrid();

  if (outdir.IsNull())  outdir.Append("MRatio");
  if (indir.IsNull())  indir.Append(".");
  if (sig_name.IsNull())
  {
    std::cout<<"you must specify signal name"<<std::endl;exit(1);
  }
  else
  {
    std::cout<<"############# ATTENTION. USING SIGNAL NAME: "<<sig_name<<std::endl;
  }
 
  
  if (srLTfile.IsNull())  srLTfile.Append(Form("%s/sim_CD_D/binned.root",indir.Data()));
  if (gsLTfile.IsNull())  gsLTfile.Append(Form("%s/gsim_CD_Dgsim/binned.root",indir.Data()));
  if (srSTfile.IsNull())  srSTfile.Append(Form("%s/sim_CD_C/binned.root",indir.Data()));
  if (gsSTfile.IsNull())  gsSTfile.Append(Form("%s/gsim_CD_Cgsim/binned.root",indir.Data()));
  if (dataLTfile.IsNull())  dataLTfile.Append(Form("%s/data_%sD_D/binned.root",indir.Data(),st.Data()));
  if (dataSTfile.IsNull())  dataSTfile.Append(Form("%s/data_%sD_%s/binned.root",indir.Data(),st.Data(),st.Data()));

  if (dataElecfile.IsNull())  dataElecfile.Append( Form("/user/o/orsosa/osoto_ana/Ne_TargConf_OS_Hcut_sf.root") );

  TFile *outf;
  THStack *allratios;

  struct stat sb;
  if (stat(Form("%s.root",outdir.Data()), &sb) != 0)
  {
    std::cout<<"File: "<<outdir.Data()<<".root doesn't exist. creating...\n";
    outf = new TFile(outdir + ".root","recreate");
    allratios = new THStack();
  }
  else
  {
    outf = new TFile(outdir + ".root","update");
    allratios = (THStack *)outf->Get("allratios");
  }

  Color_t histcolor=0;
  TString histname="";
  if (st=="C") {histcolor=kRed;histname="hMR_C";}
  if (st=="Fe") {histcolor=kBlue;histname="hMR_Fe";}
  if (st=="Pb") {histcolor=kBlack;histname="hMR_Pb";}

  //  if (st.IsNull()) st.Append("C");
  outdir.Append(st.Data());

  if (stat(outdir.Data(), &sb) != 0)
  {
    std::cout<<"Folder: "<<outdir.Data()<<" doesn't exist. creating...\n";
    system(Form("mkdir %s",outdir.Data()));
  }
  std::cout<<"########\nliquid sim rec file: "<<srLTfile.Data()<<" gsim file: "<<gsLTfile.Data()<<"\n##########\n";
  std::cout<<"########\nsolid sim rec file: "<<srSTfile.Data()<<" gsim file: "<<gsSTfile.Data()<<"\n##########\n";
  std::cout<<"########\ndata solid: "<<dataSTfile.Data()<<" data liquid: "<<dataLTfile.Data()<<"\n##########\n";

  TFile *frLT=0, *fgLT=0, *frST=0, *fgST=0;
  if(!no_acc)
  {
    frLT = new TFile(srLTfile.Data(),"read");
    fgLT = new TFile(gsLTfile.Data(),"read");
    frST = new TFile(srSTfile.Data(),"read");
    fgST = new TFile(gsSTfile.Data(),"read");
  }
  TFile * fdataLT= new TFile(dataLTfile.Data(),"read");
  TFile * fdataST= new TFile(dataSTfile.Data(),"read");
  TFile *fdataElec;

  BinMgr bm; //reading binning_info.txt by default.
  if (binorder.empty()) for (int i=0;i<bm.Nf;i++) binorder.push_back(i);
  bm.setBinOrder(binorder);

  if (!strcmp(bm.getNameX(),"Q2") || !strcmp(bm.getNameX(),"Nu") )
    fdataElec = new TFile("/home/orsosa/EG2_Analysis/Ne_AllTarg_OSim_Tcut_Q2Nu.root","read");
  else
    fdataElec = new TFile(dataElecfile.Data(),"read");

  
  TH2F *hMR_2D = new TH2F("hMR_2D","Multiplicity ratio formated 2D histogram only data",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);

  TH2F *hMRa_2D = new TH2F("hMRa_2D","Multiplicity ratio formated 2D histogram + AC",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);
  
  TH2F *h_acc2D_ST = new TH2F("h_acc2D_ST","acceptance formated 2D histogram ST",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);

  TH2F *h_acc2D_LT = new TH2F("h_acc2D_LT","acceptance formated 2D histogram LT",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);

  TH2F *hNh_dST = new TH2F("hNh_dST","N hadrons formated 2D histogram ST",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);

  TH2F *hNh_dLT = new TH2F("hNh_dLT","N hadrons formated 2D histogram LT",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);

  TH2F *hNh_gST = new TH2F("hNh_gST","N hadrons formated 2D histogram ST sim",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);

  TH2F *hNh_gLT = new TH2F("hNh_gLT","N hadrons formated 2D histogram LT sim",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);
  
  TH2F *hNh_rST = new TH2F("hNh_rST","N hadrons formated 2D histogram ST rec",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);

  TH2F *hNh_rLT = new TH2F("hNh_rLT","N hadrons formated 2D histogram LT rec",bm.getNEdgesX()-1,bm.getBinEdgesX(),bm.NY+2,-1,bm.NY+1);

  //  TH1D *hMRatioProj = new TH1D("hMRatioProj",Form("Multiplicity Ratio (%s)",bm.getNameX()),bm.getNEdgesX()-1,bm.getBinEdgesX());
  TH1D *hMRatioProj;
  
  Double_t NeD,NeA;
  TH2F *heST,*heLT;

  heST=(TH2F*)fdataElec->Get(Form("hNelec%s%s_a",st.Data(),st.Data()));
  heLT=(TH2F*)fdataElec->Get(Form("hNelec%sD_a",st.Data()));
  Int_t xbin_h,ybin_h;
  xbin_h = heST->GetNbinsX();//Q2
  ybin_h = heST->GetNbinsY();//Nu
  NeA = heST->Integral(1,xbin_h,1,ybin_h);
  NeD = heLT->Integral(1,xbin_h,1,ybin_h);
  
  ///////////////////// SIGNAL NAME/////////////////
  TString signal_name=sig_name; ////// remember which particle are you analysing!!
  /////////////////////////////////////////////////
  
  RooWorkspace *ws_rLT=0, *ws_gLT=0, *ws_rST=0, *ws_gST=0, *ws_dLT=0, *ws_dST=0;
  RooRealVar *Nh_dST,*Nh_dLT,*Nh_gST,*Nh_gLT,*Nh_rST,*Nh_rLT;

  for (int k=0;k<bm.N;k++)
  {
    if (!no_acc) // including acceptance
    {
      ws_rLT = (RooWorkspace*)frLT ->Get(Form("w1_%d",k));      
      ws_gLT = (RooWorkspace*)fgLT ->Get(Form("w1_%d",k));
      ws_rST = (RooWorkspace*)frST ->Get(Form("w1_%d",k));
      ws_gST = (RooWorkspace*)fgST ->Get(Form("w1_%d",k));

      Nh_rST=(RooRealVar*)ws_rST->var(signal_name.Data());
      Nh_gST=(RooRealVar*)ws_gST->var(signal_name.Data());
      Nh_rLT=(RooRealVar*)ws_rLT->var(signal_name.Data());
      Nh_gLT=(RooRealVar*)ws_gLT->var(signal_name.Data());
    }
    else
    {
      Nh_rST= new RooRealVar("Nrst","N hadron rec",1.);
      Nh_gST= new RooRealVar("Ngst","N hadron sim",1.);
      Nh_rLT= new RooRealVar("Nrlt","N hadron rec",1.);
      Nh_gLT= new RooRealVar("Nglt","N hadron sim",1.);

    }

    ws_dST = (RooWorkspace*)fdataST ->Get(Form("w1_%d",k));
    ws_dLT = (RooWorkspace*)fdataLT ->Get(Form("w1_%d",k));      

    Nh_dST = (RooRealVar*)ws_dST->var(signal_name.Data());
    Nh_dLT = (RooRealVar*)ws_dLT->var(signal_name.Data());

    bm.getIndexRaw(k);

    ///// Data solid target///////
    hNh_dST->SetBinContent(bm.getCodeX()+1,bm.getCodeY()+2,Nh_dST->getVal());// Y start at -1, aesthetic reasons.
    hNh_dST->SetBinError(bm.getCodeX()+1,bm.getCodeY()+2,Nh_dST->getError());// Y start at -1, aesthetic reasons.

    ///// Data liquid target///////
    hNh_dLT->SetBinContent(bm.getCodeX()+1,bm.getCodeY()+2,Nh_dLT->getVal());// Y start at -1, aesthetic reasons.
    hNh_dLT->SetBinError(bm.getCodeX()+1,bm.getCodeY()+2,Nh_dLT->getError());// Y start at -1, aesthetic reasons.

    ///// sim solid target///////
    hNh_gST->SetBinContent(bm.getCodeX()+1,bm.getCodeY()+2,Nh_gST->getVal());// Y start at -1, aesthetic reasons.
    hNh_gST->SetBinError(bm.getCodeX()+1,bm.getCodeY()+2,Nh_gST->getError());// Y start at -1, aesthetic reasons.

    ///// sim liquid target///////
    hNh_gLT->SetBinContent(bm.getCodeX()+1,bm.getCodeY()+2,Nh_gLT->getVal());// Y start at -1, aesthetic reasons.
    hNh_gLT->SetBinError(bm.getCodeX()+1,bm.getCodeY()+2,Nh_gLT->getError());// Y start at -1, aesthetic reasons.

    ///// rec sim solid target///////
    hNh_rST->SetBinContent(bm.getCodeX()+1,bm.getCodeY()+2,Nh_rST->getVal());// Y start at -1, aesthetic reasons.
    hNh_rST->SetBinError(bm.getCodeX()+1,bm.getCodeY()+2,Nh_rST->getError());// Y start at -1, aesthetic reasons.

    ///// recsim liquid target///////
    hNh_rLT->SetBinContent(bm.getCodeX()+1,bm.getCodeY()+2,Nh_rLT->getVal());// Y start at -1, aesthetic reasons.
    hNh_rLT->SetBinError(bm.getCodeX()+1,bm.getCodeY()+2,Nh_rLT->getError());// Y start at -1, aesthetic reasons.
  }
  //// Making Histograms Divisions. ////////////////////

  std::cout<<"Electrons:::LT:::ST\n";
  std::cout<<NeD<<":::"<<NeA<<std::endl;
  std::cout<<":::::::::::::::::::::\n";
  hMR_2D->Divide(hNh_dST,hNh_dLT,NeD,NeA);//Ratio, only data.

  h_acc2D_ST->Divide(hNh_rST,hNh_gST);// Acceptance.
  h_acc2D_LT->Divide(hNh_rLT,hNh_gLT);// Acceptance.

  outf->cd();
  hNh_dST->Write(histname+"_noacc_2D_ST",TObject::kOverwrite);
  hNh_dLT->Write(histname+"_noacc_2D_LT",TObject::kOverwrite);
  
  hNh_dST->Divide(h_acc2D_ST);
  hNh_dLT->Divide(h_acc2D_LT);  

  hMRa_2D->Divide(hNh_dST,hNh_dLT,NeD,NeA);// Ratio + AC

  /////////// 1D Projections /////////////
  TH1D *hST_px = hNh_dST->ProjectionX("hST_px",1,hNh_dST->GetNbinsY());
  TH1D *hLT_px = hNh_dLT->ProjectionX("hLT_px",1,hNh_dLT->GetNbinsY());
  ///////////////////////////////////////
  hMRatioProj = (TH1D*)hST_px->Clone("hMRatioProj");
  TH1D *hST_elec_px=0,*hLT_elec_px=0;
  if (!strcmp(bm.getNameX(),"Q2"))
  {
    hST_elec_px = (TH1D*)heST->ProjectionY("hST_elec_px");
    hLT_elec_px = (TH1D*)heLT->ProjectionY("hLT_elec_px");
    hST_px->Divide(hST_elec_px);
    hLT_px->Divide(hLT_elec_px);
    
    hMRatioProj->Divide(hST_px,hLT_px);
  }
  else if (!strcmp(bm.getNameX(),"Nu"))
  {
    hST_elec_px = (TH1D*)heST->ProjectionX("hST_elec_px");
    hLT_elec_px = (TH1D*)heLT->ProjectionX("hLT_elec_px");
    hST_px->Divide(hST_elec_px);
    hLT_px->Divide(hLT_elec_px);
    
    hMRatioProj->Divide(hST_px,hLT_px);
  }
  else
    hMRatioProj->Divide(hST_px,hLT_px,NeD,NeA);

  hMRatioProj->SetTitle( Form("Multiplicity Ratio (%s)",bm.getNameX()) );

  hMRatioProj->SetMarkerStyle(kFullDotLarge);
  hMRatioProj->SetMarkerColor(histcolor);
  hMRatioProj->SetLineColor(histcolor);
  hMRatioProj->SetName(histname);
  hMRatioProj->SetTitle(histname);
  hMRatioProj->SetMarkerSize(3);
  hMRatioProj->SetLineWidth(3);
  
  hMRatioProj->SetStats(0);
  hMRatioProj->GetXaxis()->SetTitle(Form("%s",bm.getNameX()));
  hMRatioProj->GetYaxis()->SetTitle(Form("R(%s)",bm.getNameX()));
  hMRatioProj->Draw("ep");
  /////////////////////////
  
  allratios->Add(hMRatioProj);
  allratios->Print();

  c->SaveAs(Form("%s/hMRa_1d_%s_%s.gif",outdir.Data(),bm.getNameX(),suffix.Data()));
  c->SaveAs(Form("%s/hMRa_1d_%s_%s.pdf",outdir.Data(),bm.getNameX(),suffix.Data()));
  c->SaveAs(Form("%s/hMRa_1d_%s_%s.C",outdir.Data(),bm.getNameX(),suffix.Data()));
  outf->cd();
  allratios->Write("allratios",TObject::kOverwrite);
  hNh_dST->Write(histname+"2D_ST",TObject::kOverwrite);
  hNh_dLT->Write(histname+"2D_LT",TObject::kOverwrite);
  hMR_2D->Write(histname+"2D_MR",TObject::kOverwrite);
  hMRa_2D->Write(histname+"2D_MR_ac",TObject::kOverwrite);

  if (!no_acc)
  {
    h_acc2D_ST->Write(histname+"2D_STacc",TObject::kOverwrite);
    h_acc2D_LT->Write(histname+"2D_LTacc",TObject::kOverwrite);
  }
  
  outf->Close();
  bench.Show("job");
  
  return 0;
}

inline void print_help()
{
  std::cout<<"####### Help #########\n"
    "\t-a                    : include acceptance pictures.\n"
    "\t-r <simrec file>      : sim reconstructed file. Default bindata.root\n"
    "\t-g <gsim file>        : gsim file. Default bindata.root\n"
    "\t-d <dir>              : Set out directory. Default accQ2Z\n"
    "\t-t <target type>      : Set solid target. Default C\n"
    "\t-l                    : use liquid target.\n"
    "\t-n                    : use liquid target.\n"
    "\t-o <0,1,2...>         : bin order\n" 
    "\t-h                    : Print help.\n"
    "#########################"	   <<std::endl;
  exit(0);
}


inline int parse_opt(int argc, char* argv[])
{
  int c;
  if(argc==1)
    print_help();
  while ((c = getopt (argc, argv, "ar:g:hd:lt:o:ni:e:s:")) != -1)
    switch (c)
      {
      case 'a':
        acc_flag = true;
        break;
      case 'i':
        indir.Append(optarg);
        break;
      case 'r':
        srLTfile.Append(optarg);
        break;
      case 't':
        st.Append(optarg);
        break;
      case 'e':
        dataElecfile.Append(optarg);
        break;
      case 'g':
        gsLTfile.Append(optarg);
        break;
      case 'd':
        outdir.Append(optarg);
        break;
      case 'n':
        no_acc = true;
        break;
      case 'l':
        lt.Append("D");
        break;
      case 's':
        sig_name.Append(optarg);
        break;
      case 'o':
	{
	  std::istringstream ins(optarg);
	  for (std::string p; std::getline(ins,p,','); )
	  {
	    int nf=atoi( p.c_str() );
	    binorder.push_back( nf );
	  }
	}
	break;
      case 'h':
	print_help();
	break;
      case '?':
        if (optopt == 'r')
          fprintf (stderr, "Option -%c target type [Fe | C | Pb | Al].\n", optopt);
        else if (isprint (optopt))
          fprintf (stderr, "Unknown option `-%c'.\n", optopt);
        else
          fprintf (stderr,
                   "Unknown option character `\\x%x'.\n",
                   optopt);
        return 1;
      default:
        abort ();
      }
  return 0;
}
