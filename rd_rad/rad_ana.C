{
  TCanvas *cNu = new TCanvas("cNu","cNu",1024,768);
  TCanvas *cxB = new TCanvas("cxB","cxB",1024,768);
  cNu->SetGrid();  
  cxB->SetGrid();
  TFile *f = new TFile("rad_data.root","update");
  TNtuple *tall = (TNtuple *)f->Get("tall");
  Int_t NbinNu=20;
  Int_t NbinX =20;
  //
  /*
  In any case here are the files! Each line is ee[X][Y] with X the
target (0 for deuterium and 1 for the solid target indicated in the
title of the file) and with the bin number Y = bin(xB)+20xbin(Nu) (see
table below).*/

  //////////////////// SELECT TARGET /////////////////////
  TString TT="Fe";
  gROOT->ProcessLine(".x RadPim"+TT+".C");
  Float_t ee[2][400];
  for(int k=0;k<2;k++)
    for(int kk=0;kk<400;kk++)
      ee[k][kk]=eeFe[k][kk];
  ////////////////////////////////////////////////////////


  Float_t Nu[21] = {2.25, 2.45, 2.66, 2.82, 2.96, 3.07, 3.17, 3.27, 3.37, 3.46, 3.55, 3.64, 3.72, 3.80, 3.87, 3.94, 4.01, 4.07, 4.12, 4.18, 4.25};
  
  Float_t xB[21]= {0.12, 0.15, 0.17, 0.18, 0.19, 0.20, 0.21, 0.22, 0.23, 0.24, 0.25, 0.26, 0.27, 0.28, 0.30, 0.33, 0.36, 0.39, 0.43, 0.48, 0.56};

  TCut nuc = "";
  TCut xBc = "";
  TH2F *h[20];
  TH2F *hn[20];

  gStyle->SetOptStat(0);
  
  TLegend *l= new TLegend(0.3,0.15,0.85,0.4);
  TLegend *lNu= new TLegend(0.3,0.15,0.85,0.4);
  l->SetNColumns(3);
  lNu->SetNColumns(3);

  for (int k=0;k<NbinX;k++)
  {
    //////////// create hists ///////////
    h[k] = new TH2F(Form("hx%d",k),"h",500,0.1,0.58,500,0.9,1.05);
    h[k]->SetMarkerStyle(kFullDotLarge);
    h[k]->SetMarkerColor(30+k);
    h[k]->SetMarkerSize(1.5);
    h[k]->GetXaxis()->SetTitle("x_{B}");
    h[k]->GetYaxis()->SetTitle("#frac{#sigma^{"+TT+"}_{rad}/#sigma^{"+TT+"}_{born}}{#sigma^{D}_{rad}/#sigma^{D}_{born}}");
    h[k]->SetTitle("Radiative correction " + TT + "/D");

    hn[k] = new TH2F(Form("hn%d",k),"hn",500,2.2,4.12,500,0.9,1.05);
    hn[k]->SetMarkerStyle(kFullDotLarge);
    hn[k]->SetMarkerColor(30+k);
    hn[k]->SetMarkerSize(1.5);
    hn[k]->GetXaxis()->SetTitle("#nu");
    hn[k]->GetYaxis()->SetTitle("#frac{#sigma^{"+TT+"}_{rad}/#sigma^{"+TT+"}_{born}}{#sigma^{D}_{rad}/#sigma^{D}_{born}}");
    hn[k]->SetTitle("Radiative correction "+TT+"/D");
    ////////////////////////

    nuc = Form("%f<Nu&&Nu<%f",Nu[k],Nu[k+1]);
    xBc = Form("%f<x&&x<%f",xB[k],xB[k+1]);
    tall->Draw(Form("rf%s/rfd:x>>hx%d",TT.Data(),k),nuc,"goff");
    tall->Draw(Form("rf%s/rfd:Nu>>hn%d",TT.Data(),k),xBc,"goff");
    cxB->cd();
    if (k==0) h[k]->Draw("p");
    else h[k]->Draw("psame");
    l->AddEntry(Form("hx%d",k),Form("%.2f<#nu<%.2f",Nu[k],Nu[k+1]),"p");
    cNu->cd();
    if (k==0) hn[k]->Draw("p");
    else hn[k]->Draw("psame");
    lNu->AddEntry(Form("hn%d",k),Form("%.2f<xB<%.2f",xB[k],xB[k+1]),"p");
    
  }    

  cxB->cd();
  l->Draw();
  cNu->cd();
  lNu->Draw();
  
  TCanvas *c0 = new TCanvas("c0","c0",1024,768);
  TH2F *h2 = new TH2F("h2","h2",20,xB,20,Nu);
  Int_t Np = tall->Draw(Form("x:Nu:rf%s/rfd",TT.Data()),"","goff");
  for (int k=0;k<Np;k++)
  {
    h2->Fill(tall->GetV1()[k],tall->GetV2()[k],tall->GetV3()[k]);
  }
  for (int k=0;k<20;k++)
    for (int kk=0;kk<20;kk++)
    {
      if (h2->GetBinContent(k+1,kk+1)==0)
	h2->SetBinContent(k+1,kk+1,-10);
    }
  
  
  h2->SetMinimum(.94);
  h2->GetXaxis()->SetTitle("xB");
  h2->GetYaxis()->SetTitle("#nu");
  h2->GetYaxis()->SetTitleOffset(1.5);
  h2->GetXaxis()->SetTitleOffset(1.5);
  h2->GetZaxis()->SetTitleOffset(1.2);
  h2->GetZaxis()->SetTitle("#frac{#sigma^{"+TT+"}_{rad}/#sigma^{"+TT+"}_{born}}{#sigma^{D}_{rad}/#sigma^{D}_{born}}");
  h2->SetContour(99);
  h2->SetTitle("Radiative correction Pb over D2");
  h2->Draw("lego2");


  Int_t bin =0;
  TH1F *hcmp = new TH1F("hcmp","Radiative correction relative difference "+TT,400,0,400);
  gStyle->SetOptStat(1); 
  TH1F *hcmp0 = new TH1F("hcmp0","Radiative correction relative difference "+TT,100,-10,10);
  for (int kx=0;kx<20;kx++)
  {
    for (int kn=0;kn<20;kn++)
    {
      bin = kn*20 + kx;
      Float_t nu=(Nu[kn] + Nu[kn+1])/2.;
      Float_t x=(xB[kx] + xB[kx+1])/2.;
      Int_t b=h2->FindBin(x,nu);
      //if (eePb[0][bin] !=0 && eePb[1][bin] !=0 && h2->GetBinContent(b%22,b/22) >0)
      if (ee[0][bin] !=0 && ee[1][bin] !=0 && h2->GetBinContent(b%22,b/22) >0)
      {
	//	Float_t rd_corr=eePb[1][bin]/eePb[0][bin];
	Float_t rd_corr=ee[1][bin]/ee[0][bin];
	Float_t ex_corr=h2->GetBinContent(b%22,b/22);
	hcmp->Fill(bin,(ex_corr-rd_corr)/ex_corr*100.);
	hcmp0->Fill((ex_corr-rd_corr)/ex_corr*100);
      }
      else hcmp->Fill(bin,-100);
    }
  }
  hcmp->SetMaximum(4.0);
  hcmp->SetMinimum(-3.0);
  
  TCanvas *cmp=new TCanvas("cmp","cmp",1024,768);
  hcmp->Write("hcmp"+TT,TObject::kOverwrite);
  hcmp->SetMarkerStyle(kFullDotLarge);
  hcmp->GetXaxis()->SetTitle("bin (bin_{x} + 20 bin_{#nu})");
  hcmp->GetYaxis()->SetTitle("(ext - rd)/ext*100 (%)");
  hcmp->Draw("p");
  cmp->SaveAs("cmp"+TT+"D_bin.gif");
  cmp->SaveAs("cmp"+TT+"D_bin.C");
  TCanvas *cmp0=new TCanvas("cmp0","cmp0",1024,768);
  hcmp0->Write("hcmp0"+TT,TObject::kOverwrite);
  hcmp0->SetMarkerStyle(kFullDotLarge);
  hcmp0->GetXaxis()->SetTitle("(ext - rd)/ext*100 (%)");
  hcmp0->Draw("");
  cmp0->SaveAs("cmp"+TT+"D_hist.gif");
  cmp0->SaveAs("cmp"+TT+"D_hist.C");

  // f->Close();
}
