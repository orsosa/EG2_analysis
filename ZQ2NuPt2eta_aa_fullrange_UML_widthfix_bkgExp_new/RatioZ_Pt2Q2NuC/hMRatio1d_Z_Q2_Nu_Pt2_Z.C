{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar  9 02:06:41 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.325,0.6819856,1.075,1.077506);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_C = new TH1D("hMR_C","hMR_C",6, xAxis2);
   hMR_C->SetBinContent(1,0.8211324);
   hMR_C->SetBinContent(2,0.8263245);
   hMR_C->SetBinContent(3,0.9630976);
   hMR_C->SetBinContent(4,0.9251621);
   hMR_C->SetBinContent(5,0.7890141);
   hMR_C->SetBinContent(6,0.8293625);
   hMR_C->SetBinError(1,0.02841923);
   hMR_C->SetBinError(2,0.04084399);
   hMR_C->SetBinError(3,0.05978864);
   hMR_C->SetBinError(4,0.06131104);
   hMR_C->SetBinError(5,0.05312655);
   hMR_C->SetBinError(6,0.07157619);
   hMR_C->SetEntries(6);
   hMR_C->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hMR_C->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hMR_C->SetMarkerColor(ci);
   hMR_C->SetMarkerStyle(8);
   hMR_C->GetXaxis()->SetTitle("Z");
   hMR_C->GetXaxis()->SetLabelFont(42);
   hMR_C->GetXaxis()->SetLabelSize(0.035);
   hMR_C->GetXaxis()->SetTitleSize(0.035);
   hMR_C->GetXaxis()->SetTitleFont(42);
   hMR_C->GetYaxis()->SetTitle("R(Z)");
   hMR_C->GetYaxis()->SetLabelFont(42);
   hMR_C->GetYaxis()->SetLabelSize(0.035);
   hMR_C->GetYaxis()->SetTitleSize(0.035);
   hMR_C->GetYaxis()->SetTitleOffset(1.1);
   hMR_C->GetYaxis()->SetTitleFont(42);
   hMR_C->GetZaxis()->SetLabelFont(42);
   hMR_C->GetZaxis()->SetLabelSize(0.035);
   hMR_C->GetZaxis()->SetTitleSize(0.035);
   hMR_C->GetZaxis()->SetTitleFont(42);
   hMR_C->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4256187,0.9344495,0.5743813,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("hMR_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
