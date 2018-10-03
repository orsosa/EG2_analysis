void Pt2_AC_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-0.008019663,1.75,0.07217696);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis15[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hac_s_px__15 = new TH1D("hac_s_px__15","Acceptance of events from solid target",5, xAxis15);
   hac_s_px__15->SetBinContent(1,0.02976937);
   hac_s_px__15->SetBinContent(2,0.04134015);
   hac_s_px__15->SetBinContent(3,0.04303681);
   hac_s_px__15->SetBinContent(4,0.04506396);
   hac_s_px__15->SetBinContent(5,0.05519175);
   hac_s_px__15->SetBinError(1,0.00727913);
   hac_s_px__15->SetBinError(2,0.007306744);
   hac_s_px__15->SetBinError(3,0.003961994);
   hac_s_px__15->SetBinError(4,0.003739912);
   hac_s_px__15->SetBinError(5,0.005910434);
   hac_s_px__15->SetEntries(268.8329);
   hac_s_px__15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_s_px__15->SetLineColor(ci);
   hac_s_px__15->SetLineWidth(3);
   hac_s_px__15->SetMarkerStyle(8);
   hac_s_px__15->SetMarkerSize(0);
   hac_s_px__15->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hac_s_px__15->GetXaxis()->SetRange(1,5);
   hac_s_px__15->GetXaxis()->SetLabelFont(22);
   hac_s_px__15->GetXaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetXaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetXaxis()->SetTickLength(0.01);
   hac_s_px__15->GetXaxis()->SetTitleOffset(0.85);
   hac_s_px__15->GetXaxis()->SetTitleFont(22);
   hac_s_px__15->GetYaxis()->SetLabelFont(22);
   hac_s_px__15->GetYaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetYaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetYaxis()->SetTitleFont(22);
   hac_s_px__15->GetZaxis()->SetLabelFont(22);
   hac_s_px__15->GetZaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetZaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetZaxis()->SetTitleFont(22);
   hac_s_px__15->Draw("histoe");
   
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
