//TNtuple *t = new TNtuple("tpb","Lead estimates","Ebeam:Eprime:Theta:x:Q2:Sig_Born:Sig_Born_In:Sig_Born_QE:Sig_Rad:Sig_Rad_EL:Sig_Rad_QE:Sig_Rad_DIS:C_cor");

{
  TCanvas *cNu = new TCanvas("cNu","cNu",1024,768);
  TCanvas *cxB = new TCanvas("cxB","cxB",1024,768);
  cNu->SetGrid();  
  cxB->SetGrid();
  TFile *f = new TFile("rad_data.root","read");
  TNtuple *tpb = (TNtuple *)f->Get("tpb");
  
  // TNtuple  *tpb = new TNtuple("tpb","lead data","Ebeam:Eprime:Theta:x:Q2:Sig_Born:Sig_Born_In:Sig_Born_QE:Sig_Rad:Sig_Rad_EL:Sig_Rad_QE:Sig_Rad_DIS:C_cor");
  //TNtuple *td = new TNtuple("td","deuterium data","Ebeam:Eprime:Theta:x:Q2:Sig_Born:Sig_Born_In:Sig_Born_QE:Sig_Rad:Sig_Rad_EL:Sig_Rad_QE:Sig_Rad_DIS:C_cor");
  
  tpb->AddFriend("td","rad_data.root");
  tpb->SetAlias("rf","Sig_Rad/Sig_Born");
  tpb->SetAlias("rfd","td.Sig_Rad/td.Sig_Born");
  tpb->SetAlias("Nu","Q2/(2*0.93827*x)");
  //
  Float_t Nu[21] = {2.2, 2.45, 2.66, 2.82, 2.96, 3.0, 3.17, 3.27, 3.37, 3.46, 3.55, 3.64, 3.72, 3.8, 3.87, 3.94, 4.01, 4.07, 4.12, 4.18, 4.25};
  Float_t xB[21]= {0.14, 0.1605, 0.181, 0.2015, 0.222, 0.2425, 0.263, 0.2835, 0.304, 0.3245, 0.345, 0.3655, 0.386, 0.4065, 0.427, 0.4475, 0.468, 0.4885, 0.509, 0.5295, 0.55};

  TCut nuc = "";
  TCut xBc = "";
  TH2F *h[20];
  TH2F *hn[20];

  gStyle->SetOptStat(0);
  
  TLegend *l= new TLegend(0.3,0.15,0.85,0.4);
  TLegend *lNu= new TLegend(0.3,0.15,0.85,0.4);
  l->SetNColumns(3);
  lNu->SetNColumns(3);

  for (int k=0;k<20;k++)
  {
    //////////// create hists ///////////
    h[k] = new TH2F(Form("hx%d",k),"h",500,0.1,0.58,500,0.9,1.05);
    h[k]->SetMarkerStyle(kFullDotLarge);
    h[k]->SetMarkerColor(30+k);
    h[k]->SetMarkerSize(1.5);
    h[k]->GetXaxis()->SetTitle("x_{B}");
    h[k]->GetYaxis()->SetTitle("#frac{#sigma^{Pb}_{rad}/#sigma^{Pb}_{born}}{#sigma^{D}_{rad}/#sigma^{D}_{born}}");
    h[k]->SetTitle("Radiative correction Pb/D");

    hn[k] = new TH2F(Form("hn%d",k),"hn",500,2.2,4.12,500,0.9,1.05);
    hn[k]->SetMarkerStyle(kFullDotLarge);
    hn[k]->SetMarkerColor(30+k);
    hn[k]->SetMarkerSize(1.5);
    hn[k]->GetXaxis()->SetTitle("#nu");
    hn[k]->GetYaxis()->SetTitle("#frac{#sigma^{Pb}_{rad}/#sigma^{Pb}_{born}}{#sigma^{D}_{rad}/#sigma^{D}_{born}}");
    hn[k]->SetTitle("Radiative correction Pb/D");
    ////////////////////////

    nuc = Form("%f<Nu&&Nu<%f",Nu[k],Nu[k+1]);
    xBc = Form("%f<x&&x<%f",xB[k],xB[k+1]);
    tpb->Draw(Form("rf/rfd:x>>hx%d",k),nuc,"goff");
    tpb->Draw(Form("rf/rfd:Nu>>hn%d",k),xBc,"goff");
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
  Int_t Np = tpb->Draw(Form("x:Nu:rf/rfd"),"","goff");
  for (int k=0;k<Np;k++)
  {
    h2->Fill(tpb->GetV1()[k],tpb->GetV2()[k],tpb->GetV3()[k]);
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
  h2->GetZaxis()->SetTitle("#frac{#sigma^{Pb}_{rad}/#sigma^{Pb}_{born}}{#sigma^{D}_{rad}/#sigma^{D}_{born}}");
  h2->SetContour(99);
  h2->SetTitle("Radiative correction Pb over D2");
  h2->Draw("lego2");
}
