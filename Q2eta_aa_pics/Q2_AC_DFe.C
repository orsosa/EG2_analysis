void Q2_AC_DFe()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:51:20 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4833333,-0.01068093,4.616667,0.0961284);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis10[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hac_l_px__10 = new TH1D("hac_l_px__10","Acceptance of events from liquid target",5, xAxis10);
   hac_l_px__10->SetBinContent(1,0.02671228);
   hac_l_px__10->SetBinContent(2,0.04824612);
   hac_l_px__10->SetBinContent(3,0.06269968);
   hac_l_px__10->SetBinContent(4,0.06603677);
   hac_l_px__10->SetBinContent(5,0.06744232);
   hac_l_px__10->SetBinError(1,0.003465885);
   hac_l_px__10->SetBinError(2,0.004146808);
   hac_l_px__10->SetBinError(3,0.006223515);
   hac_l_px__10->SetBinError(4,0.008493869);
   hac_l_px__10->SetBinError(5,0.01393622);
   hac_l_px__10->SetEntries(219.9054);
   hac_l_px__10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_l_px__10->SetLineColor(ci);
   hac_l_px__10->SetLineWidth(3);
   hac_l_px__10->SetMarkerStyle(8);
   hac_l_px__10->SetMarkerSize(0);
   hac_l_px__10->GetXaxis()->SetTitle("Q^{2} ((GeV^{2})");
   hac_l_px__10->GetXaxis()->SetRange(1,5);
   hac_l_px__10->GetXaxis()->SetLabelFont(22);
   hac_l_px__10->GetXaxis()->SetLabelSize(0.05);
   hac_l_px__10->GetXaxis()->SetTitleSize(0.05);
   hac_l_px__10->GetXaxis()->SetTickLength(0.01);
   hac_l_px__10->GetXaxis()->SetTitleOffset(0.85);
   hac_l_px__10->GetXaxis()->SetTitleFont(22);
   hac_l_px__10->GetYaxis()->SetLabelFont(22);
   hac_l_px__10->GetYaxis()->SetLabelSize(0.05);
   hac_l_px__10->GetYaxis()->SetTitleSize(0.05);
   hac_l_px__10->GetYaxis()->SetTitleFont(22);
   hac_l_px__10->GetZaxis()->SetLabelFont(22);
   hac_l_px__10->GetZaxis()->SetLabelSize(0.05);
   hac_l_px__10->GetZaxis()->SetTitleSize(0.05);
   hac_l_px__10->GetZaxis()->SetTitleFont(22);
   hac_l_px__10->Draw("histoe");
   
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
