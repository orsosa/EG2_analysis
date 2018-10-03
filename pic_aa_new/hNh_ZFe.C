void hNh_ZFe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:08:14 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4166667,-11500.72,1.083333,103506.5);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis9[5] = {0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hzl__9 = new TH1D("hzl__9","z solid data",4, xAxis9);
   hzl__9->SetBinContent(1,87329);
   hzl__9->SetBinContent(2,44796);
   hzl__9->SetBinContent(3,22080);
   hzl__9->SetBinContent(4,15234);
   hzl__9->SetBinError(1,295.5148);
   hzl__9->SetBinError(2,211.6507);
   hzl__9->SetBinError(3,148.5934);
   hzl__9->SetBinError(4,123.4261);
   hzl__9->SetEntries(169439);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hzl");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 169439 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6266");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1082");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hzl__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hzl__9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hzl__9->SetLineColor(ci);
   hzl__9->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hzl__9->SetMarkerColor(ci);
   hzl__9->SetMarkerStyle(36);
   hzl__9->SetMarkerSize(2);
   hzl__9->GetXaxis()->SetTitle("z");
   hzl__9->GetXaxis()->SetLabelFont(22);
   hzl__9->GetXaxis()->SetLabelSize(0.05);
   hzl__9->GetXaxis()->SetTitleSize(0.05);
   hzl__9->GetXaxis()->SetTitleFont(22);
   hzl__9->GetYaxis()->SetTitle("dN/dz");
   hzl__9->GetYaxis()->SetLabelFont(22);
   hzl__9->GetYaxis()->SetLabelSize(0.05);
   hzl__9->GetYaxis()->SetTitleSize(0.05);
   hzl__9->GetYaxis()->SetTitleFont(22);
   hzl__9->GetZaxis()->SetLabelFont(22);
   hzl__9->GetZaxis()->SetLabelSize(0.05);
   hzl__9->GetZaxis()->SetTitleSize(0.05);
   hzl__9->GetZaxis()->SetTitleFont(22);
   hzl__9->Draw("p");
   Double_t xAxis10[5] = {0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hzs__10 = new TH1D("hzs__10","z solid data",4, xAxis10);
   hzs__10->SetBinContent(1,41354);
   hzs__10->SetBinContent(2,21089);
   hzs__10->SetBinContent(3,10410);
   hzs__10->SetBinContent(4,7301);
   hzs__10->SetBinError(1,203.3568);
   hzs__10->SetBinError(2,145.2205);
   hzs__10->SetBinError(3,102.0294);
   hzs__10->SetBinError(4,85.44589);
   hzs__10->SetEntries(80154);

   ci = TColor::GetColor("#0000ff");
   hzs__10->SetLineColor(ci);
   hzs__10->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hzs__10->SetMarkerColor(ci);
   hzs__10->SetMarkerStyle(8);
   hzs__10->SetMarkerSize(2);
   hzs__10->GetXaxis()->SetTitle("z");
   hzs__10->GetXaxis()->SetLabelFont(22);
   hzs__10->GetXaxis()->SetLabelSize(0.05);
   hzs__10->GetXaxis()->SetTitleSize(0.05);
   hzs__10->GetXaxis()->SetTitleFont(22);
   hzs__10->GetYaxis()->SetTitle("dN/dz");
   hzs__10->GetYaxis()->SetLabelFont(22);
   hzs__10->GetYaxis()->SetLabelSize(0.05);
   hzs__10->GetYaxis()->SetTitleSize(0.05);
   hzs__10->GetYaxis()->SetTitleFont(22);
   hzs__10->GetZaxis()->SetLabelFont(22);
   hzs__10->GetZaxis()->SetLabelSize(0.05);
   hzs__10->GetZaxis()->SetTitleSize(0.05);
   hzs__10->GetZaxis()->SetTitleFont(22);
   hzs__10->Draw("samep");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2162745,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("z solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
