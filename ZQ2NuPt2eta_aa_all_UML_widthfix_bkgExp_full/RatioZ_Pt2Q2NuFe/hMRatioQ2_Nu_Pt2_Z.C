{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 16 01:10:13 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(1,0.4,0.5188487,4.1,1,0.6648459);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {1, 4.1}; 
   Double_t yAxis1[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",1, xAxis1,6, yAxis1);
   hMRatio->SetBinContent(4,0.6515877);
   hMRatio->SetBinContent(7,0.5967366);
   hMRatio->SetBinContent(10,0.58006);
   hMRatio->SetBinContent(13,0.5254698);
   hMRatio->SetBinContent(16,0.5478075);
   hMRatio->SetBinContent(19,0.607779);
   hMRatio->SetBinError(4,0.00882359);
   hMRatio->SetBinError(7,0.01110581);
   hMRatio->SetBinError(10,0.01343233);
   hMRatio->SetBinError(13,0.01327507);
   hMRatio->SetBinError(16,0.01451002);
   hMRatio->SetBinError(19,0.02098323);
   hMRatio->SetEntries(6);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,0.5254698);
   hMRatio->SetContourLevel(1,0.5317757);
   hMRatio->SetContourLevel(2,0.5380816);
   hMRatio->SetContourLevel(3,0.5443875);
   hMRatio->SetContourLevel(4,0.5506934);
   hMRatio->SetContourLevel(5,0.5569993);
   hMRatio->SetContourLevel(6,0.5633052);
   hMRatio->SetContourLevel(7,0.5696111);
   hMRatio->SetContourLevel(8,0.575917);
   hMRatio->SetContourLevel(9,0.5822229);
   hMRatio->SetContourLevel(10,0.5885288);
   hMRatio->SetContourLevel(11,0.5948347);
   hMRatio->SetContourLevel(12,0.6011406);
   hMRatio->SetContourLevel(13,0.6074465);
   hMRatio->SetContourLevel(14,0.6137524);
   hMRatio->SetContourLevel(15,0.6200583);
   hMRatio->SetContourLevel(16,0.6263641);
   hMRatio->SetContourLevel(17,0.63267);
   hMRatio->SetContourLevel(18,0.6389759);
   hMRatio->SetContourLevel(19,0.6452818);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.695,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMRatio");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 6      ");
   text = ptstats->AddText("Mean x =   2.55");
   text = ptstats->AddText("Mean y =  0.694");
   text = ptstats->AddText("RMS x = 2.98e-08");
   text = ptstats->AddText("RMS y = 0.1747");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hMRatio->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hMRatio);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hMRatio->SetLineColor(ci);
   hMRatio->GetXaxis()->SetLabelFont(42);
   hMRatio->GetXaxis()->SetLabelSize(0.035);
   hMRatio->GetXaxis()->SetTitleSize(0.035);
   hMRatio->GetXaxis()->SetTitleFont(42);
   hMRatio->GetYaxis()->SetLabelFont(42);
   hMRatio->GetYaxis()->SetLabelSize(0.035);
   hMRatio->GetYaxis()->SetTitleSize(0.035);
   hMRatio->GetYaxis()->SetTitleFont(42);
   hMRatio->GetZaxis()->SetLabelFont(42);
   hMRatio->GetZaxis()->SetLabelSize(0.035);
   hMRatio->GetZaxis()->SetTitleSize(0.035);
   hMRatio->GetZaxis()->SetTitleFont(42);
   hMRatio->Draw("lego2");
   
   TPaveText *pt = new TPaveText(0.3461873,0.9358257,0.6538127,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Multiplicity ratio");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
