{
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

  TCut nuc = "";
  TH2F *h[20];
  for (int k=0;k<20;k++)
  {
    h[k] = new TH2F(Form("h%d",k),"h",500,0.1,0.58,500,0.9,1.05);
    h[k]->SetMarkerStyle(kFullCircle);
    h[k]->SetMarkerColor(30+k);
    h[k]->GetXaxis()->SetTitle("x_{B}");
    h[k]->GetYaxis()->SetTitle("#frac{#sigma^{Pb}_{rad}/#sigma^{Pb}_{born}}{#sigma^{D}_{rad}/#sigma^{D}_{born}}");
    h[k]->SetTitle("Radiative correction Pb/D");
  }
  gStyle->SetOptStat(0);

  
  for (int k=0;k<20;k++)
  {
    nuc = Form("%f<Nu&&Nu<%f",Nu[k],Nu[k+1]);
    tpb->Draw(Form("rf/rfd:x>>h%d",k),nuc,"goff");
    if (k==0) h[k]->Draw("p");
    else h[k]->Draw("psame");
  }    

  TLegend *l= new TLegend(0.5,0.5,0.7,0.7);
  for (int k=0;k<20;k++)
  {
    l->AddEntry(Form("h%d",k),Form("%.2f<#nu<%.2f",Nu[k],Nu[k+1]),"p");
  }
 
  l->SetNColumns(3);
  l->Draw();
}
