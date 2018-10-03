{
  TString acc="Pt2_ZQ2Nu";
  TString indir="Pt2Q2NuZpi0c_fullrange";
  TString Obs="Pt2";
  TString binschema="Z_Q2_Nu_Pt2";
  TString TayaSuffix="noRC";
  TString OsotoSuffix = "noRC";
  TString Taya=Form("Taya_dataR_%s%s.txt",Obs.Data(),TayaSuffix.Data());

  gROOT->ProcessLine(Form(".x %s/Ratio%sC/hMRatio1d_%s_%s.C",indir.Data(),acc.Data(),Obs.Data(),binschema.Data()));
  TH1F *hC= ( TH1F *)hMRatioProj->Clone("hC");
  gROOT->ProcessLine(Form(".x %s/Ratio%sFe/hMRatio1d_%s_%s.C",indir.Data(),acc.Data(),Obs.Data(),binschema.Data()));
  TH1F *hFe= ( TH1F *)hMRatioProj->Clone("hFe");
  gROOT->ProcessLine(Form(".x %s/Ratio%sPb/hMRatio1d_%s_%s.C",indir.Data(),acc.Data(),Obs.Data(),binschema.Data()));
  TH1F *hPb= ( TH1F *)hMRatioProj->Clone("hPb");
  hC->SetMarkerStyle(kFullTriangleUp);
  hC->SetMarkerColor(kRed);
  hC->SetLineColor(kRed);
  hFe->SetMarkerStyle(kFullTriangleUp);
  hFe->SetMarkerColor(kBlue);
  hFe->SetLineColor(kBlue);
  hPb->SetMarkerStyle(kFullTriangleUp);
  hPb->SetMarkerColor(kBlack);
  hPb->SetLineColor(kBlack);
  
  TCanvas *cn = new TCanvas("cn","cn",1200,900);
  cn->SetGrid();
  Float_t lx=hC->GetBinLowEdge(1),
  hx=hC->GetBinLowEdge(hC->GetNbinsX())+hC->GetBinWidth(hC->GetNbinsX()),
    ly=0.0,hy=1.1;
  TH1F *hf = c->DrawFrame(lx,ly,hx,hy,"Multiplicity Ratio");
  hf->GetXaxis()->SetTitle(Obs.Data());
  hf->GetYaxis()->SetTitle("R_{#pi_{0}}");

 
  hC->Draw("samepe");
  hFe->Draw("samepe");
  hPb->Draw("samepe");

  //tayadata
  TH1F *hFe_Taya=(TH1F*)hFe->Clone("hFe_Taya");
  TH1F *hC_Taya=(TH1F*)hC->Clone("hC_Taya");
  TH1F *hPb_Taya=(TH1F*)hPb->Clone("hPb_Taya");
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
  hC_Taya->SetMarkerStyle(kFullCircle);
  hFe_Taya->SetMarkerStyle(kFullCircle);
  hPb_Taya->SetMarkerStyle(kFullCircle);

  hC_Taya->Draw("samepe");
  hFe_Taya->Draw("samepe");
  hPb_Taya->Draw("samepe");


  TLegend *l = new TLegend(0.1,0.73,0.25,0.9);
  l->AddEntry(hC,Form("C %s",OsotoSuffix.Data()),"lp");
  l->AddEntry(hFe,Form("Fe %s",OsotoSuffix.Data()),"lp");
  l->AddEntry(hPb,Form("Pb %s",OsotoSuffix.Data()),"lp");
  l->AddEntry(hC_Taya,Form("C-Taya %s",TayaSuffix.Data()),"lp");
  l->AddEntry(hFe_Taya,Form("Fe-Taya %s",TayaSuffix.Data()),"lp");
  l->AddEntry(hPb_Taya,Form("Pb-Taya %s",TayaSuffix.Data()),"lp");

  l->Draw();
  cn->SaveAs(Form("%s/Ratio%s%s.gif",indir.Data(),Obs.Data(),acc.Data()));
  cn->SaveAs(Form("%s/Ratio%s%s.C",indir.Data(),Obs.Data(),acc.Data()));
  
  TH1F *hFe_diff=(TH1F*)hFe->Clone("hFe_Taya");
  TH1F *hC_diff=(TH1F*)hC->Clone("hC_Taya");
  TH1F *hPb_diff=(TH1F*)hPb->Clone("hPb_Taya");
  
  hFe_diff->SetTitle("Differences");
  
  Float_t miny=500,maxy=-500;
  for(int i=0;i<hC_diff->GetNbinsX();i++)
  {
    Double_t diff = hC->GetBinContent(i+1) - hC_Taya->GetBinContent(i+1);
    hC_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = hFe->GetBinContent(i+1) - hFe_Taya->GetBinContent(i+1); 
    hFe_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = hPb->GetBinContent(i+1) - hPb_Taya->GetBinContent(i+1);
    hPb_diff->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;
  }

  hC_diff->SetMaximum(maxy + (maxy-miny)*0.05);
  hC_diff->SetMinimum(miny - (maxy-miny)*0.05);

  hC_diff->Draw("p");
  hFe_diff->Draw("samep");
  hPb_diff->Draw("samep");

  cn->SaveAs(Form("%s/Ratio_diff%s.gif",indir.Data(),acc.Data()));
  cn->SaveAs(Form("%s/Ratio_diff%s.C",indir.Data(),acc.Data()));

  TH1F *hFe_diff_r=(TH1F*)hFe->Clone("hFe_Taya");
  TH1F *hC_diff_r=(TH1F*)hC->Clone("hC_Taya");
  TH1F *hPb_diff_r=(TH1F*)hPb->Clone("hPb_Taya");
  
  hFe_diff_r->SetTitle("Differences in % of Taya values.");
  
  Float_t miny=500,maxy=-500;
  for(int i=0;i<hC_diff->GetNbinsX();i++)
  {
    Double_t diff = (hC->GetBinContent(i+1) - hC_Taya->GetBinContent(i+1))*100/hC_Taya->GetBinContent(i+1);
    hC_diff_r->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = (hFe->GetBinContent(i+1) - hFe_Taya->GetBinContent(i+1))*100/hFe_Taya->GetBinContent(i+1); 
    hFe_diff_r->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;

    Double_t diff = (hPb->GetBinContent(i+1) - hPb_Taya->GetBinContent(i+1))*100/hPb_Taya->GetBinContent(i+1);
    hPb_diff_r->SetBinContent(i+1,diff);
    if(miny>diff) miny=diff;
    if(maxy<diff) maxy=diff;
  }

  hC_diff_r->SetMaximum(maxy + (maxy-miny)*0.05);
  hC_diff_r->SetMinimum(miny - (maxy-miny)*0.05);

  hC_diff_r->Draw("p");
  hFe_diff_r->Draw("samep");
  hPb_diff_r->Draw("samep");

  cn->SaveAs(Form("%s/Ratio_diff%s_rel.gif",indir.Data(),acc.Data()));
  cn->SaveAs(Form("%s/Ratio_diff%s_rel.C",indir.Data(),acc.Data()));


}
