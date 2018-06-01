{
  TString fname="Pt2Q2NuZpi0_aa_all_UML_Pcorr_bkgExpxG_Tvz/data_CD_C/binned.root";

  TString parname1="mg";
  TString parname2="sg";

  TFile fout("pi0_val_"+parname1+"_" + parname2+"_CC.root","recreate");
  
  Nbins=54;
  TH1F * h1= new TH1F("h1","values of: " + parname1,Nbins+2,-1,Nbins+1);
  h1->Sumw2();
  h1->SetMarkerStyle(kFullDotLarge);
  h1->SetMarkerSize(2);
  h1->SetLineWidth(2);
  TH1F * h2 = (TH1F *)h1->Clone("h2");
  h2->SetTitle("values of: " + parname2);

  h1->SetLineColor(kBlack);
  h1->SetMarkerColor(kBlack);
  h2->SetLineColor(kRed);
  h2->SetMarkerColor(kRed);


  TFile fin(fname);
  RooWorkspace *w =0;
  RooRealVar *par1=0,*par2=0;

  for (int k=0;k<Nbins;k++)
  {
    int bin=k;

    w = ( RooWorkspace *) fin.Get(Form("w1_%d",bin));
    par1= w->var(parname1);
    par2= w->var(parname2);
    
    h1->SetBinContent(k+2,par1->getVal());
    h1->SetBinError(k+2,par1->getError());

    h2->SetBinContent(k+2,par2->getVal());
    h2->SetBinError(k+2,par2->getError());
    
  }

  fout.cd();
  TCanvas *c  = new TCanvas("c", "The canvas",920,690);
  
  TRatioPlot *hr = new TRatioPlot(h1,h2,"divsym");
  hr->Draw("");
  h1->Write("",TObject::kOverwrite);
  h2->Write("",TObject::kOverwrite);
  hr->Write("hr",TObject::kOverwrite);
  c->Write("picture",TObject::kOverwrite);
  
}
