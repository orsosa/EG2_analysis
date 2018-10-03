void hNh_Pt2C()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:08:52 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-20635.52,1.75,185719.7);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis3[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hpt2l__3 = new TH1D("hpt2l__3","Pt^{2} solid data",6, xAxis3);
   hpt2l__3->SetBinContent(1,134808);
   hpt2l__3->SetBinContent(2,156827);
   hpt2l__3->SetBinContent(3,89328);
   hpt2l__3->SetBinContent(4,42788);
   hpt2l__3->SetBinContent(5,23419);
   hpt2l__3->SetBinContent(6,13340);
   hpt2l__3->SetBinError(1,367.1621);
   hpt2l__3->SetBinError(2,396.0139);
   hpt2l__3->SetBinError(3,298.8779);
   hpt2l__3->SetBinError(4,206.8526);
   hpt2l__3->SetBinError(5,153.0327);
   hpt2l__3->SetBinError(6,115.4989);
   hpt2l__3->SetEntries(460510);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 460510 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2361");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2065");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hpt2l__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hpt2l__3);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hpt2l__3->SetLineColor(ci);
   hpt2l__3->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hpt2l__3->SetMarkerColor(ci);
   hpt2l__3->SetMarkerStyle(36);
   hpt2l__3->SetMarkerSize(2);
   hpt2l__3->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2l__3->GetXaxis()->SetLabelFont(22);
   hpt2l__3->GetXaxis()->SetLabelSize(0.05);
   hpt2l__3->GetXaxis()->SetTitleSize(0.05);
   hpt2l__3->GetXaxis()->SetTitleFont(22);
   hpt2l__3->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2l__3->GetYaxis()->SetLabelFont(22);
   hpt2l__3->GetYaxis()->SetLabelSize(0.05);
   hpt2l__3->GetYaxis()->SetTitleSize(0.05);
   hpt2l__3->GetYaxis()->SetTitleFont(22);
   hpt2l__3->GetZaxis()->SetLabelFont(22);
   hpt2l__3->GetZaxis()->SetLabelSize(0.05);
   hpt2l__3->GetZaxis()->SetTitleSize(0.05);
   hpt2l__3->GetZaxis()->SetTitleFont(22);
   hpt2l__3->Draw("p");
   Double_t xAxis4[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hpt2s__4 = new TH1D("hpt2s__4","Pt^{2} solid data",6, xAxis4);
   hpt2s__4->SetBinContent(1,89500);
   hpt2s__4->SetBinContent(2,107786);
   hpt2s__4->SetBinContent(3,63223);
   hpt2s__4->SetBinContent(4,31485);
   hpt2s__4->SetBinContent(5,17971);
   hpt2s__4->SetBinContent(6,12119);
   hpt2s__4->SetBinError(1,299.1655);
   hpt2s__4->SetBinError(2,328.3078);
   hpt2s__4->SetBinError(3,251.4418);
   hpt2s__4->SetBinError(4,177.4401);
   hpt2s__4->SetBinError(5,134.056);
   hpt2s__4->SetBinError(6,110.0863);
   hpt2s__4->SetEntries(322084);

   ci = TColor::GetColor("#ff0000");
   hpt2s__4->SetLineColor(ci);
   hpt2s__4->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hpt2s__4->SetMarkerColor(ci);
   hpt2s__4->SetMarkerStyle(8);
   hpt2s__4->SetMarkerSize(2);
   hpt2s__4->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2s__4->GetXaxis()->SetLabelFont(22);
   hpt2s__4->GetXaxis()->SetLabelSize(0.05);
   hpt2s__4->GetXaxis()->SetTitleSize(0.05);
   hpt2s__4->GetXaxis()->SetTitleFont(22);
   hpt2s__4->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2s__4->GetYaxis()->SetLabelFont(22);
   hpt2s__4->GetYaxis()->SetLabelSize(0.05);
   hpt2s__4->GetYaxis()->SetTitleSize(0.05);
   hpt2s__4->GetYaxis()->SetTitleFont(22);
   hpt2s__4->GetZaxis()->SetLabelFont(22);
   hpt2s__4->GetZaxis()->SetLabelSize(0.05);
   hpt2s__4->GetZaxis()->SetTitleSize(0.05);
   hpt2s__4->GetZaxis()->SetTitleFont(22);
   hpt2s__4->Draw("samep");
   
   TPaveText *pt = new TPaveText(0.01,0.9414865,0.2456863,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Pt^{2} solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
