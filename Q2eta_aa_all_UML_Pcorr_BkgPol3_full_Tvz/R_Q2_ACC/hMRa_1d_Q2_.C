void hMRa_1d_Q2_()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:20:25 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(0.6125,0.09008507,4.4875,2.728543);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hMR_C__1 = new TH1D("hMR_C__1","hMR_C",5, xAxis1);
   hMR_C__1->SetBinContent(1,0.717462);
   hMR_C__1->SetBinContent(2,1.010706);
   hMR_C__1->SetBinContent(3,0.9698015);
   hMR_C__1->SetBinContent(4,0.7142871);
   hMR_C__1->SetBinContent(5,1.510506);
   hMR_C__1->SetBinError(1,0.1602529);
   hMR_C__1->SetBinError(2,0.276584);
   hMR_C__1->SetBinError(3,0.2631862);
   hMR_C__1->SetBinError(4,0.2646299);
   hMR_C__1->SetBinError(5,0.8536784);
   hMR_C__1->SetEntries(24.97684);
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
   hMR_C__1->GetXaxis()->SetTitle("Q2");
   hMR_C__1->GetXaxis()->SetLabelFont(42);
   hMR_C__1->GetXaxis()->SetLabelSize(0.035);
   hMR_C__1->GetXaxis()->SetTitleSize(0.035);
   hMR_C__1->GetXaxis()->SetTitleFont(42);
   hMR_C__1->GetYaxis()->SetTitle("R(Q2)");
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
