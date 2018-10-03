void hMRa_1d_Z_()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 21 18:45:57 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(0.2125,0.6331251,1.0875,0.9448197);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_C__1 = new TH1D("hMR_C__1","hMR_C",7, xAxis1);
   hMR_C__1->SetBinContent(1,0.8716392);
   hMR_C__1->SetBinContent(2,0.7928097);
   hMR_C__1->SetBinContent(3,0.8230872);
   hMR_C__1->SetBinContent(4,0.8038417);
   hMR_C__1->SetBinContent(5,0.7190553);
   hMR_C__1->SetBinContent(6,0.7330202);
   hMR_C__1->SetBinContent(7,0.7401664);
   hMR_C__1->SetBinError(1,0.03013697);
   hMR_C__1->SetBinError(2,0.04391444);
   hMR_C__1->SetBinError(3,0.0256381);
   hMR_C__1->SetBinError(4,0.02698126);
   hMR_C__1->SetBinError(5,0.02931712);
   hMR_C__1->SetBinError(6,0.04157796);
   hMR_C__1->SetBinError(7,0.06456321);
   hMR_C__1->SetEntries(2738.962);
   hMR_C__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hMR_C__1->SetLineColor(ci);
   hMR_C__1->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hMR_C__1->SetMarkerColor(ci);
   hMR_C__1->SetMarkerStyle(8);
   hMR_C__1->SetMarkerSize(3);
   hMR_C__1->GetXaxis()->SetTitle("Z");
   hMR_C__1->GetXaxis()->SetLabelFont(42);
   hMR_C__1->GetXaxis()->SetLabelSize(0.035);
   hMR_C__1->GetXaxis()->SetTitleSize(0.035);
   hMR_C__1->GetXaxis()->SetTitleFont(42);
   hMR_C__1->GetYaxis()->SetTitle("R(Z)");
   hMR_C__1->GetYaxis()->SetLabelFont(42);
   hMR_C__1->GetYaxis()->SetLabelSize(0.035);
   hMR_C__1->GetYaxis()->SetTitleSize(0.035);
   hMR_C__1->GetYaxis()->SetTitleOffset(0);
   hMR_C__1->GetYaxis()->SetTitleFont(42);
   hMR_C__1->GetZaxis()->SetLabelFont(42);
   hMR_C__1->GetZaxis()->SetLabelSize(0.035);
   hMR_C__1->GetZaxis()->SetTitleSize(0.035);
   hMR_C__1->GetZaxis()->SetTitleFont(42);
   hMR_C__1->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4256187,0.9344495,0.5743813,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("hMR_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
