void PhiPQ_AC_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-0.01930603,240,0.09128192);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis15[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hac_s_px__15 = new TH1D("hac_s_px__15","Acceptance of events from solid target",12, xAxis15);
   hac_s_px__15->SetBinContent(1,0.04163418);
   hac_s_px__15->SetBinContent(2,0.05346868);
   hac_s_px__15->SetBinContent(3,0.04304177);
   hac_s_px__15->SetBinContent(4,0.05060936);
   hac_s_px__15->SetBinContent(5,0.02334379);
   hac_s_px__15->SetBinContent(6,0.02148548);
   hac_s_px__15->SetBinContent(7,0.03812535);
   hac_s_px__15->SetBinContent(8,0.03255406);
   hac_s_px__15->SetBinContent(9,0.05493372);
   hac_s_px__15->SetBinContent(10,0.05277704);
   hac_s_px__15->SetBinContent(11,0.04325379);
   hac_s_px__15->SetBinContent(12,0.06094044);
   hac_s_px__15->SetBinError(1,0.00785537);
   hac_s_px__15->SetBinError(2,0.01434233);
   hac_s_px__15->SetBinError(3,0.007781705);
   hac_s_px__15->SetBinError(4,0.0134768);
   hac_s_px__15->SetBinError(5,0.02757877);
   hac_s_px__15->SetBinError(6,0.01021397);
   hac_s_px__15->SetBinError(7,0.007180622);
   hac_s_px__15->SetBinError(8,0.008728728);
   hac_s_px__15->SetBinError(9,0.009344389);
   hac_s_px__15->SetBinError(10,0.009985631);
   hac_s_px__15->SetBinError(11,0.007617911);
   hac_s_px__15->SetBinError(12,0.01506981);
   hac_s_px__15->SetEntries(134.9407);
   hac_s_px__15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_s_px__15->SetLineColor(ci);
   hac_s_px__15->SetLineWidth(3);
   hac_s_px__15->SetMarkerStyle(8);
   hac_s_px__15->SetMarkerSize(0);
   hac_s_px__15->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hac_s_px__15->GetXaxis()->SetRange(1,12);
   hac_s_px__15->GetXaxis()->SetLabelFont(22);
   hac_s_px__15->GetXaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetXaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetXaxis()->SetTickLength(0.01);
   hac_s_px__15->GetXaxis()->SetTitleOffset(0.85);
   hac_s_px__15->GetXaxis()->SetTitleFont(22);
   hac_s_px__15->GetYaxis()->SetLabelFont(22);
   hac_s_px__15->GetYaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetYaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetYaxis()->SetTitleFont(22);
   hac_s_px__15->GetZaxis()->SetLabelFont(22);
   hac_s_px__15->GetZaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetZaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetZaxis()->SetTitleFont(22);
   hac_s_px__15->Draw("histoe");
   
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
