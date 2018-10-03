void Q2_AC_C()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:51:20 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4833333,-0.01122829,4.616667,0.1010546);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis3[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hac_s_px__3 = new TH1D("hac_s_px__3","Acceptance of events from solid target",5, xAxis3);
   hac_s_px__3->SetBinContent(1,0.0220962);
   hac_s_px__3->SetBinContent(2,0.05022223);
   hac_s_px__3->SetBinContent(3,0.05788562);
   hac_s_px__3->SetBinContent(4,0.06830835);
   hac_s_px__3->SetBinContent(5,0.04103063);
   hac_s_px__3->SetBinError(1,0.002416225);
   hac_s_px__3->SetBinError(2,0.008277457);
   hac_s_px__3->SetBinError(3,0.007082855);
   hac_s_px__3->SetBinError(4,0.01724051);
   hac_s_px__3->SetBinError(5,0.01886827);
   hac_s_px__3->SetEntries(73.7763);
   hac_s_px__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_s_px__3->SetLineColor(ci);
   hac_s_px__3->SetLineWidth(3);
   hac_s_px__3->SetMarkerStyle(8);
   hac_s_px__3->SetMarkerSize(0);
   hac_s_px__3->GetXaxis()->SetTitle("Q^{2} ((GeV^{2})");
   hac_s_px__3->GetXaxis()->SetLabelFont(22);
   hac_s_px__3->GetXaxis()->SetLabelSize(0.05);
   hac_s_px__3->GetXaxis()->SetTitleSize(0.05);
   hac_s_px__3->GetXaxis()->SetTickLength(0.01);
   hac_s_px__3->GetXaxis()->SetTitleOffset(0.85);
   hac_s_px__3->GetXaxis()->SetTitleFont(22);
   hac_s_px__3->GetYaxis()->SetLabelFont(22);
   hac_s_px__3->GetYaxis()->SetLabelSize(0.05);
   hac_s_px__3->GetYaxis()->SetTitleSize(0.05);
   hac_s_px__3->GetYaxis()->SetTitleFont(22);
   hac_s_px__3->GetZaxis()->SetLabelFont(22);
   hac_s_px__3->GetZaxis()->SetLabelSize(0.05);
   hac_s_px__3->GetZaxis()->SetTitleSize(0.05);
   hac_s_px__3->GetZaxis()->SetTitleFont(22);
   hac_s_px__3->Draw("histoe");
   
   TPaveText *pt = new TPaveText(0.01,0.9396352,0.6655799,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Acceptance of events from solid target");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
