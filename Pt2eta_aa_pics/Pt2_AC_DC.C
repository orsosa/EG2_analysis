void Pt2_AC_DC()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-0.007647198,1.75,0.06882478);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis4[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hac_l_px__4 = new TH1D("hac_l_px__4","Acceptance of events from liquid target",5, xAxis4);
   hac_l_px__4->SetBinContent(1,0.0321391);
   hac_l_px__4->SetBinContent(2,0.03923677);
   hac_l_px__4->SetBinContent(3,0.05182585);
   hac_l_px__4->SetBinContent(4,0.04551052);
   hac_l_px__4->SetBinContent(5,0.05246517);
   hac_l_px__4->SetBinError(1,0.004964271);
   hac_l_px__4->SetBinError(2,0.004504674);
   hac_l_px__4->SetBinError(3,0.00643851);
   hac_l_px__4->SetBinError(4,0.005540485);
   hac_l_px__4->SetBinError(5,0.00330858);
   hac_l_px__4->SetEntries(382.0812);
   hac_l_px__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_l_px__4->SetLineColor(ci);
   hac_l_px__4->SetLineWidth(3);
   hac_l_px__4->SetMarkerStyle(8);
   hac_l_px__4->SetMarkerSize(0);
   hac_l_px__4->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hac_l_px__4->GetXaxis()->SetLabelFont(22);
   hac_l_px__4->GetXaxis()->SetLabelSize(0.05);
   hac_l_px__4->GetXaxis()->SetTitleSize(0.05);
   hac_l_px__4->GetXaxis()->SetTickLength(0.01);
   hac_l_px__4->GetXaxis()->SetTitleOffset(0.85);
   hac_l_px__4->GetXaxis()->SetTitleFont(22);
   hac_l_px__4->GetYaxis()->SetLabelFont(22);
   hac_l_px__4->GetYaxis()->SetLabelSize(0.05);
   hac_l_px__4->GetYaxis()->SetTitleSize(0.05);
   hac_l_px__4->GetYaxis()->SetTitleFont(22);
   hac_l_px__4->GetZaxis()->SetLabelFont(22);
   hac_l_px__4->GetZaxis()->SetLabelSize(0.05);
   hac_l_px__4->GetZaxis()->SetTitleSize(0.05);
   hac_l_px__4->GetZaxis()->SetTitleFont(22);
   hac_l_px__4->Draw("histoe");
   
   TPaveText *pt = new TPaveText(0.01,0.9396352,0.6773354,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Acceptance of events from liquid target");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
