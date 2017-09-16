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
  TH1F *hsqE = (TH1F*)hsq->Clone("hsqE");
  TH1F *hbqE = (TH1F*)hsq->Clone("hbqE");
  TH1F *hsqE_bqE = (TH1F*)hsq->Clone("hsqE_bqE");

  hsq_bq->SetMarkerStyle(kFullCircle);
  hsQ_bQ->SetMarkerStyle(kFullCircle);
  hsQE_bQE->SetMarkerStyle(kFullCircle);
  hsqE_bqE->SetMarkerStyle(kFullCircle);

  TCut Dcut="-31.8<vzec&&vzec<-28.40";
  TCut Ccut="-25.33<vzec&&vzec<-24.10";
  TCut Fecut ="-25.65<vzec&&vzec<-24.26";
  TCut Pbcut ="-25.54<vzec&&vzec<-24.36";
  TCut TargCut=Ccut;

  out_tree->Draw("DQ>>hsQ",TargCut);
  out_tree->Draw("DQ_bk>>hbQ",TargCut);
  out_tree->Draw("DQE>>hsQE",TargCut);
  out_tree->Draw("DQE_bk>>hbQE",TargCut);
  out_tree->Draw("Dq>>hsq",TargCut);
  out_tree->Draw("Dq_bk>>hbq",TargCut);
  out_tree->Draw("DqE>>hsqE",TargCut);
  out_tree->Draw("DqE_bk>>hbqE",TargCut);


  hsq->Sumw2();hbq->Sumw2();
  hsqE->Sumw2();hbqE->Sumw2();
  hsQ->Sumw2();hbQ->Sumw2();
  hsQE->Sumw2();hbQE->Sumw2();

  hsq_bq->Divide(hsq,hbq);
  hsqE_bqE->Divide(hsqE,hbqE);
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


  hsqE_bqE->GetXaxis()->SetTitle("#Deltaq (GeV)");
  hsqE_bqE->GetYaxis()->SetTitle("dN/#Deltaq");
  hsqE_bqE->Draw("p");
  c1->SaveAs("pi0_corrqE.C");
  c1->SaveAs("pi0_corrqE.gif");


}
