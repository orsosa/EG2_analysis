void hNh_ZFe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:37:40 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(0.1833333,-64272.64,1.116667,578453.7);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hzl__9 = new TH1D("hzl__9","z solid data",12,0.3,1);
   hzl__9->SetBinContent(1,488997);
   hzl__9->SetBinContent(2,323500);
   hzl__9->SetBinContent(3,207543);
   hzl__9->SetBinContent(4,134233);
   hzl__9->SetBinContent(5,87011);
   hzl__9->SetBinContent(6,57747);
   hzl__9->SetBinContent(7,38943);
   hzl__9->SetBinContent(8,27525);
   hzl__9->SetBinContent(9,20255);
   hzl__9->SetBinContent(10,15312);
   hzl__9->SetBinContent(11,11360);
   hzl__9->SetBinContent(12,8166);
   hzl__9->SetBinError(1,699.2832);
   hzl__9->SetBinError(2,568.7706);
   hzl__9->SetBinError(3,455.5689);
   hzl__9->SetBinError(4,366.3782);
   hzl__9->SetBinError(5,294.9763);
   hzl__9->SetBinError(6,240.3061);
   hzl__9->SetBinError(7,197.3398);
   hzl__9->SetBinError(8,165.9066);
   hzl__9->SetBinError(9,142.3201);
   hzl__9->SetBinError(10,123.7417);
   hzl__9->SetBinError(11,106.5833);
   hzl__9->SetBinError(12,90.36592);
   hzl__9->SetEntries(1420592);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hzl");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1420592");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4384");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1347");
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
   
   TH1D *hzs__10 = new TH1D("hzs__10","z solid data",12,0.3,1);
   hzs__10->SetBinContent(1,267527);
   hzs__10->SetBinContent(2,173344);
   hzs__10->SetBinContent(3,110627);
   hzs__10->SetBinContent(4,71347);
   hzs__10->SetBinContent(5,46618);
   hzs__10->SetBinContent(6,31242);
   hzs__10->SetBinContent(7,21138);
   hzs__10->SetBinContent(8,14598);
   hzs__10->SetBinContent(9,10560);
   hzs__10->SetBinContent(10,7583);
   hzs__10->SetBinContent(11,5485);
   hzs__10->SetBinContent(12,3768);
   hzs__10->SetBinError(1,517.2301);
   hzs__10->SetBinError(2,416.346);
   hzs__10->SetBinError(3,332.6064);
   hzs__10->SetBinError(4,267.1086);
   hzs__10->SetBinError(5,215.912);
   hzs__10->SetBinError(6,176.7541);
   hzs__10->SetBinError(7,145.3891);
   hzs__10->SetBinError(8,120.8222);
   hzs__10->SetBinError(9,102.7619);
   hzs__10->SetBinError(10,87.08042);
   hzs__10->SetBinError(11,74.06079);
   hzs__10->SetBinError(12,61.38404);
   hzs__10->SetEntries(763837);

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
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.21591,0.995,"blNDC");
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
