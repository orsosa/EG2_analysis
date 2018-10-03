void Pt2_N_C()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-193.1939,1.75,1738.745);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis5[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hs_px__5 = new TH1D("hs_px__5","N hadrons C",5, xAxis5);
   hs_px__5->SetBinContent(1,1333.829);
   hs_px__5->SetBinContent(2,1027.32);
   hs_px__5->SetBinContent(3,525.6442);
   hs_px__5->SetBinContent(4,217.6441);
   hs_px__5->SetBinContent(5,227.2771);
   hs_px__5->SetBinError(1,138.1248);
   hs_px__5->SetBinError(2,130.49);
   hs_px__5->SetBinError(3,64.43773);
   hs_px__5->SetBinError(4,34.19239);
   hs_px__5->SetBinError(5,42.47256);
   hs_px__5->SetEntries(256.7654);
   hs_px__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hs_px__5->SetLineColor(ci);
   hs_px__5->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hs_px__5->SetMarkerColor(ci);
   hs_px__5->SetMarkerStyle(8);
   hs_px__5->SetMarkerSize(3);
   hs_px__5->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hs_px__5->GetXaxis()->SetLabelFont(22);
   hs_px__5->GetXaxis()->SetLabelSize(0.05);
   hs_px__5->GetXaxis()->SetTitleSize(0.05);
   hs_px__5->GetXaxis()->SetTickLength(0.01);
   hs_px__5->GetXaxis()->SetTitleOffset(0.85);
   hs_px__5->GetXaxis()->SetTitleFont(22);
   hs_px__5->GetYaxis()->SetLabelFont(22);
   hs_px__5->GetYaxis()->SetLabelSize(0.05);
   hs_px__5->GetYaxis()->SetTitleSize(0.05);
   hs_px__5->GetYaxis()->SetTitleFont(22);
   hs_px__5->GetZaxis()->SetLabelFont(22);
   hs_px__5->GetZaxis()->SetLabelSize(0.05);
   hs_px__5->GetZaxis()->SetTitleSize(0.05);
   hs_px__5->GetZaxis()->SetTitleFont(22);
   hs_px__5->Draw("pe");
   
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
