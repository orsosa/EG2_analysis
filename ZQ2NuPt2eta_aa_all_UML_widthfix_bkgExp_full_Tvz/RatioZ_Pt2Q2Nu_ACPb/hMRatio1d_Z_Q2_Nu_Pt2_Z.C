{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 16 10:45:50 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.325,0.32262,1.075,0.5507026);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Pb = new TH1D("hMR_Pb","hMR_Pb",6, xAxis2);
   hMR_Pb->SetBinContent(1,0.4765786);
   hMR_Pb->SetBinContent(2,0.4832762);
   hMR_Pb->SetBinContent(3,0.4575587);
   hMR_Pb->SetBinContent(4,0.5181135);
   hMR_Pb->SetBinContent(5,0.5042858);
   hMR_Pb->SetBinContent(6,0.3545353);
   hMR_Pb->SetBinError(1,0.0005911295);
   hMR_Pb->SetBinError(2,0.0005828048);
   hMR_Pb->SetBinError(3,0.0007950427);
   hMR_Pb->SetBinError(4,0.001092021);
   hMR_Pb->SetBinError(5,0.0009780058);
   hMR_Pb->SetBinError(6,0.0008319658);
   hMR_Pb->SetEntries(6);
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
