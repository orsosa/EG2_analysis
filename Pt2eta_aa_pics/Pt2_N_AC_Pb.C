void Pt2_N_AC_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-4349.371,1.75,39144.33);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis13[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hs_ac_px__13 = new TH1D("hs_ac_px__13","N hadrons + AC C",5, xAxis13);
   hs_ac_px__13->SetBinContent(1,26137.09);
   hs_ac_px__13->SetBinContent(2,11339.79);
   hs_ac_px__13->SetBinContent(3,5276.381);
   hs_ac_px__13->SetBinContent(4,2819.696);
   hs_ac_px__13->SetBinContent(5,1992.567);
   hs_ac_px__13->SetBinError(1,7000.967);
   hs_ac_px__13->SetBinError(2,2469.073);
   hs_ac_px__13->SetBinError(3,1376.325);
   hs_ac_px__13->SetBinError(4,500.2212);
   hs_ac_px__13->SetBinError(5,466.0689);
   hs_ac_px__13->SetEntries(39.36693);
   hs_ac_px__13->SetStats(0);
   hs_ac_px__13->SetLineWidth(3);
   hs_ac_px__13->SetMarkerStyle(8);
   hs_ac_px__13->SetMarkerSize(3);
   hs_ac_px__13->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hs_ac_px__13->GetXaxis()->SetRange(1,5);
   hs_ac_px__13->GetXaxis()->SetLabelFont(22);
   hs_ac_px__13->GetXaxis()->SetLabelSize(0.05);
   hs_ac_px__13->GetXaxis()->SetTitleSize(0.05);
   hs_ac_px__13->GetXaxis()->SetTickLength(0.01);
   hs_ac_px__13->GetXaxis()->SetTitleOffset(0.85);
   hs_ac_px__13->GetXaxis()->SetTitleFont(22);
   hs_ac_px__13->GetYaxis()->SetLabelFont(22);
   hs_ac_px__13->GetYaxis()->SetLabelSize(0.05);
   hs_ac_px__13->GetYaxis()->SetTitleSize(0.05);
   hs_ac_px__13->GetYaxis()->SetTitleFont(22);
   hs_ac_px__13->GetZaxis()->SetLabelFont(22);
   hs_ac_px__13->GetZaxis()->SetLabelSize(0.05);
   hs_ac_px__13->GetZaxis()->SetTitleSize(0.05);
   hs_ac_px__13->GetZaxis()->SetTitleFont(22);
   hs_ac_px__13->Draw("pe");
   
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
