void pi0_mother_hist()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul 25 15:36:57 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",158,64,1024,704);
   c1->Range(-1166.667,-281.7938,4166.667,2536.144);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h__4 = new TH1F("h__4","#pi^{0} mother pid",4000,-500,3500);
   h__4->SetBinContent(178,4);
   h__4->SetBinContent(188,6);
   h__4->SetBinContent(288,1852);
   h__4->SetBinContent(592,1589);
   h__4->SetBinContent(593,609);
   h__4->SetBinContent(614,3);
   h__4->SetBinContent(714,2147);
   h__4->SetBinContent(722,1443);
   h__4->SetBinContent(724,1845);
   h__4->SetBinContent(811,194);
   h__4->SetBinContent(814,66);
   h__4->SetBinContent(824,125);
   h__4->SetBinContent(832,129);
   h__4->SetBinContent(2615,1439);
   h__4->SetBinContent(2715,1303);
   h__4->SetBinContent(3615,2);
   h__4->SetBinContent(3623,296);
   h__4->SetBinContent(3715,92);
   h__4->SetBinContent(3723,31);
   h__4->SetBinContent(3725,2);
   h__4->SetEntries(13177);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("h");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13177  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  638.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  956.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h__4);
   h__4->SetLineWidth(2);
   h__4->GetXaxis()->SetTitle("pdg code");
   h__4->GetXaxis()->SetLabelFont(22);
   h__4->GetXaxis()->SetLabelSize(0.05);
   h__4->GetXaxis()->SetTitleSize(0.05);
   h__4->GetXaxis()->SetTitleFont(22);
   h__4->GetYaxis()->SetLabelFont(22);
   h__4->GetYaxis()->SetLabelSize(0.05);
   h__4->GetYaxis()->SetTitleSize(0.05);
   h__4->GetYaxis()->SetTitleFont(22);
   h__4->GetZaxis()->SetLabelFont(22);
   h__4->GetZaxis()->SetLabelSize(0.05);
   h__4->GetZaxis()->SetTitleSize(0.05);
   h__4->GetZaxis()->SetTitleFont(22);
   h__4->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.9399704,0.2266732,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("#pi^{0} mother pid");
   pt->Draw();
   TLatex *   tex = new TLatex(409.328,1782.96,"2198/13177 (17%) from cluster or string");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
