void Z_AC_C()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-0.007380765,1.083333,0.06642688);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis3[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hac_s_px__3 = new TH1D("hac_s_px__3","Acceptance of events from solid target",5, xAxis3);
   hac_s_px__3->SetBinContent(1,0.03534004);
   hac_s_px__3->SetBinContent(2,0.04051848);
   hac_s_px__3->SetBinContent(3,0.05100819);
   hac_s_px__3->SetBinContent(4,0.04910443);
   hac_s_px__3->SetBinContent(5,0.02384904);
   hac_s_px__3->SetBinError(1,0.007346499);
   hac_s_px__3->SetBinError(2,0.0070293);
   hac_s_px__3->SetBinError(3,0.005226207);
   hac_s_px__3->SetBinError(4,0.006066174);
   hac_s_px__3->SetBinError(5,0.003242962);
   hac_s_px__3->SetEntries(224.3018);
   hac_s_px__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_s_px__3->SetLineColor(ci);
   hac_s_px__3->SetLineWidth(3);
   hac_s_px__3->SetMarkerStyle(8);
   hac_s_px__3->SetMarkerSize(0);
   hac_s_px__3->GetXaxis()->SetTitle("z");
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
