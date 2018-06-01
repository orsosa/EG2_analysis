{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 23 05:43:04 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.325,0.5276255,1.075,0.998547);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_C = new TH1D("hMR_C","hMR_C",6, xAxis2);
   hMR_C->SetBinContent(1,0.8463553);
   hMR_C->SetBinContent(2,0.8776101);
   hMR_C->SetBinContent(3,0.9043755);
   hMR_C->SetBinContent(4,0.80167);
   hMR_C->SetBinContent(5,0.9186961);
   hMR_C->SetBinContent(6,0.6201092);
   hMR_C->SetBinError(1,0.002442955);
   hMR_C->SetBinError(2,0.01074185);
   hMR_C->SetBinError(3,0.01758875);
   hMR_C->SetBinError(4,0.03007967);
   hMR_C->SetBinError(5,0.01481883);
   hMR_C->SetBinError(6,0.028306);
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
