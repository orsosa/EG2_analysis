{
  TCanvas *cn = new TCanvas("cn","cn",920,690);
  cn->SetGrid();

  TString Obs="Z";
  TString TayaSuffix="noRC";
  TString Taya=Form("/home/orsosa/EG2_Analysis/Taya_dataR_%s%s.txt",Obs.Data(),TayaSuffix.Data());
  allratios->Draw("nostack");
  TH1F *hC = ((TH1F*)allratios->GetHists()->At(0));
  TH1F *hFe = ((TH1F*)allratios->GetHists()->At(1));
  TH1F *hPb = ((TH1F*)allratios->GetHists()->At(2));
  //tayadata

  TH1F *hC_Taya=  (TH1F*)((TH1F*)allratios->GetHists()->At(0))->Clone();
  TH1F *hFe_Taya=  (TH1F*)((TH1F*)allratios->GetHists()->At(1))->Clone();
  TH1F *hPb_Taya=  (TH1F*)((TH1F*)allratios->GetHists()->At(2))->Clone();

  //  hC_Taya->SetLineColor(kRed);
  
  // hC_Taya->SetMarkerColor(kRed);
  //hFe_Taya->SetLineColor(kBlue);

  //hC_Taya->SetMarkerColor(kBlue);
  // hPb_Taya->SetLineColor(kBlack);

  //hC_Taya->SetMarkerColor(kBlack);

  hC_Taya->SetMarkerStyle(kOpenSquareDiagonal);
  hFe_Taya->SetMarkerStyle(kOpenSquareDiagonal);
  hPb_Taya->SetMarkerStyle(kOpenSquareDiagonal);
  
  ifstream fin(Taya.Data());
  char aux[100];
  fin.getline(aux,100);
  Float_t bin,RC,RC_e,RFe,RFe_e,RPb,RPb_e;
  cout<<aux<<endl;
  while(fin>>bin>>RC>>RC_e>>RFe>>RFe_e>>RPb>>RPb_e)
  {
    cout<<bin<<"\t"<<RC<<"\t"<<RC_e<<"\t"<<RFe<<"\t"<<RFe_e<<"\t"<<RPb<<"\t"<<RPb_e<<"\n";
    hC_Taya->SetBinContent(bin+1,RC);
    hFe_Taya->SetBinContent(bin+1,RFe);
    hPb_Taya->SetBinContent(bin+1,RPb);
    
    hC_Taya->SetBinError(bin+1,RC_e);
    hFe_Taya->SetBinError(bin+1,RFe_e);
    hPb_Taya->SetBinError(bin+1,RPb_e);
  }
  fin.close();

  hC_Taya->Draw("samepe");
  hFe_Taya->Draw("samepe");
  hPb_Taya->Draw("samepe");


  TLegend *l = new TLegend(0.2,0.15,0.5,0.35);
  l->AddEntry(hC,Form("C "),"lp");
  l->AddEntry(hFe,Form("Fe "),"lp");
  l->AddEntry(hPb,Form("Pb "),"lp");
  l->AddEntry(hC_Taya,Form("C-Taya %s",TayaSuffix.Data()),"lp");
  l->AddEntry(hFe_Taya,Form("Fe-Taya %s",TayaSuffix.Data()),"lp");
  l->AddEntry(hPb_Taya,Form("Pb-Taya %s",TayaSuffix.Data()),"lp");

  l->Draw();
  cn->SaveAs(Form("Ratio%s_taya.gif",Obs.Data()));
  cn->SaveAs(Form("Ratio%s_taya.C",Obs.Data() ) );
  
  TH1F *hFe_diff=(TH1F*)hFe->Clone("hFe_Taya");
  TH1F *hC_diff=(TH1F*)hC->Clone("hC_Taya");
  TH1F *hPb_diff=(TH1F*)hPb->Clone("hPb_Taya");
  
  hFe_diff->SetTitle("Differences");
  
  Float_t miny=500,maxy=-500;
  Double_t diff;
  for(int i=0;i<hC_diff->GetNbinsX();i++)
  {
    diff = hC->GetBinContent(i+1) - hC_Taya->GetBinContent(i+1);
    hC_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    diff = hFe->GetBinContent(i+1) - hFe_Taya->GetBinContent(i+1); 
    hFe_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    diff = hPb->GetBinContent(i+1) - hPb_Taya->GetBinContent(i+1);
    hPb_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;
  }

  hC_diff->SetMaximum(maxy + (maxy-miny)*0.05);
  hC_diff->SetMinimum(miny - (maxy-miny)*0.05);

  hC_diff->Draw("p");
  hFe_diff->Draw("samep");
  hPb_diff->Draw("samep");

  cn->SaveAs(Form("Ratio_diff%s_taya.gif",Obs.Data()));
  cn->SaveAs(Form("Ratio_diff%s_taya.C",Obs.Data()));

  TH1F *hFe_diff_r=(TH1F*)hFe->Clone("hFe_Taya");
  TH1F *hC_diff_r=(TH1F*)hC->Clone("hC_Taya");
  TH1F *hPb_diff_r=(TH1F*)hPb->Clone("hPb_Taya");
  
  hFe_diff_r->SetTitle("Differences in % of Taya values.");
  
  miny=500,maxy=-500;
  for(int i=0;i<hC_diff->GetNbinsX();i++)
  {
    diff = (hC->GetBinContent(i+1) - hC_Taya->GetBinContent(i+1))*100/hC_Taya->GetBinContent(i+1);
    hC_diff_r->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;
    
    diff = (hFe->GetBinContent(i+1) - hFe_Taya->GetBinContent(i+1))*100/hFe_Taya->GetBinContent(i+1); 
    hFe_diff_r->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    diff = (hPb->GetBinContent(i+1) - hPb_Taya->GetBinContent(i+1))*100/hPb_Taya->GetBinContent(i+1);
    hPb_diff_r->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;
  }

  hC_diff_r->SetMaximum(maxy + (maxy-miny)*0.05);
  hC_diff_r->SetMinimum(miny - (maxy-miny)*0.05);

  hC_diff_r->Draw("p");
  hFe_diff_r->Draw("samep");
  hPb_diff_r->Draw("samep");

  cn->SaveAs(Form("Ratio_diff%s_taya_rel.gif",Obs.Data()));
  cn->SaveAs(Form("Ratio_diff%s_taya_rel.C",Obs.Data()));


}
