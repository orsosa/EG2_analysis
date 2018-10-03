void Z_AC_DC()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-0.007328889,1.083333,0.06595999);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis4[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hac_l_px__4 = new TH1D("hac_l_px__4","Acceptance of events from liquid target",5, xAxis4);
   hac_l_px__4->SetBinContent(1,0.04566148);
   hac_l_px__4->SetBinContent(2,0.03906904);
   hac_l_px__4->SetBinContent(3,0.05091424);
   hac_l_px__4->SetBinContent(4,0.04941588);
   hac_l_px__4->SetBinContent(5,0.0258012);
   hac_l_px__4->SetBinError(1,0.01017767);
   hac_l_px__4->SetBinError(2,0.006733963);
   hac_l_px__4->SetBinError(3,0.003728975);
   hac_l_px__4->SetBinError(4,0.003585113);
   hac_l_px__4->SetBinError(5,0.002784049);
   hac_l_px__4->SetEntries(242.3823);
   hac_l_px__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_l_px__4->SetLineColor(ci);
   hac_l_px__4->SetLineWidth(3);
   hac_l_px__4->SetMarkerStyle(8);
   hac_l_px__4->SetMarkerSize(0);
   hac_l_px__4->GetXaxis()->SetTitle("z");
   hac_l_px__4->GetXaxis()->SetLabelFont(22);
   hac_l_px__4->GetXaxis()->SetLabelSize(0.05);
   hac_l_px__4->GetXaxis()->SetTitleSize(0.05);
   hac_l_px__4->GetXaxis()->SetTickLength(0.01);
   hac_l_px__4->GetXaxis()->SetTitleOffset(0.85);
   hac_l_px__4->GetXaxis()->SetTitleFont(22);
   hac_l_px__4->GetYaxis()->SetLabelFont(22);
   hac_l_px__4->GetYaxis()->SetLabelSize(0.05);
   hac_l_px__4->GetYaxis()->SetTitleSize(0.05);
   hac_l_px__4->GetYaxis()->SetTitleFont(22);
   hac_l_px__4->GetZaxis()->SetLabelFont(22);
   hac_l_px__4->GetZaxis()->SetLabelSize(0.05);
   hac_l_px__4->GetZaxis()->SetTitleSize(0.05);
   hac_l_px__4->GetZaxis()->SetTitleFont(22);
   hac_l_px__4->Draw("histoe");
   
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
