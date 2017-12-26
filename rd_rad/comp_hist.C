{
//=========Macro generated from canvas: cmp0/cmp0
//=========  (Fri Nov 24 13:23:59 2017) by ROOT version5.34/36
   TCanvas *cmp0 = new TCanvas("cmp0", "cmp0",10,181,1024,768);
   cmp0->Range(-12.5,-6.5625,12.5,59.0625);
   cmp0->SetFillColor(0);
   cmp0->SetBorderMode(0);
   cmp0->SetBorderSize(2);
   cmp0->SetFrameBorderMode(0);
   cmp0->SetFrameBorderMode(0);
   
   TH1F *hcmp0 = new TH1F("hcmp0","Radiative correction relative difference",100,-10,10);
   hcmp0->SetBinContent(37,1);
   hcmp0->SetBinContent(38,1);
   hcmp0->SetBinContent(40,1);
   hcmp0->SetBinContent(41,1);
   hcmp0->SetBinContent(42,2);
   hcmp0->SetBinContent(43,1);
   hcmp0->SetBinContent(44,6);
   hcmp0->SetBinContent(45,7);
   hcmp0->SetBinContent(46,17);
   hcmp0->SetBinContent(47,31);
   hcmp0->SetBinContent(48,50);
   hcmp0->SetBinContent(49,48);
   hcmp0->SetBinContent(50,35);
   hcmp0->SetBinContent(51,45);
   hcmp0->SetBinContent(52,28);
   hcmp0->SetBinContent(53,17);
   hcmp0->SetBinContent(54,18);
   hcmp0->SetBinContent(55,10);
   hcmp0->SetBinContent(56,9);
   hcmp0->SetBinContent(57,12);
   hcmp0->SetBinContent(58,4);
   hcmp0->SetBinContent(60,2);
   hcmp0->SetBinContent(61,1);
   hcmp0->SetBinContent(62,1);
   hcmp0->SetBinContent(65,1);
   hcmp0->SetBinContent(69,1);
   hcmp0->SetEntries(350);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hcmp0");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 350    ");
   text = ptstats->AddText("Mean  = -0.05733");
   text = ptstats->AddText("RMS   = 0.7458");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hcmp0->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hcmp0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hcmp0->SetLineColor(ci);
   hcmp0->SetMarkerStyle(8);
   hcmp0->GetXaxis()->SetTitle("(ext - rd)/ext*100 (%)");
   hcmp0->GetXaxis()->SetLabelFont(42);
   hcmp0->GetXaxis()->SetLabelSize(0.035);
   hcmp0->GetXaxis()->SetTitleSize(0.035);
   hcmp0->GetXaxis()->SetTitleFont(42);
   hcmp0->GetYaxis()->SetLabelFont(42);
   hcmp0->GetYaxis()->SetLabelSize(0.035);
   hcmp0->GetYaxis()->SetTitleSize(0.035);
   hcmp0->GetYaxis()->SetTitleFont(42);
   hcmp0->GetZaxis()->SetLabelFont(42);
   hcmp0->GetZaxis()->SetLabelSize(0.035);
   hcmp0->GetZaxis()->SetTitleSize(0.035);
   hcmp0->GetZaxis()->SetTitleFont(42);
   hcmp0->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.94,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Radiative correction relative difference");
   pt->Draw();
   cmp0->Modified();
   cmp0->cd();
   cmp0->SetSelected(cmp0);
}
