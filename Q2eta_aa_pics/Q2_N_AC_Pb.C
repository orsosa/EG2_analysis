void Q2_N_AC_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:51:20 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4833333,-3256.028,4.616667,29304.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis13[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hs_ac_px__13 = new TH1D("hs_ac_px__13","N hadrons + AC C",5, xAxis13);
   hs_ac_px__13->SetBinContent(1,20990.87);
   hs_ac_px__13->SetBinContent(2,9905.129);
   hs_ac_px__13->SetBinContent(3,5646.49);
   hs_ac_px__13->SetBinContent(4,3210.804);
   hs_ac_px__13->SetBinContent(5,5107.413);
   hs_ac_px__13->SetBinError(1,3816.959);
   hs_ac_px__13->SetBinError(2,2031.464);
   hs_ac_px__13->SetBinError(3,1120.2);
   hs_ac_px__13->SetBinError(4,1030.812);
   hs_ac_px__13->SetBinError(5,2425.061);
   hs_ac_px__13->SetEntries(74.82918);
   hs_ac_px__13->SetStats(0);
   hs_ac_px__13->SetLineWidth(3);
   hs_ac_px__13->SetMarkerStyle(8);
   hs_ac_px__13->SetMarkerSize(3);
   hs_ac_px__13->GetXaxis()->SetTitle("Q^{2} ((GeV^{2})");
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
