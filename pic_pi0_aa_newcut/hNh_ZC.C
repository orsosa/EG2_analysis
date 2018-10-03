void hNh_ZC()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:36:16 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,768);
   c1->Range(0.1833333,-38260.09,1.116667,344340.8);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hzl__1 = new TH1D("hzl__1","z solid data",12,0.3,1);
   hzl__1->SetBinContent(1,290966);
   hzl__1->SetBinContent(2,195300);
   hzl__1->SetBinContent(3,126939);
   hzl__1->SetBinContent(4,83373);
   hzl__1->SetBinContent(5,54786);
   hzl__1->SetBinContent(6,35924);
   hzl__1->SetBinContent(7,24592);
   hzl__1->SetBinContent(8,17261);
   hzl__1->SetBinContent(9,12404);
   hzl__1->SetBinContent(10,9112);
   hzl__1->SetBinContent(11,7063);
   hzl__1->SetBinContent(12,5239);
   hzl__1->SetBinError(1,539.4126);
   hzl__1->SetBinError(2,441.9276);
   hzl__1->SetBinError(3,356.285);
   hzl__1->SetBinError(4,288.7438);
   hzl__1->SetBinError(5,234.0641);
   hzl__1->SetBinError(6,189.5363);
   hzl__1->SetBinError(7,156.8184);
   hzl__1->SetBinError(8,131.3811);
   hzl__1->SetBinError(9,111.3732);
   hzl__1->SetBinError(10,95.4568);
   hzl__1->SetBinError(11,84.04166);
   hzl__1->SetBinError(12,72.38094);
   hzl__1->SetEntries(862959);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hzl");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 862959 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4405");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1354");
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
   
   TH1D *hzs__2 = new TH1D("hzs__2","z solid data",12,0.3,1);
   hzs__2->SetBinContent(1,197748);
   hzs__2->SetBinContent(2,131562);
   hzs__2->SetBinContent(3,85740);
   hzs__2->SetBinContent(4,55836);
   hzs__2->SetBinContent(5,37007);
   hzs__2->SetBinContent(6,24550);
   hzs__2->SetBinContent(7,17043);
   hzs__2->SetBinContent(8,12055);
   hzs__2->SetBinContent(9,8404);
   hzs__2->SetBinContent(10,6112);
   hzs__2->SetBinContent(11,4529);
   hzs__2->SetBinContent(12,3386);
   hzs__2->SetBinError(1,444.6887);
   hzs__2->SetBinError(2,362.7148);
   hzs__2->SetBinError(3,292.8139);
   hzs__2->SetBinError(4,236.2964);
   hzs__2->SetBinError(5,192.372);
   hzs__2->SetBinError(6,156.6844);
   hzs__2->SetBinError(7,130.5488);
   hzs__2->SetBinError(8,109.7953);
   hzs__2->SetBinError(9,91.67333);
   hzs__2->SetBinError(10,78.17928);
   hzs__2->SetBinError(11,67.29785);
   hzs__2->SetBinError(12,58.18935);
   hzs__2->SetEntries(583972);

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
