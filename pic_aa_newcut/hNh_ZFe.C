void hNh_ZFe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:18:35 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(0.4166667,-15769.84,1.083333,141928.5);
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
   hzl__9->SetBinContent(1,119805);
   hzl__9->SetBinContent(2,70152);
   hzl__9->SetBinContent(3,37160);
   hzl__9->SetBinContent(4,25737);
   hzl__9->SetBinError(1,346.1286);
   hzl__9->SetBinError(2,264.8622);
   hzl__9->SetBinError(3,192.7693);
   hzl__9->SetBinError(4,160.4276);
   hzl__9->SetEntries(252854);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hzl");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 252854 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6359");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1107");
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
   hzs__10->SetBinContent(1,57080);
   hzs__10->SetBinContent(2,32505);
   hzs__10->SetBinContent(3,17182);
   hzs__10->SetBinContent(4,12186);
   hzs__10->SetBinError(1,238.9142);
   hzs__10->SetBinError(2,180.2914);
   hzs__10->SetBinError(3,131.0801);
   hzs__10->SetBinError(4,110.3902);
   hzs__10->SetEntries(118953);

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
