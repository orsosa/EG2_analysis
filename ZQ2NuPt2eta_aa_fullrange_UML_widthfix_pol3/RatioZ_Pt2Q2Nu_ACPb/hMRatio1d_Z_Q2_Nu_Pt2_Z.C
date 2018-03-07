{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 27 01:53:24 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.325,-0.1671439,1.075,1.059131);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Pb = new TH1D("hMR_Pb","hMR_Pb",6, xAxis2);
   hMR_Pb->SetBinContent(1,7.793877e-07);
   hMR_Pb->SetBinContent(2,0.8355485);
   hMR_Pb->SetBinContent(3,0.6675282);
   hMR_Pb->SetBinContent(4,0.6680468);
   hMR_Pb->SetBinContent(5,0.681527);
   hMR_Pb->SetBinContent(6,0.5671475);
   hMR_Pb->SetBinError(1,2.647484e-05);
   hMR_Pb->SetBinError(2,0.05423994);
   hMR_Pb->SetBinError(3,0.04198193);
   hMR_Pb->SetBinError(4,0.04351028);
   hMR_Pb->SetBinError(5,0.05106457);
   hMR_Pb->SetBinError(6,0.05455402);
   hMR_Pb->SetEntries(4.921823);
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
