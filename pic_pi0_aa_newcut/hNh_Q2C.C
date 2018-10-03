void hNh_Q2C()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:36:16 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(0.4833333,-28271.07,4.616667,254439.6);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hq2l__5 = new TH1D("hq2l__5","Q^{2} solid data",12,1,4.1);
   hq2l__5->SetBinContent(1,214935);
   hq2l__5->SetBinContent(2,206491);
   hq2l__5->SetBinContent(3,151741);
   hq2l__5->SetBinContent(4,106571);
   hq2l__5->SetBinContent(5,71423);
   hq2l__5->SetBinContent(6,46177);
   hq2l__5->SetBinContent(7,30509);
   hq2l__5->SetBinContent(8,18265);
   hq2l__5->SetBinContent(9,9863);
   hq2l__5->SetBinContent(10,4778);
   hq2l__5->SetBinContent(11,1961);
   hq2l__5->SetBinContent(12,245);
   hq2l__5->SetBinError(1,463.6108);
   hq2l__5->SetBinError(2,454.4128);
   hq2l__5->SetBinError(3,389.5395);
   hq2l__5->SetBinError(4,326.4521);
   hq2l__5->SetBinError(5,267.2508);
   hq2l__5->SetBinError(6,214.8883);
   hq2l__5->SetBinError(7,174.6683);
   hq2l__5->SetBinError(8,135.1481);
   hq2l__5->SetBinError(9,99.31264);
   hq2l__5->SetBinError(10,69.12308);
   hq2l__5->SetBinError(11,44.28318);
   hq2l__5->SetBinError(12,15.65248);
   hq2l__5->SetEntries(862959);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hq2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 862959 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.665");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.5235");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hq2l__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hq2l__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hq2l__5->SetLineColor(ci);
   hq2l__5->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hq2l__5->SetMarkerColor(ci);
   hq2l__5->SetMarkerStyle(36);
   hq2l__5->SetMarkerSize(2);
   hq2l__5->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hq2l__5->GetXaxis()->SetLabelFont(22);
   hq2l__5->GetXaxis()->SetLabelSize(0.05);
   hq2l__5->GetXaxis()->SetTitleSize(0.05);
   hq2l__5->GetXaxis()->SetTitleFont(22);
   hq2l__5->GetYaxis()->SetTitle("dN/dQ^{2}");
   hq2l__5->GetYaxis()->SetLabelFont(22);
   hq2l__5->GetYaxis()->SetLabelSize(0.05);
   hq2l__5->GetYaxis()->SetTitleSize(0.05);
   hq2l__5->GetYaxis()->SetTitleFont(22);
   hq2l__5->GetZaxis()->SetLabelFont(22);
   hq2l__5->GetZaxis()->SetLabelSize(0.05);
   hq2l__5->GetZaxis()->SetTitleSize(0.05);
   hq2l__5->GetZaxis()->SetTitleFont(22);
   hq2l__5->Draw("p");
   
   TH1D *hq2s__6 = new TH1D("hq2s__6","Q^{2} solid data",12,1,4.1);
   hq2s__6->SetBinContent(1,141836);
   hq2s__6->SetBinContent(2,139688);
   hq2s__6->SetBinContent(3,102667);
   hq2s__6->SetBinContent(4,72209);
   hq2s__6->SetBinContent(5,49511);
   hq2s__6->SetBinContent(6,31937);
   hq2s__6->SetBinContent(7,21180);
   hq2s__6->SetBinContent(8,12923);
   hq2s__6->SetBinContent(9,6968);
   hq2s__6->SetBinContent(10,3430);
   hq2s__6->SetBinContent(11,1400);
   hq2s__6->SetBinContent(12,223);
   hq2s__6->SetBinError(1,376.6112);
   hq2s__6->SetBinError(2,373.7486);
   hq2s__6->SetBinError(3,320.4169);
   hq2s__6->SetBinError(4,268.7173);
   hq2s__6->SetBinError(5,222.5107);
   hq2s__6->SetBinError(6,178.7093);
   hq2s__6->SetBinError(7,145.5335);
   hq2s__6->SetBinError(8,113.6794);
   hq2s__6->SetBinError(9,83.47455);
   hq2s__6->SetBinError(10,58.5662);
   hq2s__6->SetBinError(11,37.41657);
   hq2s__6->SetBinError(12,14.93318);
   hq2s__6->SetEntries(583972);

   ci = TColor::GetColor("#ff0000");
   hq2s__6->SetLineColor(ci);
   hq2s__6->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hq2s__6->SetMarkerColor(ci);
   hq2s__6->SetMarkerStyle(8);
   hq2s__6->SetMarkerSize(2);
   hq2s__6->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hq2s__6->GetXaxis()->SetLabelFont(22);
   hq2s__6->GetXaxis()->SetLabelSize(0.05);
   hq2s__6->GetXaxis()->SetTitleSize(0.05);
   hq2s__6->GetXaxis()->SetTitleFont(22);
   hq2s__6->GetYaxis()->SetTitle("dN/dQ^{2}");
   hq2s__6->GetYaxis()->SetLabelFont(22);
   hq2s__6->GetYaxis()->SetLabelSize(0.05);
   hq2s__6->GetYaxis()->SetTitleSize(0.05);
   hq2s__6->GetYaxis()->SetTitleFont(22);
   hq2s__6->GetZaxis()->SetLabelFont(22);
   hq2s__6->GetZaxis()->SetLabelSize(0.05);
   hq2s__6->GetZaxis()->SetTitleSize(0.05);
   hq2s__6->GetZaxis()->SetTitleFont(22);
   hq2s__6->Draw("samep");
   
   TPaveText *pt = new TPaveText(0.01,0.9400135,0.2364579,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Q^{2} solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
