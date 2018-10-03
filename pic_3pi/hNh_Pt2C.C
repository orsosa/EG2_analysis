void hNh_Pt2C()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:36:00 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-23.61488,1.75,212.5339);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hpt2l__3 = new TH1D("hpt2l__3","Pt^{2} solid data",5, xAxis1);
   hpt2l__3->SetBinContent(1,143);
   hpt2l__3->SetBinContent(2,167);
   hpt2l__3->SetBinContent(3,92);
   hpt2l__3->SetBinContent(4,36);
   hpt2l__3->SetBinContent(5,27);
   hpt2l__3->SetBinError(1,11.95826);
   hpt2l__3->SetBinError(2,12.92285);
   hpt2l__3->SetBinError(3,9.591663);
   hpt2l__3->SetBinError(4,6);
   hpt2l__3->SetBinError(5,5.196152);
   hpt2l__3->SetEntries(465);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 465    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3181");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2254");
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
   Double_t xAxis2[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hpt2s__4 = new TH1D("hpt2s__4","Pt^{2} solid data",5, xAxis2);
   hpt2s__4->SetBinContent(1,74);
   hpt2s__4->SetBinContent(2,100);
   hpt2s__4->SetBinContent(3,82);
   hpt2s__4->SetBinContent(4,46);
   hpt2s__4->SetBinContent(5,29);
   hpt2s__4->SetBinError(1,8.602325);
   hpt2s__4->SetBinError(2,10);
   hpt2s__4->SetBinError(3,9.055385);
   hpt2s__4->SetBinError(4,6.78233);
   hpt2s__4->SetBinError(5,5.385165);
   hpt2s__4->SetEntries(331);

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
