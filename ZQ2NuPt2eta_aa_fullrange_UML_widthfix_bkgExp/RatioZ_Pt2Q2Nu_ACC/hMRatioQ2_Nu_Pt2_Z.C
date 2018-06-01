{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 16 04:37:20 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(1,0.4,0.7623143,4.1,1,0.9957165);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {1, 4.1}; 
   Double_t yAxis1[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",1, xAxis1,6, yAxis1);
   hMRatio->SetBinContent(4,0.8425295);
   hMRatio->SetBinContent(7,0.8320114);
   hMRatio->SetBinContent(10,0.974521);
   hMRatio->SetBinContent(13,0.9278198);
   hMRatio->SetBinContent(16,0.7728994);
   hMRatio->SetBinContent(19,0.7861826);
   hMRatio->SetBinError(4,0.051989);
   hMRatio->SetBinError(7,0.05999396);
   hMRatio->SetBinError(10,0.06594122);
   hMRatio->SetBinError(13,0.06232429);
   hMRatio->SetBinError(16,0.0589349);
   hMRatio->SetBinError(19,0.07589795);
   hMRatio->SetEntries(6);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,0.7728994);
   hMRatio->SetContourLevel(1,0.7829805);
   hMRatio->SetContourLevel(2,0.7930615);
   hMRatio->SetContourLevel(3,0.8031426);
   hMRatio->SetContourLevel(4,0.8132237);
   hMRatio->SetContourLevel(5,0.8233048);
   hMRatio->SetContourLevel(6,0.8333859);
   hMRatio->SetContourLevel(7,0.8434669);
   hMRatio->SetContourLevel(8,0.853548);
   hMRatio->SetContourLevel(9,0.8636291);
   hMRatio->SetContourLevel(10,0.8737102);
   hMRatio->SetContourLevel(11,0.8837913);
   hMRatio->SetContourLevel(12,0.8938723);
   hMRatio->SetContourLevel(13,0.9039534);
   hMRatio->SetContourLevel(14,0.9140345);
   hMRatio->SetContourLevel(15,0.9241156);
   hMRatio->SetContourLevel(16,0.9341967);
   hMRatio->SetContourLevel(17,0.9442777);
   hMRatio->SetContourLevel(18,0.9543588);
   hMRatio->SetContourLevel(19,0.9644399);
   
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
   text = ptstats->AddText("Mean y = 0.6951");
   text = ptstats->AddText("RMS x =      0");
   text = ptstats->AddText("RMS y = 0.1666");
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
