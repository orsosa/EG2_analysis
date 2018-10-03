void PhiPQ_N_AC_DC()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:42 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-2125.711,240,19131.4);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hl_ac_px__2 = new TH1D("hl_ac_px__2","N hadrons + AC D_C",12, xAxis2);
   hl_ac_px__2->SetBinContent(1,6346.025);
   hl_ac_px__2->SetBinContent(2,8749.49);
   hl_ac_px__2->SetBinContent(3,8303.279);
   hl_ac_px__2->SetBinContent(4,8060.466);
   hl_ac_px__2->SetBinContent(5,8361.278);
   hl_ac_px__2->SetBinContent(6,9029.634);
   hl_ac_px__2->SetBinContent(7,10605.66);
   hl_ac_px__2->SetBinContent(8,9170.704);
   hl_ac_px__2->SetBinContent(9,5775.872);
   hl_ac_px__2->SetBinContent(10,7680.007);
   hl_ac_px__2->SetBinContent(11,10091.39);
   hl_ac_px__2->SetBinContent(12,5336.449);
   hl_ac_px__2->SetBinError(1,1360.007);
   hl_ac_px__2->SetBinError(2,1708.582);
   hl_ac_px__2->SetBinError(3,2048.559);
   hl_ac_px__2->SetBinError(4,2268.784);
   hl_ac_px__2->SetBinError(5,2134.353);
   hl_ac_px__2->SetBinError(6,4041.064);
   hl_ac_px__2->SetBinError(7,5590.23);
   hl_ac_px__2->SetBinError(8,2481.942);
   hl_ac_px__2->SetBinError(9,1761.141);
   hl_ac_px__2->SetBinError(10,1941.426);
   hl_ac_px__2->SetBinError(11,2389.163);
   hl_ac_px__2->SetBinError(12,1232.942);
   hl_ac_px__2->SetEntries(109.9115);
   hl_ac_px__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hl_ac_px__2->SetLineColor(ci);
   hl_ac_px__2->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hl_ac_px__2->SetMarkerColor(ci);
   hl_ac_px__2->SetMarkerStyle(8);
   hl_ac_px__2->SetMarkerSize(3);
   hl_ac_px__2->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hl_ac_px__2->GetXaxis()->SetLabelFont(22);
   hl_ac_px__2->GetXaxis()->SetLabelSize(0.05);
   hl_ac_px__2->GetXaxis()->SetTitleSize(0.05);
   hl_ac_px__2->GetXaxis()->SetTickLength(0.01);
   hl_ac_px__2->GetXaxis()->SetTitleOffset(0.85);
   hl_ac_px__2->GetXaxis()->SetTitleFont(22);
   hl_ac_px__2->GetYaxis()->SetLabelFont(22);
   hl_ac_px__2->GetYaxis()->SetLabelSize(0.05);
   hl_ac_px__2->GetYaxis()->SetTitleSize(0.05);
   hl_ac_px__2->GetYaxis()->SetTitleFont(22);
   hl_ac_px__2->GetZaxis()->SetLabelFont(22);
   hl_ac_px__2->GetZaxis()->SetLabelSize(0.05);
   hl_ac_px__2->GetZaxis()->SetTitleSize(0.05);
   hl_ac_px__2->GetZaxis()->SetTitleFont(22);
   hl_ac_px__2->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.9409228,0.3669906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons + AC D_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
