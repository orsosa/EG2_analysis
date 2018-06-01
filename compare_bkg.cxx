TCanvas * compare_bkg(TString fn0="file0.root", TString fn1="file1.root",TString foutn="cmp_bkg.root"){

  TCanvas *c = new TCanvas("c","c",800,600);
  TFile *f0 = new TFile(fn0);
  TFile *f1 = new TFile(fn1);

  THStack *hs0,*hs1;
  TFile *fout = new TFile(foutn,"recreate");
  THStack *hsdiff = new THStack("hsdiff","");
  TH1F *h0,*h1,*hdiff;

  hs0=(THStack*)f0->Get("allratios");
  hs1=(THStack*)f1->Get("allratios");
  h0=(TH1F*)hs0->GetHists()->At(0);
  for (int k=0;k<3;k++)
  {
    h0=(TH1F*)hs0->GetHists()->At(k);
    h1=(TH1F*)hs1->GetHists()->At(k);
    hdiff = (TH1F*)h0->Clone(TString(h0->GetName()) + "_diff");
    //hdiff = new TH1F(TString(h0->GetName()) + "_diff","M. Ratio Difference between models",6,0.4,1.0);
    Color_t cf, cl;
    Int_t Nbins = h0->GetNbinsX();
    for (int i=0;i<Nbins;i++)
    {
      Float_t diff_p = h0->GetBinContent(i+1)-h1->GetBinContent(i+1);
      diff_p/=h0->GetBinContent(i+1);
      diff_p*=100.;
      hdiff->SetBinContent(i+1,diff_p);
      hdiff->SetBinError(i+1,0.);
    }
    TString name =hdiff->GetName();
    if ( name.Contains("C")) { cf=kRed;cl=kRed;};
    if ( name.Contains("Fe")){ cf=kBlue;cl=kBlue;};
    if (name.Contains("Pb")) {cf =kBlack;cl=kBlack;};
    hdiff->SetFillColor(cf);
    hdiff->SetFillStyle(3016+k);
    
    hdiff->SetLineColor(cl);
    hdiff->GetYaxis()->SetTitle("Difference (%)");
    hdiff->SetLineWidth(2);
    hdiff->Write("",TObject::kOverwrite);

    c->SaveAs( foutn.Remove(foutn.First('.')) + TString(hdiff->GetName()) + ".gif");
    c->SaveAs( foutn + TString(hdiff->GetName()) + ".C");
    c->SaveAs( foutn + TString(hdiff->GetName()) + ".pdf");
    hsdiff->Add(hdiff);
  }
  hsdiff->Draw("nostackb");
  hsdiff->Write("hsdiff",TObject::kOverwrite);
  hsdiff->GetYaxis()->SetTitle(hdiff->GetYaxis()->GetTitle());
  hsdiff->GetXaxis()->SetTitle(hdiff->GetXaxis()->GetTitle());
  hsdiff->SetTitle("M. Ratio, Difference between models");
  c->SaveAs( foutn + ".gif");
  c->SaveAs( foutn + ".C");
  c->SaveAs( foutn + ".pdf");
  fout->Close();
  return c;
}
