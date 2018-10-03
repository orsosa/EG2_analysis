{
  
  gStyle->SetOptFit();
  TFile kinfile("../eta_CD_aa_all_Pcorr_sample.root","read");
  TH2F *hq2x = new TH2F("hq2x","Q2:Xb",300,0.,0.6,300,1.0,4.1);
  TH2F *hptz = new TH2F("hptz","Z:Pt",300,0,2,300,0.0,1.1);
  TTree *t_in = (TTree *)kinfile.Get("outdata");
  t_in->SetAlias("Xb","Q2/2./0.93827/Nu");
  kinfile.ls();
  kinfile.Add(hq2x);
  kinfile.Add(hptz);
  
  TCut cut=Form("0.5<M&&M<0.65&&1<Q2&&Q2<4.1&&2.2<Nu&&Nu<4.25&&0.5<Z&&Z<1.0&&0.0<Pt2&&Pt2<1.5");
  t_in->Draw("Q2:Xb>>hq2x",cut,"");
  t_in->Draw("Z:TMath::Sqrt(Pt2)>>hptz",cut,"");
  Float_t q2_val,x_val,z_val,pt_val;
  x_val = hq2x->GetMean(1);
  q2_val= hq2x->GetMean(2);
  z_val = hptz->GetMean(2); 
  pt_val= hptz->GetMean(1);
  cout<<x_val<<"\t"<<q2_val<<"\t"<<z_val<<"\t"<<pt_val<<"\n";

  
  
  TFile foutC("C_result.root","recreate");
  TNtuple *tC =  new TNtuple("AAcAcc_data","Fit parameters","Q2:Xb:Zh:Pt:A:AErr:Ac:AcErr:Acc:AccErr:ChiSQ");
  TFile foutDC("DC_result.root","recreate");
  TNtuple *tDC =  new TNtuple("AAcAcc_data","Fit parameters","Q2:Xb:Zh:Pt:A:AErr:Ac:AcErr:Acc:AccErr:ChiSQ");

  TFile foutFe("Fe_result.root","recreate");
  TNtuple *tFe =  new TNtuple("AAcAcc_data","Fit parameters","Q2:Xb:Zh:Pt:A:AErr:Ac:AcErr:Acc:AccErr:ChiSQ");

  TFile foutDFe("DFe_result.root","recreate");
  TNtuple *tDFe =  new TNtuple("AAcAcc_data","Fit parameters","Q2:Xb:Zh:Pt:A:AErr:Ac:AcErr:Acc:AccErr:ChiSQ");

  TFile foutPb("Pb_result.root","recreate");
  TNtuple *tPb =  new TNtuple("AAcAcc_data","Fit parameters","Q2:Xb:Zh:Pt:A:AErr:Ac:AcErr:Acc:AccErr:ChiSQ");

  TFile foutDPb("DPb_result.root","recreate");
  TNtuple *tDPb =  new TNtuple("AAcAcc_data","Fit parameters","Q2:Xb:Zh:Pt:A:AErr:Ac:AcErr:Acc:AccErr:ChiSQ");

  
 
  Float_t A,Ac,Acc,errA,errAc,errAcc;
  
  TFile fout("fit_result.root","recreate");
  TCanvas *c = new TCanvas("c","c",920,690);

  TF1 *fmodel = new TF1("fmodel","[0] + [1]*TMath::Cos(x/180*3.1416)+[2]*TMath::Cos(2*x/180*3.1416)",-180,180);
  fmodel->SetParameters(3000.,300.,300.);

  TH1D* h;
  
  auto fC = (TF1*)fmodel->Clone("fC");
  h=(TH1D*)_file0->Get("hN_AC_C");
  h->Fit(fC,"R");
  c->SaveAs("PhiPQ_C_fit.gif");
  c->SaveAs("PhiPQ_C_fit.C");
  c->Write("PhiPQ_C_fit");
  
  auto fFe = (TF1*)fmodel->Clone("fFe");
  h=(TH1D*)_file0->Get("hN_AC_Fe");
  h->Fit(fFe,"R");
  h->SetStats();
  c->SaveAs("PhiPQ_Fe_fit.gif");
  c->SaveAs("PhiPQ_Fe_fit.C");
  c->Write("PhiPQ_Fe_fit");
  
  auto fPb = (TF1*)fmodel->Clone("fPb");
  h=(TH1D*)_file0->Get("hN_AC_Pb");
  h->Fit(fPb,"R");
  h->SetStats();
  c->SaveAs("PhiPQ_Pb_fit.gif");
  c->SaveAs("PhiPQ_Pb_fit.C");
  c->Write("PhiPQ_Pb_fit");
  
  auto fDC = (TF1*)fmodel->Clone("fDC");
  h=(TH1D*)_file0->Get("hN_AC_DC");
  h->Fit(fDC,"R");
  h->SetStats();
  c->SaveAs("PhiPQ_DC_fit.gif");
  c->SaveAs("PhiPQ_DC_fit.C");
  c->Write("PhiPQ_DC_fit");
  
  auto fDFe = (TF1*)fmodel->Clone("fDFe");
  h=(TH1D*)_file0->Get("hN_AC_DFe");
  h->Fit(fDFe,"R");
  h->SetStats();
  c->SaveAs("PhiPQ_DFe_fit.gif");
  c->SaveAs("PhiPQ_DFe_fit.C");
  c->Write("PhiPQ_DFe_fit");
  
  auto fDPb = (TF1*)fmodel->Clone("fDPb");
  h=(TH1D*)_file0->Get("hN_AC_DPb");
  h->Fit(fDPb,"R");
  h->SetStats();
  c->SaveAs("PhiPQ_DPb_fit.gif");
  c->SaveAs("PhiPQ_DPb_fit.C");
  c->Write("PhiPQ_DPb_fit");

  foutC.cd();
  
  A=fC->GetParameter(0);
  Ac=fC->GetParameter(1);
  Acc=fC->GetParameter(2);
  errA=fC->GetParError(0);
  errAc=fC->GetParError(1);
  errAcc=fC->GetParError(2);
  tC->Fill(q2_val,x_val,z_val,pt_val,A,errA,Ac,errAc,Acc,errAcc);
  foutC.cd();
  tC->Write("",TObject::kOverwrite);


  
  foutFe.cd();
  A=fFe->GetParameter(0);
  Ac=fFe->GetParameter(1);
  Acc=fFe->GetParameter(2);
  errA=fFe->GetParError(0);
  errAc=fFe->GetParError(1);
  errAcc=fFe->GetParError(2);
  tFe->Fill(q2_val,x_val,z_val,pt_val,A,errA,Ac,errAc,Acc,errAcc);
  foutFe.cd();
  tFe->Write("",TObject::kOverwrite);

  
  foutPb.cd();
  A=fPb->GetParameter(0);
  Ac=fPb->GetParameter(1);
  Acc=fPb->GetParameter(2);
  errA=fPb->GetParError(0);
  errAc=fPb->GetParError(1);
  errAcc=fPb->GetParError(2);
  tPb->Fill(q2_val,x_val,z_val,pt_val,A,errA,Ac,errAc,Acc,errAcc);
  foutPb.cd();
  tPb->Write("",TObject::kOverwrite);

  
  foutDC.cd();
  A=fDC->GetParameter(0);
  Ac=fDC->GetParameter(1);
  Acc=fDC->GetParameter(2);
  errA=fDC->GetParError(0);
  errAc=fDC->GetParError(1);
  errAcc=fDC->GetParError(2);
  tDC->Fill(q2_val,x_val,z_val,pt_val,A,errA,Ac,errAc,Acc,errAcc);
  foutDC.cd();
  tDC->Write("",TObject::kOverwrite);

  
  foutDFe.cd();
  A=fDFe->GetParameter(0);
  Ac=fDFe->GetParameter(1);
  Acc=fDFe->GetParameter(2);
  errA=fDFe->GetParError(0);
  errAc=fDFe->GetParError(1);
  errAcc=fDFe->GetParError(2);
  tDFe->Fill(q2_val,x_val,z_val,pt_val,A,errA,Ac,errAc,Acc,errAcc);
  foutDFe.cd();
  tDFe->Write("",TObject::kOverwrite);


  foutDPb.cd();
  A=fDPb->GetParameter(0);
  Ac=fDPb->GetParameter(1);
  Acc=fDPb->GetParameter(2);
  errA=fDPb->GetParError(0);
  errAc=fDPb->GetParError(1);
  errAcc=fDPb->GetParError(2);
  tDPb->Fill(q2_val,x_val,z_val,pt_val,A,errA,Ac,errAc,Acc,errAcc);
  foutDPb.cd();
  tDPb->Write("",TObject::kOverwrite);

  
}
