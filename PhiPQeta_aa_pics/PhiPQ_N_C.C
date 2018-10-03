void PhiPQ_N_C()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-67.95917,240,611.6325);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis5[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hs_px__5 = new TH1D("hs_px__5","N hadrons C",12, xAxis5);
   hs_px__5->SetBinContent(1,200.831);
   hs_px__5->SetBinContent(2,390.3677);
   hs_px__5->SetBinContent(3,446.9767);
   hs_px__5->SetBinContent(4,270.1435);
   hs_px__5->SetBinContent(5,223.2592);
   hs_px__5->SetBinContent(6,231.3875);
   hs_px__5->SetBinContent(7,236.2036);
   hs_px__5->SetBinContent(8,331.1369);
   hs_px__5->SetBinContent(9,331.6355);
   hs_px__5->SetBinContent(10,377.6044);
   hs_px__5->SetBinContent(11,350.8646);
   hs_px__5->SetBinContent(12,141.7367);
   hs_px__5->SetBinError(1,44.10543);
   hs_px__5->SetBinError(2,98.58308);
   hs_px__5->SetBinError(3,70.80738);
   hs_px__5->SetBinError(4,53.90649);
   hs_px__5->SetBinError(5,40.69049);
   hs_px__5->SetBinError(6,51.35004);
   hs_px__5->SetBinError(7,51.70141);
   hs_px__5->SetBinError(8,52.54112);
   hs_px__5->SetBinError(9,54.60331);
   hs_px__5->SetBinError(10,67.17851);
   hs_px__5->SetBinError(11,55.57465);
   hs_px__5->SetBinError(12,42.66386);
   hs_px__5->SetEntries(299.0939);
   hs_px__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hs_px__5->SetLineColor(ci);
   hs_px__5->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hs_px__5->SetMarkerColor(ci);
   hs_px__5->SetMarkerStyle(8);
   hs_px__5->SetMarkerSize(3);
   hs_px__5->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hs_px__5->GetXaxis()->SetLabelFont(22);
   hs_px__5->GetXaxis()->SetLabelSize(0.05);
   hs_px__5->GetXaxis()->SetTitleSize(0.05);
   hs_px__5->GetXaxis()->SetTickLength(0.01);
   hs_px__5->GetXaxis()->SetTitleOffset(0.85);
   hs_px__5->GetXaxis()->SetTitleFont(22);
   hs_px__5->GetYaxis()->SetLabelFont(22);
   hs_px__5->GetYaxis()->SetLabelSize(0.05);
   hs_px__5->GetYaxis()->SetTitleSize(0.05);
   hs_px__5->GetYaxis()->SetTitleFont(22);
   hs_px__5->GetZaxis()->SetLabelFont(22);
   hs_px__5->GetZaxis()->SetLabelSize(0.05);
   hs_px__5->GetZaxis()->SetTitleSize(0.05);
   hs_px__5->GetZaxis()->SetTitleFont(22);
   hs_px__5->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2337618,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
