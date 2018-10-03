void Z_N_AC_DC()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-5767.027,1.083333,51903.24);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hl_ac_px__2 = new TH1D("hl_ac_px__2","N hadrons + AC D_C",5, xAxis2);
   hl_ac_px__2->SetBinContent(1,31081.99);
   hl_ac_px__2->SetBinContent(2,36840.26);
   hl_ac_px__2->SetBinContent(3,18875.63);
   hl_ac_px__2->SetBinContent(4,15877.29);
   hl_ac_px__2->SetBinContent(5,13800.03);
   hl_ac_px__2->SetBinError(1,8868.067);
   hl_ac_px__2->SetBinError(2,7098.989);
   hl_ac_px__2->SetBinError(3,2203.745);
   hl_ac_px__2->SetBinError(4,1877.536);
   hl_ac_px__2->SetBinError(5,2307.962);
   hl_ac_px__2->SetEntries(95.03886);
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
   hl_ac_px__2->GetXaxis()->SetTitle("z");
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
