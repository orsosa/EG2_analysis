void Q2_N_AC_DC()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:51:20 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4833333,-9901.732,4.616667,89115.58);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hl_ac_px__2 = new TH1D("hl_ac_px__2","N hadrons + AC D_C",5, xAxis2);
   hl_ac_px__2->SetBinContent(1,65482.21);
   hl_ac_px__2->SetBinContent(2,24299.46);
   hl_ac_px__2->SetBinContent(3,15084.98);
   hl_ac_px__2->SetBinContent(4,11008.52);
   hl_ac_px__2->SetBinContent(5,5834.974);
   hl_ac_px__2->SetBinError(1,9959.544);
   hl_ac_px__2->SetBinError(2,3608.583);
   hl_ac_px__2->SetBinError(3,3221.186);
   hl_ac_px__2->SetBinError(4,2433.428);
   hl_ac_px__2->SetBinError(5,1576.123);
   hl_ac_px__2->SetEntries(113.0824);
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
   hl_ac_px__2->GetXaxis()->SetTitle("Q^{2} ((GeV^{2})");
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
