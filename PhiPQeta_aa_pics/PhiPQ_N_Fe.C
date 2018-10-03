void PhiPQ_N_Fe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-356.3838,240,1161.507);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis11[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hs_px__11 = new TH1D("hs_px__11","N hadrons C",12, xAxis11);
   hs_px__11->SetBinContent(1,475.7874);
   hs_px__11->SetBinContent(2,543.3907);
   hs_px__11->SetBinContent(3,567.996);
   hs_px__11->SetBinContent(4,401.1847);
   hs_px__11->SetBinContent(5,340.4887);
   hs_px__11->SetBinContent(6,232.6393);
   hs_px__11->SetBinContent(7,264.5972);
   hs_px__11->SetBinContent(8,289.7549);
   hs_px__11->SetBinContent(9,454.4277);
   hs_px__11->SetBinContent(10,586.2211);
   hs_px__11->SetBinContent(11,655.9564);
   hs_px__11->SetBinContent(12,470.0163);
   hs_px__11->SetBinError(1,70.22236);
   hs_px__11->SetBinError(2,61.67398);
   hs_px__11->SetBinError(3,73.84096);
   hs_px__11->SetBinError(4,550.7085);
   hs_px__11->SetBinError(5,57.03349);
   hs_px__11->SetBinError(6,73.15728);
   hs_px__11->SetBinError(7,61.8853);
   hs_px__11->SetBinError(8,46.74127);
   hs_px__11->SetBinError(9,69.8157);
   hs_px__11->SetBinError(10,101.9644);
   hs_px__11->SetBinError(11,62.25005);
   hs_px__11->SetBinError(12,69.95049);
   hs_px__11->SetEntries(78.35545);
   hs_px__11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hs_px__11->SetLineColor(ci);
   hs_px__11->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hs_px__11->SetMarkerColor(ci);
   hs_px__11->SetMarkerStyle(8);
   hs_px__11->SetMarkerSize(3);
   hs_px__11->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hs_px__11->GetXaxis()->SetRange(1,12);
   hs_px__11->GetXaxis()->SetLabelFont(22);
   hs_px__11->GetXaxis()->SetLabelSize(0.05);
   hs_px__11->GetXaxis()->SetTitleSize(0.05);
   hs_px__11->GetXaxis()->SetTickLength(0.01);
   hs_px__11->GetXaxis()->SetTitleOffset(0.85);
   hs_px__11->GetXaxis()->SetTitleFont(22);
   hs_px__11->GetYaxis()->SetLabelFont(22);
   hs_px__11->GetYaxis()->SetLabelSize(0.05);
   hs_px__11->GetYaxis()->SetTitleSize(0.05);
   hs_px__11->GetYaxis()->SetTitleFont(22);
   hs_px__11->GetZaxis()->SetLabelFont(22);
   hs_px__11->GetZaxis()->SetLabelSize(0.05);
   hs_px__11->GetZaxis()->SetTitleSize(0.05);
   hs_px__11->GetZaxis()->SetTitleFont(22);
   hs_px__11->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2337618,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
