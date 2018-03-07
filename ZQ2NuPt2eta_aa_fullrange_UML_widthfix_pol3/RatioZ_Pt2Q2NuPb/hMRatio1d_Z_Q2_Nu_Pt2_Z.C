{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 27 01:53:13 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.325,0.3760541,1.075,0.5552289);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Pb = new TH1D("hMR_Pb","hMR_Pb",6, xAxis2);
   hMR_Pb->SetBinContent(1,0.4630697);
   hMR_Pb->SetBinContent(2,0.5166734);
   hMR_Pb->SetBinContent(3,0.4882772);
   hMR_Pb->SetBinContent(4,0.4685444);
   hMR_Pb->SetBinContent(5,0.4336712);
   hMR_Pb->SetBinContent(6,0.423083);
   hMR_Pb->SetBinError(1,0.01224527);
   hMR_Pb->SetBinError(2,0.0138123);
   hMR_Pb->SetBinError(3,0.01548994);
   hMR_Pb->SetBinError(4,0.01729159);
   hMR_Pb->SetBinError(5,0.01802732);
   hMR_Pb->SetBinError(6,0.02261075);
   hMR_Pb->SetEntries(5.972604);
   hMR_Pb->SetStats(0);
   hMR_Pb->SetMarkerStyle(8);
   hMR_Pb->GetXaxis()->SetTitle("Z");
   hMR_Pb->GetXaxis()->SetLabelFont(42);
   hMR_Pb->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb->GetXaxis()->SetTitleFont(42);
   hMR_Pb->GetYaxis()->SetTitle("R(Z)");
   hMR_Pb->GetYaxis()->SetLabelFont(42);
   hMR_Pb->GetYaxis()->SetLabelSize(0.035);
   hMR_Pb->GetYaxis()->SetTitleSize(0.035);
   hMR_Pb->GetYaxis()->SetTitleOffset(1.1);
   hMR_Pb->GetYaxis()->SetTitleFont(42);
   hMR_Pb->GetZaxis()->SetLabelFont(42);
   hMR_Pb->GetZaxis()->SetLabelSize(0.035);
   hMR_Pb->GetZaxis()->SetTitleSize(0.035);
   hMR_Pb->GetZaxis()->SetTitleFont(42);
   hMR_Pb->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4151672,0.9358257,0.5848328,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("hMR_Pb");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
