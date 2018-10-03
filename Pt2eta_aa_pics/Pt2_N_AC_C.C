void Pt2_N_AC_C()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1280,960);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-7442.284,1.75,66980.55);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hs_ac_px__1 = new TH1D("hs_ac_px__1","N hadrons + AC C",5, xAxis1);
   hs_ac_px__1->SetBinContent(1,44805.41);
   hs_ac_px__1->SetBinContent(2,24850.43);
   hs_ac_px__1->SetBinContent(3,12213.83);
   hs_ac_px__1->SetBinContent(4,4829.67);
   hs_ac_px__1->SetBinContent(5,4117.955);
   hs_ac_px__1->SetBinError(1,11897.71);
   hs_ac_px__1->SetBinError(2,5408.809);
   hs_ac_px__1->SetBinError(3,1872.464);
   hs_ac_px__1->SetBinError(4,858.1153);
   hs_ac_px__1->SetBinError(5,886.9446);
   hs_ac_px__1->SetEntries(46.90507);
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
   hs_ac_px__1->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
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
