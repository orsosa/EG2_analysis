void hNh_Pt2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jun 19 04:59:49 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-9.031346,1.75,81.28211);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis7[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hpt2s__13 = new TH1D("hpt2s__13","Pt^{2} solid data",5, xAxis7);
   hpt2s__13->SetBinContent(1,42);
   hpt2s__13->SetBinContent(2,61);
   hpt2s__13->SetBinContent(3,40);
   hpt2s__13->SetBinContent(4,20);
   hpt2s__13->SetBinContent(5,13);
   hpt2s__13->SetBinError(1,6.480741);
   hpt2s__13->SetBinError(2,7.81025);
   hpt2s__13->SetBinError(3,6.324555);
   hpt2s__13->SetBinError(4,4.472136);
   hpt2s__13->SetBinError(5,3.605551);
   hpt2s__13->SetEntries(176);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2s");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 176    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3524");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2364");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hpt2s__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hpt2s__13);
   hpt2s__13->SetLineWidth(2);
   hpt2s__13->SetMarkerStyle(8);
   hpt2s__13->SetMarkerSize(2);
   hpt2s__13->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2s__13->GetXaxis()->SetLabelFont(22);
   hpt2s__13->GetXaxis()->SetLabelSize(0.05);
   hpt2s__13->GetXaxis()->SetTitleSize(0.05);
   hpt2s__13->GetXaxis()->SetTitleFont(22);
   hpt2s__13->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2s__13->GetYaxis()->SetLabelFont(22);
   hpt2s__13->GetYaxis()->SetLabelSize(0.05);
   hpt2s__13->GetYaxis()->SetTitleSize(0.05);
   hpt2s__13->GetYaxis()->SetTitleFont(22);
   hpt2s__13->GetZaxis()->SetLabelFont(22);
   hpt2s__13->GetZaxis()->SetLabelSize(0.05);
   hpt2s__13->GetZaxis()->SetTitleSize(0.05);
   hpt2s__13->GetZaxis()->SetTitleFont(22);
   hpt2s__13->Draw("p");
   
   TPaveText *pt = new TPaveText(0.01,0.9414865,0.2456863,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Pt^{2} solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
