{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 27 01:53:22 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.9858439,-1.117922,0.9858439,1.117922);
   TView *view = TView::CreateView(1);
   view->SetRange(1,0.4,0,4.1,1,1.475258);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   Double_t xAxis1[2] = {1, 4.1}; 
   Double_t yAxis1[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH2F *hMRatio = new TH2F("hMRatio","Multiplicity ratio",1, xAxis1,6, yAxis1);
   hMRatio->SetBinContent(4,1.512488e-06);
   hMRatio->SetBinContent(7,1.338103);
   hMRatio->SetBinContent(10,1.288727);
   hMRatio->SetBinContent(13,1.337976);
   hMRatio->SetBinContent(16,1.236704);
   hMRatio->SetBinContent(19,1.116628);
   hMRatio->SetBinError(4,5.137736e-05);
   hMRatio->SetBinError(7,0.084717);
   hMRatio->SetBinError(10,0.07739574);
   hMRatio->SetBinError(13,0.08242465);
   hMRatio->SetBinError(16,0.08769193);
   hMRatio->SetBinError(19,0.1012498);
   hMRatio->SetEntries(6);
   hMRatio->SetContour(20);
   hMRatio->SetContourLevel(0,1.512488e-06);
   hMRatio->SetContourLevel(1,0.06690657);
   hMRatio->SetContourLevel(2,0.1338116);
   hMRatio->SetContourLevel(3,0.2007167);
   hMRatio->SetContourLevel(4,0.2676217);
   hMRatio->SetContourLevel(5,0.3345268);
   hMRatio->SetContourLevel(6,0.4014318);
   hMRatio->SetContourLevel(7,0.4683369);
   hMRatio->SetContourLevel(8,0.5352419);
   hMRatio->SetContourLevel(9,0.602147);
   hMRatio->SetContourLevel(10,0.669052);
   hMRatio->SetContourLevel(11,0.7359571);
   hMRatio->SetContourLevel(12,0.8028622);
   hMRatio->SetContourLevel(13,0.8697672);
   hMRatio->SetContourLevel(14,0.9366723);
   hMRatio->SetContourLevel(15,1.003577);
   hMRatio->SetContourLevel(16,1.070482);
   hMRatio->SetContourLevel(17,1.137387);
   hMRatio->SetContourLevel(18,1.204292);
   hMRatio->SetContourLevel(19,1.271198);
   
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
   text = ptstats->AddText("Mean y = 0.7422");
   text = ptstats->AddText("RMS x = 2.98e-08");
   text = ptstats->AddText("RMS y = 0.1396");
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
