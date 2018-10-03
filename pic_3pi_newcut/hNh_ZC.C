void hNh_ZC()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:57:10 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,1024,768);
   c1->Range(0.4166667,-70.43815,1.083333,633.9433);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hzl__1 = new TH1D("hzl__1","z solid data",6,0.5,1);
   hzl__1->SetBinContent(1,514);
   hzl__1->SetBinContent(2,354);
   hzl__1->SetBinContent(3,162);
   hzl__1->SetBinContent(4,79);
   hzl__1->SetBinContent(5,55);
   hzl__1->SetBinContent(6,16);
   hzl__1->SetBinError(1,22.67157);
   hzl__1->SetBinError(2,18.81489);
   hzl__1->SetBinError(3,12.72792);
   hzl__1->SetBinError(4,8.888194);
   hzl__1->SetBinError(5,7.416198);
   hzl__1->SetBinError(6,4);
   hzl__1->SetEntries(1180);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hzl");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1180   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6246");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1037");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hzl__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hzl__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hzl__1->SetLineColor(ci);
   hzl__1->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hzl__1->SetMarkerColor(ci);
   hzl__1->SetMarkerStyle(36);
   hzl__1->SetMarkerSize(2);
   hzl__1->GetXaxis()->SetTitle("z");
   hzl__1->GetXaxis()->SetLabelFont(22);
   hzl__1->GetXaxis()->SetLabelSize(0.05);
   hzl__1->GetXaxis()->SetTitleSize(0.05);
   hzl__1->GetXaxis()->SetTitleFont(22);
   hzl__1->GetYaxis()->SetTitle("dN/dz");
   hzl__1->GetYaxis()->SetLabelFont(22);
   hzl__1->GetYaxis()->SetLabelSize(0.05);
   hzl__1->GetYaxis()->SetTitleSize(0.05);
   hzl__1->GetYaxis()->SetTitleFont(22);
   hzl__1->GetZaxis()->SetLabelFont(22);
   hzl__1->GetZaxis()->SetLabelSize(0.05);
   hzl__1->GetZaxis()->SetTitleSize(0.05);
   hzl__1->GetZaxis()->SetTitleFont(22);
   hzl__1->Draw("p");
   
   TH1D *hzs__2 = new TH1D("hzs__2","z solid data",6,0.5,1);
   hzs__2->SetBinContent(1,390);
   hzs__2->SetBinContent(2,193);
   hzs__2->SetBinContent(3,90);
   hzs__2->SetBinContent(4,31);
   hzs__2->SetBinContent(5,32);
   hzs__2->SetBinContent(6,9);
   hzs__2->SetBinError(1,19.74842);
   hzs__2->SetBinError(2,13.89244);
   hzs__2->SetBinError(3,9.486833);
   hzs__2->SetBinError(4,5.567764);
   hzs__2->SetBinError(5,5.656854);
   hzs__2->SetBinError(6,3);
   hzs__2->SetEntries(745);

   ci = TColor::GetColor("#ff0000");
   hzs__2->SetLineColor(ci);
   hzs__2->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hzs__2->SetMarkerColor(ci);
   hzs__2->SetMarkerStyle(8);
   hzs__2->SetMarkerSize(2);
   hzs__2->GetXaxis()->SetTitle("z");
   hzs__2->GetXaxis()->SetLabelFont(22);
   hzs__2->GetXaxis()->SetLabelSize(0.05);
   hzs__2->GetXaxis()->SetTitleSize(0.05);
   hzs__2->GetXaxis()->SetTitleFont(22);
   hzs__2->GetYaxis()->SetTitle("dN/dz");
   hzs__2->GetYaxis()->SetLabelFont(22);
   hzs__2->GetYaxis()->SetLabelSize(0.05);
   hzs__2->GetYaxis()->SetTitleSize(0.05);
   hzs__2->GetYaxis()->SetTitleFont(22);
   hzs__2->GetZaxis()->SetLabelFont(22);
   hzs__2->GetZaxis()->SetLabelSize(0.05);
   hzs__2->GetZaxis()->SetTitleSize(0.05);
   hzs__2->GetZaxis()->SetTitleFont(22);
   hzs__2->Draw("samep");
   
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
