void Pt2_N_DC()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-370.0546,1.75,3330.491);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis6[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hl_px__6 = new TH1D("hl_px__6","N hadrons D_C",5, xAxis6);
   hl_px__6->SetBinContent(1,2611.054);
   hl_px__6->SetBinContent(2,1319.589);
   hl_px__6->SetBinContent(3,799.8087);
   hl_px__6->SetBinContent(4,396.9186);
   hl_px__6->SetBinContent(5,100.5374);
   hl_px__6->SetBinError(1,208.4095);
   hl_px__6->SetBinError(2,131.3958);
   hl_px__6->SetBinError(3,146.0403);
   hl_px__6->SetBinError(4,57.2069);
   hl_px__6->SetBinError(5,35.7851);
   hl_px__6->SetEntries(315.6724);
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
   hl_px__6->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
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
