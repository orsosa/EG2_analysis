#include <iostream>
#include <fstream>
#include "TROOT.h"
#include "TF1.h"
#include "TH1F.h"
#include "TMath.h"
#include "TCanvas.h"
#include "TString.h"
#include "TStyle.h"
#include "TNtuple.h"
#include "TMathText.h"
#include "TFile.h"
#include "TLine.h"

#include "Math/Integrator.h"
TH1F *h;
TLine *lin;
Double_t hl=0.,ll=0.,ly0=0.,ly1=0.;
TF1 *fc;

Double_t fconv(Double_t *x,Double_t *par)
{
  Double_t w=par[0];// step width
  Double_t m=par[1];// step center.
  Double_t G=par[2];// Gain.
  Double_t sigma=par[3];// sigma gaussian
  Double_t mu=par[4];// mean gaussian
  Double_t p0=par[5];// p0 
  //Double_t p1=par[6];// p1 
  //  Double_t p2=par[7];// p2 
  //p2*x*x + p1*x + p0
  Double_t xx=x[0];

  Double_t Lmin = (m -xx -mu-w/2.)/(2.*sigma);
  Double_t Lmax = (m -xx -mu+w/2.)/(2.*sigma);

  return G*(TMath::Erf(Lmax) - TMath::Erf(Lmin)) + p0 ;//+ p1*xx ;//+ p2*xx*xx;
}

//int main(int argc, char *argv[])
int convolute(char* fname = "NelecPbD_sector.root")
{
  //Target//////////////////////
  char tt[3] = "Pb";
  bool lt = true;
  /////////////////////
  ofstream ofile;
  if (!lt)
  {
    ofile.open(Form("stlim%s.txt",tt));
    ofile<<tt<<std::endl;
  }
  else
  {
    ofile.open(Form("ltlim%s.txt",tt));
    ofile<<tt<<"\tD"<<std::endl;
  }


  TFile *f = new TFile(fname);
  TNtuple *t = (TNtuple *)f->Get("NElectrons");
  TStyle *sty = new TStyle();
  sty->SetOptFit();
  TCanvas *c =new TCanvas("c","c",800,600);

  //  TF1 *fnc = new TF1("fc",fconv,-32,-28,8);
  /*  fnc->SetParLimits(0,0,3);
  fnc->SetParLimits(1,0,-30);
  fnc->SetParLimits(2,0,16000);
  */
  //fnc->SetParLimits(3,0,50);
  //fnc->SetParLimits(4,-100,100);
  //  fnc->SetParLimits(0,5,100);
  //fnc->SetParLimits(0,6,0.1);
    fc = new TF1("fc","[0]*(TMath::Erf(([1] -x +[2]/2.)/(TMath::Sqrt(2)*[3])) - TMath::Erf( ([1] -x -[2]/2.)/(TMath::Sqrt(2)*[3]) ) ) + [4] + [5]*x + [6]*x*x",-26,-23);
    fc->SetParName(0,"G");
    fc->SetParName(1,"m");
    fc->SetParName(2,"w");
    fc->SetParName(3,"#sigma");
    fc->SetParName(4,"p0");
    fc->SetParName(5,"p1");
    fc->SetParName(6,"p2");
  

  //fc->SetParameters(25000.,-24.7,.5,0.2,-7000,-500,-500);

  for (int k=0;k<6;k++)
  {
    if (!lt)
      t->Draw("vze>>h(500,-27,-23)",Form("sector==%d",k));
    else
      t->Draw("vze>>h(500,-33,-27)",Form("sector==%d",k));
  //
    h = (TH1F *)gROOT->FindObject("h");
    h->Draw("e");

  
  //carbon sector 0
    if (k==0)
      if(!lt)
	fc->SetParameters(6.17953e+04,-2.48064e+01,8.79478e-02,1.99762e-01,-2.73302e+05,-2.20605e+04,-4.42321e+02);
      else
	fc->SetParameters(6.90240e+03,-3.02475e+01,2.09889e+00,2.25660e-01,2.45784e-01,-3.52902e+02,-1.07760e+01);

  //  6.17953e+04,-2.48064e+01,8.79478e-02,1.99762e-01,-2.73302e+05,-2.20605e+04,-4.42321e+02
  //ll = -2.54496417508581274e+01
  //hl = -2.41631205318945135e+01

  //ll = -3.19739633994748260e+01
  //hl = -2.85211135660150532e+01
  ////////////
  

//carbon sector 1
    if (k==1)
      if(!lt)
	fc->SetParameters(2.02615e+04,-2.42793e+01,2.44740e-01,2.07223e-01,-2.27359e+05,-1.87445e+04,-3.85077e+02);
      else
	fc->SetParameters(6.90240e+03,-3.02475e+01,2.09889e+00,2.25660e-01,2.45784e-01,-3.52902e+02,-1.07760e+01);

  //2.02615e+04,-2.42793e+01,2.44740e-01,2.07223e-01,-2.27359e+05,-1.87445e+04,-3.85077e+02
  //
  //ll =-2.50232990985517603e+01
  //hl =-2.35352194588232422e+01
  ////////////
  
//carbon sector 2
    if (k==2)
      if(!lt)
	fc->SetParameters(3.42990e+04,-2.40815e+01, 1.78732e-01,2.73285e-01,-4.56877e+04, -4.06111e+03,-8.85703e+01);
      else
	fc->SetParameters(6.90240e+03,-3.02475e+01,2.09889e+00,2.25660e-01,2.45784e-01,-3.52902e+02,-1.07760e+01);

  //3.42990e+04,-2.40815e+01, 1.78732e-01,2.73285e-01,-4.56877e+04, -4.06111e+03,-8.85703e+01
  //
  //ll =-2.49907218272411278e+01
  //hl =-2.31722806583457803e+01
  ////////////
  
//carbon sector 3
    if (k==3)
      if(!lt)
	fc->SetParameters(3.31785e+05,-2.45822e+01,2.04180e-02,2.00275e-01,-5.62693e+04 , -4.56986e+03, -9.15074e+01  );
      else
	fc->SetParameters(6.90240e+03,-3.02475e+01,2.09889e+00,2.25660e-01,2.45784e-01,-3.52902e+02,-1.07760e+01);

  //3.31785e+05,-2.45822e+01,2.04180e-02,2.00275e-01,-5.62693e+04 , -4.56986e+03, -9.15074e+01  
  //
  //ll =-2.51932430363700277e+01
  //hl =-2.39711765761255435e+01
  ////////////
  

//carbon sector 4
    if (k==4)
      if(!lt)
	fc->SetParameters( 2.88776e+05,-2.51833e+01,2.11001e-02,2.35494e-01,2.24911e+05,1.75781e+04,3.44530e+02);
      else
	fc->SetParameters(6.90240e+03,-3.02475e+01,2.09889e+00,2.25660e-01,2.45784e-01,-3.52902e+02,-1.07760e+01);

  // 2.88776e+05,-2.51833e+01,2.11001e-02,2.35494e-01,2.24911e+05,1.75781e+04,3.44530e+02

  //ll = -2.59002830273996203e+01
  //hl = -2.44662202779290645e+01
  ////////////
  
  //carbon sector 5
    if (k==5)
      if(!lt)
	fc->SetParameters(2.72428e+05,-2.53846e+01,2.27391e-02,3.05709e-01,-1.16503e+06,-9.13339e+04,-1.78678e+03 );
      else
	fc->SetParameters(6.90240e+03,-3.02475e+01,2.09889e+00,2.25660e-01,2.45784e-01,-3.52902e+02,-1.07760e+01);

  // 2.72428e+05,-2.53846e+01,2.27391e-02,3.05709e-01,-1.16503e+06,-9.13339e+04,-1.78678e+03
  //ll = -2.63131152130785679e+01
  //hl = -2.44561235811590478e+01
  ////////////
  
  // fc->SetParameters(10000.,-30.,2.,0.2,-4000,-500,-500);

  //  fnc->SetParameters(3.,-30.,1e4,0.05,-4,200);
    if (!lt)
      h->Fit("fc","","",-26.5,-23.5);
    else 
      h->Fit("fc","","",-32.5,-28.); 

    TMathText *tex = new TMathText(-24,4000,"G(Erf( \\frac{m-x-\\frac{w}{2}}{\\sqrt{2}\\sigma}) - Erf( \\frac{m-x-\\frac{w}{2}}{\\sqrt{2}\\sigma})) + p_0 + p_1x + p_2x^2");
    tex->Draw();
    h->GetXaxis()->SetTitle("z");
    h->GetYaxis()->SetTitle("\\ dN/dz");
    h->GetYaxis()->SetTitleOffset(1.1);
    
    lin = new TLine();
    lin ->SetLineWidth(2);
    ll = fc->GetParameter(1) - fc->GetParameter(2)/2. - 3*fc->GetParameter(3);
    hl = fc->GetParameter(1) + fc->GetParameter(2)/2. + 3*fc->GetParameter(3);
    ly0=0.;
    ly1=h->GetMaximum();
    lin->DrawLine(ll,ly0,ll,ly1);
    lin->DrawLine(hl,ly0,hl,ly1);
    if(!lt)
    {
      c->SaveAs(Form("tfit%s_sec%d.gif",tt,k));
      c->SaveAs(Form("tfit%s_sec%d.C",tt,k));
    }
    else
    {
      c->SaveAs(Form("tfit%sD_sec%d.gif",tt,k));
      c->SaveAs(Form("tfit%sD_sec%d.C",tt,k));
    }
    ofile<<k<<"\t"<<ll<<"\t"<<hl<<std::endl;
  }
  ofile.close();
  return 0;
}
