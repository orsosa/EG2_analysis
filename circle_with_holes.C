//2D gaussian function
Double_t Gaus2D(Double_t *x, Double_t *par) {
  Double_t r1 = Double_t((x[0]-par[1])/par[2]);
  Double_t r2 = Double_t((x[1]-par[3])/par[4]);
  return par[0]*TMath::Exp(-0.5*(r1*r1+(par[5]*r1*r2)+r2*r2));
}

//Draw circle with holes
TCanvas *circle_with_holes(){
  TCanvas *c1 = new TCanvas("c1", "c1", 500, 500);
  c1->cd();

  //define 2D gaussian function
  TF2* fgaus2d = new TF2("gaussian_fill", &Plotters::Gaus2D, -3, 3, -3, 3, 6);
  fgaus2d->SetParameters(1.,0,1,0,1,0);
  fgaus2d->SetParNames("norm","xmean","xsigma","ymean","ysigma","orientation");

  Float_t   xlow= -2;
  Float_t   xhigh= 2;
  //fill random gaussian histogram
  TH2D* hist = new TH2D("hist","2D gaussian",100,xlow,xhigh,100,-2,2);
  hist->FillRandom("gaussian_fill", 100000);
  hist->Draw("colz");
  Float_t x=0.5, y=0.5, R=0.4, x0=0.4, y0=0.4, r0=0.1, x1=0.6, y1=0.6, r1=0.1;

  Int_t Np=1000;
  TCutG *r0cut = new TCutG("r0cut",Np);
  TCutG *r1cut = new TCutG("r1cut",Np);
  TCutG *Rcut = new TCutG("Rcut",Np);

  Float_t dx=(x-xlow)/Np;
  Float_t xx;
  Float_t yy;

  for (int k=0;k<Np/2;k++)
  {
    xx= dx*k+x0;
    yy= y0 + TMath::Sqrt(r0*r0 - (xx-x0)*(xx-x0));
    r0cut->SetPoint(k,xx,yy);
    xx= x0+r0-dx*k;
    yy= y0 - TMath::Sqrt(r0*r0 - (xx-x0)*(xx-x0));
    r0cut->SetPoint(k+Np/2,xx,yy);

    xx= dx*k+x1;
    yy= y1 + TMath::Sqrt(r1*r1 - (xx-x1)*(xx-x1));
    r1cut->SetPoint(k,xx,yy);
    xx= x1+r1-dx*k;
    yy= y1 - TMath::Sqrt(r1*r1 - (xx-x1)*(xx-x1));
    r1cut->SetPoint(k+Np/2,xx,yy);

    xx= dx*k+x;
    yy= y + TMath::Sqrt(R*R - (xx-x)*(xx-x));
    Rcut->SetPoint(k,xx,yy);
    xx= x+R-dx*k;
    yy= y - TMath::Sqrt(R*R - (xx-x)*(xx-x));
    Rcut->SetPoint(k+Np/2,xx,yy);
  }

  Rcut->SetFillStyle(1001);
  Rcut->SetFillColor(kGray);
  r0cut->SetFillStyle(0);
  r1cut->SetFillStyle(0);

  Rcut->Draw("same");
  r0cut->Draw("same");
  /*
  TEllipse *circle = new TEllipse(x, y, R);
  circle->SetLineWidth(6);
  circle->SetFillStyle(1001); //solid
  circle->SetFillColor(kGray);
  circle->Draw("Lf");

  TEllipse *hole1 = new TEllipse(x0, y0, r0);
  hole1->SetLineWidth(6);
  hole1->SetFillStyle(0); //hollow
  hole1->Draw("L");

  TEllipse *hole2 = new TEllipse(x1, y1, r1);
  hole2->SetLineWidth(6);
  hole2->SetFillStyle(0); //hollow
  hole2->Draw("L");
  */
  return c1;
}
