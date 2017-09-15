{
  TCanvas *c1 = new TCanvas("c1","c1",1024,768);
  TH1F *hsQ = new TH1F("hsQ","Correlation",100,0,2.5);
  TH1F *hbQ = (TH1F*)hsQ->Clone("hbQ");
  TH1F *hsQ_bQ = (TH1F*)hsQ->Clone("hsQ_bQ");
  TH1F *hsQE = (TH1F*)hsQ->Clone("hsQE");
  TH1F *hbQE = (TH1F*)hsQ->Clone("hbQE");
  TH1F *hsQE_bQE = (TH1F*)hsQ->Clone("hsQE_bQE");


  TH1F *hsq = new TH1F("hsq","signal",100,0,2.5);
  TH1F *hbq = (TH1F*)hsq->Clone("hbq");
  TH1F *hsq_bq = (TH1F*)hsq->Clone("hsq_bq");

  hsq_bq->SetMarkerStyle(kFullCircle);
  hsQ_bQ->SetMarkerStyle(kFullCircle);
  hsQE_bQE->SetMarkerStyle(kFullCircle);

  out_tree->Draw("DQ>>hsQ");
  out_tree->Draw("DQ_bk>>hbQ");
  out_tree->Draw("DQE>>hsQE");
  out_tree->Draw("DQE_bk>>hbQE");
  out_tree->Draw("Dq>>hsq");
  out_tree->Draw("Dq_bk>>hbq");


  hsq->Sumw2();hbq->Sumw2();
  hsQ->Sumw2();hbQ->Sumw2();
  hsQE->Sumw2();hbQE->Sumw2();

  hsq_bq->Divide(hsq,hbq);
  hsQ_bQ->Divide(hsQ,hbQ);
  hsQE_bQE->Divide(hsQE,hbQE);

  //  TH1F *hpos = (TH1F*)hsq_bq->FFT(NULL,"RE");

  hsq_bq->GetYaxis()->SetTitle("dN/d#Deltaq");
  hsq_bq->GetXaxis()->SetTitle("#Deltaq (GeV)");
  hsQ_bQ->Draw("p");
  c1->SaveAs("pi0_corrq.gif");
  c1->SaveAs("pi0_corrq.C");

  hsQ_bQ->GetXaxis()->SetTitle("#DeltaQ (GeV)");
  hsQ_bQ->GetYaxis()->SetTitle("dN/#DeltaQ");
  hsQ_bQ->Draw("p");
  c1->SaveAs("pi0_corrQ.C");
  c1->SaveAs("pi0_corrQ.gif");

  hsQE_bQE->GetXaxis()->SetTitle("#DeltaQ (GeV)");
  hsQE_bQE->GetYaxis()->SetTitle("dN/#DeltaQ");
  hsQE_bQE->Draw("p");
  c1->SaveAs("pi0_corrQE.C");
  c1->SaveAs("pi0_corrQE.gif");


}
