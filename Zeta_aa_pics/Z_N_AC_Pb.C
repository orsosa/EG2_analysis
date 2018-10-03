void Z_N_AC_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-3189.792,1.083333,28708.12);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis13[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hs_ac_px__13 = new TH1D("hs_ac_px__13","N hadrons + AC C",5, xAxis13);
   hs_ac_px__13->SetBinContent(1,19569.19);
   hs_ac_px__13->SetBinContent(2,10790.85);
   hs_ac_px__13->SetBinContent(3,5282.769);
   hs_ac_px__13->SetBinContent(4,4223.019);
   hs_ac_px__13->SetBinContent(5,4600.168);
   hs_ac_px__13->SetBinError(1,4733.982);
   hs_ac_px__13->SetBinError(2,2391.581);
   hs_ac_px__13->SetBinError(3,943.5097);
   hs_ac_px__13->SetBinError(4,896.4617);
   hs_ac_px__13->SetBinError(5,994.9576);
   hs_ac_px__13->SetEntries(64.16635);
   hs_ac_px__13->SetStats(0);
   hs_ac_px__13->SetLineWidth(3);
   hs_ac_px__13->SetMarkerStyle(8);
   hs_ac_px__13->SetMarkerSize(3);
   hs_ac_px__13->GetXaxis()->SetTitle("z");
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
