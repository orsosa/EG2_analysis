void Z_N_AC_C()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1280,960);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-5343.265,1.083333,48089.39);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hs_ac_px__1 = new TH1D("hs_ac_px__1","N hadrons + AC C",5, xAxis1);
   hs_ac_px__1->SetBinContent(1,30101.59);
   hs_ac_px__1->SetBinContent(2,24133.83);
   hs_ac_px__1->SetBinContent(3,10318.61);
   hs_ac_px__1->SetBinContent(4,10186.64);
   hs_ac_px__1->SetBinContent(5,10458.84);
   hs_ac_px__1->SetBinError(1,10609);
   hs_ac_px__1->SetBinError(2,4832.378);
   hs_ac_px__1->SetBinError(3,1557.895);
   hs_ac_px__1->SetBinError(4,1794.837);
   hs_ac_px__1->SetBinError(5,1775.38);
   hs_ac_px__1->SetEntries(50.16445);
   hs_ac_px__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hs_ac_px__1->SetLineColor(ci);
   hs_ac_px__1->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hs_ac_px__1->SetMarkerColor(ci);
   hs_ac_px__1->SetMarkerStyle(8);
   hs_ac_px__1->SetMarkerSize(3);
   hs_ac_px__1->GetXaxis()->SetTitle("z");
   hs_ac_px__1->GetXaxis()->SetLabelFont(22);
   hs_ac_px__1->GetXaxis()->SetLabelSize(0.05);
   hs_ac_px__1->GetXaxis()->SetTitleSize(0.05);
   hs_ac_px__1->GetXaxis()->SetTickLength(0.01);
   hs_ac_px__1->GetXaxis()->SetTitleOffset(0.85);
   hs_ac_px__1->GetXaxis()->SetTitleFont(22);
   hs_ac_px__1->GetYaxis()->SetLabelFont(22);
   hs_ac_px__1->GetYaxis()->SetLabelSize(0.05);
   hs_ac_px__1->GetYaxis()->SetTitleSize(0.05);
   hs_ac_px__1->GetYaxis()->SetTitleFont(22);
   hs_ac_px__1->GetZaxis()->SetLabelFont(22);
   hs_ac_px__1->GetZaxis()->SetLabelSize(0.05);
   hs_ac_px__1->GetZaxis()->SetTitleSize(0.05);
   hs_ac_px__1->GetZaxis()->SetTitleFont(22);
   hs_ac_px__1->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.3231034,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons + AC C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
