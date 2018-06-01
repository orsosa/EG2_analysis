int compare_ratios(TString fname, TString facname,TString picname="outpic")
{
  TCanvas *c = new TCanvas();
  c->SetGrid();
  TFile *fraw =new TFile(fname);
  TFile *fac = new TFile(facname);
  THStack *ha = (THStack*)fac->Get("allratios");
  THStack *h = (THStack*)fraw->Get("allratios");
  TFile fout(picname+".root","recreate");
  ha->Write("hs_ac");
  h->Write("hs_raw");

  TLegend *leg=new TLegend(0.25,0.12,0.41,0.33);
  for (int i=0;i<3;i++)
  {
    ((TH1F*)h->GetHists()->At(i))->SetLineWidth(3);
    ((TH1F*)ha->GetHists()->At(i))->SetLineWidth(3);
    leg->AddEntry( ((TH1F*)h->GetHists()->At(i)), ((TH1F*)h->GetHists()->At(i))->GetName(),"lp");
    leg->AddEntry( ((TH1F*)ha->GetHists()->At(i)), ((TH1F*)ha->GetHists()->At(i))->GetName() + TString(" + AC"),"lp");
    ((TH1F*)h->GetHists()->At(i))->SetMarkerStyle(kOpenSquareDiagonal);
    ((TH1F*)h->GetHists()->At(i))->SetMarkerSize(2);
    ((TH1F*)ha->GetHists()->At(i))->SetMarkerSize(2);
    ha->Add (((TH1F*)h->GetHists()->At(i)));
  }

  ha->Draw("nostack");
  ha->GetXaxis()->SetTitle("Z");
  ha->GetYaxis()->SetTitle("R^{A}_{D}");
  ha->SetTitle("Multipicity Ratio");
  leg->Draw();
  // h->Draw("nostacksame");
  c->SaveAs(picname+".pdf");
  c->SaveAs(picname+".gif");
  //  c->SaveAs(picname+".svg");
  fout.cd();
  c->Write("picture");
  ha->Write("hs_all");

  return 0;
}
