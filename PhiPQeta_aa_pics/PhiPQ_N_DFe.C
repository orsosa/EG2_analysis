void PhiPQ_N_DFe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-202.6438,240,1823.794);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis12[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hl_px__12 = new TH1D("hl_px__12","N hadrons D_C",12, xAxis12);
   hl_px__12->SetBinContent(1,810.2868);
   hl_px__12->SetBinContent(2,1097.61);
   hl_px__12->SetBinContent(3,969.6284);
   hl_px__12->SetBinContent(4,740.923);
   hl_px__12->SetBinContent(5,618.7642);
   hl_px__12->SetBinContent(6,631.3303);
   hl_px__12->SetBinContent(7,605.1516);
   hl_px__12->SetBinContent(8,623.3305);
   hl_px__12->SetBinContent(9,752.8846);
   hl_px__12->SetBinContent(10,1036.233);
   hl_px__12->SetBinContent(11,1394.419);
   hl_px__12->SetBinContent(12,872.557);
   hl_px__12->SetBinError(1,88.05032);
   hl_px__12->SetBinError(2,91.50333);
   hl_px__12->SetBinError(3,129.8492);
   hl_px__12->SetBinError(4,87.0714);
   hl_px__12->SetBinError(5,73.95528);
   hl_px__12->SetBinError(6,84.02665);
   hl_px__12->SetBinError(7,85.5844);
   hl_px__12->SetBinError(8,98.98322);
   hl_px__12->SetBinError(9,130.5813);
   hl_px__12->SetBinError(10,122.3854);
   hl_px__12->SetBinError(11,149.5338);
   hl_px__12->SetBinError(12,88.64517);
   hl_px__12->SetEntries(778.1931);
   hl_px__12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hl_px__12->SetLineColor(ci);
   hl_px__12->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hl_px__12->SetMarkerColor(ci);
   hl_px__12->SetMarkerStyle(8);
   hl_px__12->SetMarkerSize(3);
   hl_px__12->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hl_px__12->GetXaxis()->SetRange(1,12);
   hl_px__12->GetXaxis()->SetLabelFont(22);
   hl_px__12->GetXaxis()->SetLabelSize(0.05);
   hl_px__12->GetXaxis()->SetTitleSize(0.05);
   hl_px__12->GetXaxis()->SetTickLength(0.01);
   hl_px__12->GetXaxis()->SetTitleOffset(0.85);
   hl_px__12->GetXaxis()->SetTitleFont(22);
   hl_px__12->GetYaxis()->SetLabelFont(22);
   hl_px__12->GetYaxis()->SetLabelSize(0.05);
   hl_px__12->GetYaxis()->SetTitleSize(0.05);
   hl_px__12->GetYaxis()->SetTitleFont(22);
   hl_px__12->GetZaxis()->SetLabelFont(22);
   hl_px__12->GetZaxis()->SetLabelSize(0.05);
   hl_px__12->GetZaxis()->SetTitleSize(0.05);
   hl_px__12->GetZaxis()->SetTitleFont(22);
   hl_px__12->Draw("pe");
   
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
