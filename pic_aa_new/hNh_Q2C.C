void hNh_Q2C()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:06:51 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4833333,-0.0003888051,4.616667,0.003499246);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis5[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hq2l__5 = new TH1D("hq2l__5","Q^{2} solid data",5, xAxis5);
   hq2l__5->SetBinContent(1,0.001300404);
   hq2l__5->SetBinContent(2,0.002253997);
   hq2l__5->SetBinContent(3,0.002661996);
   hq2l__5->SetBinContent(4,0.002937768);
   hq2l__5->SetBinContent(5,0.002599036);
   hq2l__5->SetBinError(1,7.061505e-06);
   hq2l__5->SetBinError(2,1.337905e-05);
   hq2l__5->SetBinError(3,1.965824e-05);
   hq2l__5->SetBinError(4,2.455703e-05);
   hq2l__5->SetBinError(5,2.820087e-05);
   hq2l__5->SetEntries(68600.78);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hq2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68601  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.122");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.712");
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
   Double_t xAxis6[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hq2s__6 = new TH1D("hq2s__6","Q^{2} solid data",5, xAxis6);
   hq2s__6->SetBinContent(1,0.0009619694);
   hq2s__6->SetBinContent(2,0.001647279);
   hq2s__6->SetBinContent(3,0.002028048);
   hq2s__6->SetBinContent(4,0.00220328);
   hq2s__6->SetBinContent(5,0.002020772);
   hq2s__6->SetBinError(1,6.662429e-06);
   hq2s__6->SetBinError(2,1.242758e-05);
   hq2s__6->SetBinError(3,1.86963e-05);
   hq2s__6->SetBinError(4,2.312181e-05);
   hq2s__6->SetBinError(5,2.727066e-05);
   hq2s__6->SetEntries(42986.75);

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
   
   TPaveText *pt = new TPaveText(0.01,0.9398649,0.2368627,0.995,"blNDC");
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
