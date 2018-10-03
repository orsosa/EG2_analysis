int compare_2a_3pi_ratios(TString fname, TString facname,TString xtitle="",TString var="",TString picname="outpic")
{
  TCanvas *c = new TCanvas();
  c->SetGrid();
  TFile *fraw =new TFile(fname);
  TFile *fac = new TFile(facname);
  THStack *ha = (THStack*)fac->Get("R_"+var);
  THStack *h = (THStack*)fraw->Get("allratios");
  TFile fout(picname+".root","recreate");
  ha->Write("hs_3pi");
  h->Write("hs_aa");

  //TLegend *leg=new TLegend(0.14,0.12,0.46,0.35);
    TLegend *leg=new TLegend(0.14,0.5,0.4,0.77);
    //  TLegend *leg=new TLegend(0.25,0.52,0.41,0.73);
  //    TLegend *leg=new TLegend(0.47,0.63,0.62,0.84);
  for (int i=0;i<3;i++)
  {
    ((TH1F*)h->GetHists()->At(i))->SetLineWidth(3);
    ((TH1F*)ha->GetHists()->At(i))->SetLineWidth(3);
    leg->AddEntry( ((TH1F*)h->GetHists()->At(i)), ((TH1F*)h->GetHists()->At(i))->GetName() + TString(" #gamma#gamma"),"lp");
    leg->AddEntry( ((TH1F*)ha->GetHists()->At(i)), ((TH1F*)ha->GetHists()->At(i))->GetName() + TString(" #pi^{0}#pi^{+}#pi^{-}"),"lp");
    ((TH1F*)h->GetHists()->At(i))->SetMarkerStyle(kOpenSquareDiagonal);
    ((TH1F*)h->GetHists()->At(i))->SetMarkerSize(2);
    ((TH1F*)ha->GetHists()->At(i))->SetMarkerSize(2);
    ha->Add (((TH1F*)h->GetHists()->At(i)));
  }

  ha->Draw("nostack");
  ha->GetXaxis()->SetTitle(xtitle);
  ha->GetXaxis()->SetTitleOffset(0.9);
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
