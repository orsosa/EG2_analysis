void Pt2_AC_Fe()
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
   Double_t xAxis9[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hac_s_px__9 = new TH1D("hac_s_px__9","Acceptance of events from solid target",5, xAxis9);
   hac_s_px__9->SetBinContent(1,0.02976937);
   hac_s_px__9->SetBinContent(2,0.04134015);
   hac_s_px__9->SetBinContent(3,0.04303681);
   hac_s_px__9->SetBinContent(4,0.04506396);
   hac_s_px__9->SetBinContent(5,0.05519175);
   hac_s_px__9->SetBinError(1,0.00727913);
   hac_s_px__9->SetBinError(2,0.007306744);
   hac_s_px__9->SetBinError(3,0.003961994);
   hac_s_px__9->SetBinError(4,0.003739912);
   hac_s_px__9->SetBinError(5,0.005910434);
   hac_s_px__9->SetEntries(268.8329);
   hac_s_px__9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_s_px__9->SetLineColor(ci);
   hac_s_px__9->SetLineWidth(3);
   hac_s_px__9->SetMarkerStyle(8);
   hac_s_px__9->SetMarkerSize(0);
   hac_s_px__9->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hac_s_px__9->GetXaxis()->SetRange(1,5);
   hac_s_px__9->GetXaxis()->SetLabelFont(22);
   hac_s_px__9->GetXaxis()->SetLabelSize(0.05);
   hac_s_px__9->GetXaxis()->SetTitleSize(0.05);
   hac_s_px__9->GetXaxis()->SetTickLength(0.01);
   hac_s_px__9->GetXaxis()->SetTitleOffset(0.85);
   hac_s_px__9->GetXaxis()->SetTitleFont(22);
   hac_s_px__9->GetYaxis()->SetLabelFont(22);
   hac_s_px__9->GetYaxis()->SetLabelSize(0.05);
   hac_s_px__9->GetYaxis()->SetTitleSize(0.05);
   hac_s_px__9->GetYaxis()->SetTitleFont(22);
   hac_s_px__9->GetZaxis()->SetLabelFont(22);
   hac_s_px__9->GetZaxis()->SetLabelSize(0.05);
   hac_s_px__9->GetZaxis()->SetTitleSize(0.05);
   hac_s_px__9->GetZaxis()->SetTitleFont(22);
   hac_s_px__9->Draw("histoe");
   
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
