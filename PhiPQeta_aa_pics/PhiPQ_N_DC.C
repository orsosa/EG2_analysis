void PhiPQ_N_DC()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-89.74532,240,807.7078);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis6[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hl_px__6 = new TH1D("hl_px__6","N hadrons D_C",12, xAxis6);
   hl_px__6->SetBinContent(1,519.7942);
   hl_px__6->SetBinContent(2,579.0516);
   hl_px__6->SetBinContent(3,480.4161);
   hl_px__6->SetBinContent(4,423.6572);
   hl_px__6->SetBinContent(5,429.2935);
   hl_px__6->SetBinContent(6,266.547);
   hl_px__6->SetBinContent(7,294.2775);
   hl_px__6->SetBinContent(8,356.0931);
   hl_px__6->SetBinContent(9,396.8996);
   hl_px__6->SetBinContent(10,426.9953);
   hl_px__6->SetBinContent(11,567.2704);
   hl_px__6->SetBinContent(12,417.758);
   hl_px__6->SetBinError(1,76.52052);
   hl_px__6->SetBinError(2,70.66693);
   hl_px__6->SetBinError(3,81.87438);
   hl_px__6->SetBinError(4,68.9885);
   hl_px__6->SetBinError(5,63.54579);
   hl_px__6->SetBinError(6,67.02794);
   hl_px__6->SetBinError(7,68.10124);
   hl_px__6->SetBinError(8,52.73842);
   hl_px__6->SetBinError(9,97.82163);
   hl_px__6->SetBinError(10,73.76137);
   hl_px__6->SetBinError(11,116.5033);
   hl_px__6->SetBinError(12,70.55062);
   hl_px__6->SetEntries(370.4359);
   hl_px__6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hl_px__6->SetLineColor(ci);
   hl_px__6->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hl_px__6->SetMarkerColor(ci);
   hl_px__6->SetMarkerStyle(8);
   hl_px__6->SetMarkerSize(3);
   hl_px__6->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hl_px__6->GetXaxis()->SetLabelFont(22);
   hl_px__6->GetXaxis()->SetLabelSize(0.05);
   hl_px__6->GetXaxis()->SetTitleSize(0.05);
   hl_px__6->GetXaxis()->SetTickLength(0.01);
   hl_px__6->GetXaxis()->SetTitleOffset(0.85);
   hl_px__6->GetXaxis()->SetTitleFont(22);
   hl_px__6->GetYaxis()->SetLabelFont(22);
   hl_px__6->GetYaxis()->SetLabelSize(0.05);
   hl_px__6->GetYaxis()->SetTitleSize(0.05);
   hl_px__6->GetYaxis()->SetTitleFont(22);
   hl_px__6->GetZaxis()->SetLabelFont(22);
   hl_px__6->GetZaxis()->SetLabelSize(0.05);
   hl_px__6->GetZaxis()->SetTitleSize(0.05);
   hl_px__6->GetZaxis()->SetTitleFont(22);
   hl_px__6->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.9409228,0.2784326,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons D_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
