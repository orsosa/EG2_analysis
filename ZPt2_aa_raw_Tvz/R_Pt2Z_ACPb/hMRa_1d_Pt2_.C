void hMRa_1d_Pt2_()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 21 18:43:39 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.1875,0.05473635,1.6875,2.599348);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 0.2142857, 0.4285714, 0.6428571, 0.8571429, 1.071429, 1.285714, 1.5}; 
   
   TH1D *hMR_Pb__1 = new TH1D("hMR_Pb__1","hMR_Pb",7, xAxis1);
   hMR_Pb__1->SetBinContent(1,0.4055022);
   hMR_Pb__1->SetBinContent(2,0.4596829);
   hMR_Pb__1->SetBinContent(3,0.5473603);
   hMR_Pb__1->SetBinContent(4,0.7228537);
   hMR_Pb__1->SetBinContent(5,0.9324515);
   hMR_Pb__1->SetBinContent(6,1.27899);
   hMR_Pb__1->SetBinContent(7,1.949896);
   hMR_Pb__1->SetBinError(1,0.003983156);
   hMR_Pb__1->SetBinError(2,0.006592184);
   hMR_Pb__1->SetBinError(3,0.0121638);
   hMR_Pb__1->SetBinError(4,0.02578567);
   hMR_Pb__1->SetBinError(5,0.05597273);
   hMR_Pb__1->SetBinError(6,0.1249268);
   hMR_Pb__1->SetBinError(7,0.298053);
   hMR_Pb__1->SetEntries(365.6049);
   hMR_Pb__1->SetStats(0);
   hMR_Pb__1->SetLineWidth(3);
   hMR_Pb__1->SetMarkerStyle(8);
   hMR_Pb__1->SetMarkerSize(3);
   hMR_Pb__1->GetXaxis()->SetTitle("Pt2");
   hMR_Pb__1->GetXaxis()->SetLabelFont(42);
   hMR_Pb__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb__1->GetXaxis()->SetTitleFont(42);
   hMR_Pb__1->GetYaxis()->SetTitle("R(Pt2)");
   hMR_Pb__1->GetYaxis()->SetLabelFont(42);
   hMR_Pb__1->GetYaxis()->SetLabelSize(0.035);
   hMR_Pb__1->GetYaxis()->SetTitleSize(0.035);
   hMR_Pb__1->GetYaxis()->SetTitleOffset(0);
   hMR_Pb__1->GetYaxis()->SetTitleFont(42);
   hMR_Pb__1->GetZaxis()->SetLabelFont(42);
   hMR_Pb__1->GetZaxis()->SetLabelSize(0.035);
   hMR_Pb__1->GetZaxis()->SetTitleSize(0.035);
   hMR_Pb__1->GetZaxis()->SetTitleFont(42);
   hMR_Pb__1->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4151672,0.9358257,0.5848328,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("hMR_Pb");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
