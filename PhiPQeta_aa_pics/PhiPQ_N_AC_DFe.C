void PhiPQ_N_AC_DFe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-4277.268,240,38495.41);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis8[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hl_ac_px__8 = new TH1D("hl_ac_px__8","N hadrons + AC D_C",12, xAxis8);
   hl_ac_px__8->SetBinContent(1,9892.569);
   hl_ac_px__8->SetBinContent(2,16584.94);
   hl_ac_px__8->SetBinContent(3,16758.59);
   hl_ac_px__8->SetBinContent(4,14096.74);
   hl_ac_px__8->SetBinContent(5,12051.57);
   hl_ac_px__8->SetBinContent(6,21387.15);
   hl_ac_px__8->SetBinContent(7,21809.46);
   hl_ac_px__8->SetBinContent(8,16053.05);
   hl_ac_px__8->SetBinContent(9,10956.33);
   hl_ac_px__8->SetBinContent(10,18637.85);
   hl_ac_px__8->SetBinContent(11,24805.85);
   hl_ac_px__8->SetBinContent(12,11146.06);
   hl_ac_px__8->SetBinError(1,1878.668);
   hl_ac_px__8->SetBinError(2,2881.668);
   hl_ac_px__8->SetBinError(3,3738.274);
   hl_ac_px__8->SetBinError(4,3635.73);
   hl_ac_px__8->SetBinError(5,2890.744);
   hl_ac_px__8->SetBinError(6,8413.729);
   hl_ac_px__8->SetBinError(7,10779.25);
   hl_ac_px__8->SetBinError(8,4440.841);
   hl_ac_px__8->SetBinError(9,2734.904);
   hl_ac_px__8->SetBinError(10,4083.808);
   hl_ac_px__8->SetBinError(11,3951.273);
   hl_ac_px__8->SetBinError(12,2090.624);
   hl_ac_px__8->SetEntries(126.4334);
   hl_ac_px__8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hl_ac_px__8->SetLineColor(ci);
   hl_ac_px__8->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hl_ac_px__8->SetMarkerColor(ci);
   hl_ac_px__8->SetMarkerStyle(8);
   hl_ac_px__8->SetMarkerSize(3);
   hl_ac_px__8->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hl_ac_px__8->GetXaxis()->SetRange(1,12);
   hl_ac_px__8->GetXaxis()->SetLabelFont(22);
   hl_ac_px__8->GetXaxis()->SetLabelSize(0.05);
   hl_ac_px__8->GetXaxis()->SetTitleSize(0.05);
   hl_ac_px__8->GetXaxis()->SetTickLength(0.01);
   hl_ac_px__8->GetXaxis()->SetTitleOffset(0.85);
   hl_ac_px__8->GetXaxis()->SetTitleFont(22);
   hl_ac_px__8->GetYaxis()->SetLabelFont(22);
   hl_ac_px__8->GetYaxis()->SetLabelSize(0.05);
   hl_ac_px__8->GetYaxis()->SetTitleSize(0.05);
   hl_ac_px__8->GetYaxis()->SetTitleFont(22);
   hl_ac_px__8->GetZaxis()->SetLabelFont(22);
   hl_ac_px__8->GetZaxis()->SetLabelSize(0.05);
   hl_ac_px__8->GetZaxis()->SetTitleSize(0.05);
   hl_ac_px__8->GetZaxis()->SetTitleFont(22);
   hl_ac_px__8->Draw("pe");
   
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
