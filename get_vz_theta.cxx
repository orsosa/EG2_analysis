{
  Float_t SECTOR=0;
  TNtuple *t = (TNtuple *)_file0->Get("NElectrons");
  Float_t vze,sector;
  t->SetBranchAddress("vze",&vze);
  t->SetBranchAddress("sector",&sector);
  TCanvas *c = new TCanvas("c","c",800,600);
  Int_t Nth=20;
  Long_t N = NElectrons->GetEntries();
  TH1F **hth0 = new TH1F*[Nth];
  Float_t th_edges[2]={0.3,0.7};
  Float_t th_width=(th_edges[1]-th_edges[0])/Nth;
  Float_t thll,thhl; 

  for (int i=1;i<=Nth;i++)
  {
    thll   = th_edges[0]+th_width*(i-1);
    thhl   = th_edges[0]+th_width*(i);
    hth[i] = new TH1F(Form("hth%d",i),Form("theta in [%f,%f]",thll,thhl),500,-40.,-15.);
    hth[i]->GetXaxis()->SetTitle("vze");
    hth[i]->GetYaxis()->SetTitle("dN/dz");
  }
  
  for (int k=0;k<N;k++)
  {
    t->GetEntry(k);
    for (int i=0;i<Nth;i++) hth[i]->Reset();
    for (int i=1;i<=Nth;i++)
    {
      thll   = th_edges[0]+th_width*(i-1);
      thhl   = th_edges[0]+th_width*(i);
      if (thll<vze&&vze<thhl&&SECTOR==sector) hth[i-1]->Fill(vze);
    }
  }
  TGraph *g1 = new TGraph(Nth);
  TGraph *g2 = new TGraph(Nth);
  TGraph *g3 = new TGraph(Nth);
  g1->SetLineColor(kBlack);
  g2->SetLineColor(kRed);
  g3->SetLineColor(kBlue);
  g1->SetMarkerStyle(kFullDotLarge);
  g2->SetMarkerStyle(kFullDotLarge);
  g3->SetMarkerStyle(kFullDotLarge);
  TFitResultPtr r;
  TF1 *func = new TF1("func","gaus",-27,-23);
  for (int i=0;i<Nth;i++)
  {
    Float_t gm=hth[i]->GetMaximumBin()*th_width+th_edges[0];
    func->SetParameters(hth[i]->GetMaximum(),gm,0.3);
    // hth[i]->Draw("histoe");
    std::cout<<"<<<<<<<<<<<< bin "<<i<<std::endl;
    r=hth[i]->Fit("func","BRS","",gm-0.2,gm+0.2);
    c->SaveAs(Form("vzth%d_sect%.0f.gif",i,SECTOR));
    c->SaveAs(Form("vzth%d_sect%.0f.C",i,SECTOR));
    std::cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
    g1->SetPoint(i,r->Parameter(1)-1*r->Parameter(2),hth[i]->GetBinLowEdge(i+1)+hth[i]->GetBinWidth(i+1)/2.);
    g2->SetPoint(i,r->Parameter(1)-1*r->Parameter(2),hth[i]->GetBinLowEdge(i+1)+hth[i]->GetBinWidth(i+1)/2.);
    g3->SetPoint(i,r->Parameter(1)-1*r->Parameter(2),hth[i]->GetBinLowEdge(i+1)+hth[i]->GetBinWidth(i+1)/2.);
    
  }

  t->Draw("TMath::ACos(Pez/TMath::Sqrt(Pex*Pex + Pey*Pey + Pez*Pez)):vze>>h(500,-40,-15,50,0,1.0)",Form("sector==%f",SECTOR),"");

  g1->Draw("same");
  g2->Draw("same");
  g3->Draw("same");

  c->SaveAs(Form("vz_vs_th_sect%.0f.gif"SECTOR));
  c->SaveAs(Form("vz_vs_th_sect%.0f.C",SECTOR));
  
  
  //  NElectrons->Draw("TMath::ACos(Pez/TMath::Sqrt(Pex*Pex + Pey*Pey + Pez*Pez)):vze>>hth(500,-40,-15,50,0,1.0)",Form("sector==%d",sec),"");
  
}
