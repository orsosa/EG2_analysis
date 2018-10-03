void hNh_Q2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jun 19 04:59:49 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4833333,-1.179984e-06,4.616667,1.061985e-05);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis8[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hq2s__14 = new TH1D("hq2s__14","Q^{2} solid data",5, xAxis8);
   hq2s__14->SetBinContent(1,4.024249e-06);
   hq2s__14->SetBinContent(2,7.358864e-06);
   hq2s__14->SetBinContent(3,4.974625e-06);
   hq2s__14->SetBinContent(4,5.566218e-06);
   hq2s__14->SetBinContent(5,7.038235e-06);
   hq2s__14->SetBinError(1,4.916616e-07);
   hq2s__14->SetBinError(2,9.580758e-07);
   hq2s__14->SetBinError(3,1.085571e-06);
   hq2s__14->SetBinError(4,1.391579e-06);
   hq2s__14->SetBinError(5,1.952118e-06);
   hq2s__14->SetEntries(103.7441);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hq2s");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 104    ");
   ptstats_LaTex = ptstats->AddText("Mean  =   2.09");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7623");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hq2s__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hq2s__14);
   hq2s__14->SetLineWidth(2);
   hq2s__14->SetMarkerStyle(8);
   hq2s__14->SetMarkerSize(2);
   hq2s__14->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hq2s__14->GetXaxis()->SetLabelFont(22);
   hq2s__14->GetXaxis()->SetLabelSize(0.05);
   hq2s__14->GetXaxis()->SetTitleSize(0.05);
   hq2s__14->GetXaxis()->SetTitleFont(22);
   hq2s__14->GetYaxis()->SetTitle("dN/dQ^{2}");
   hq2s__14->GetYaxis()->SetLabelFont(22);
   hq2s__14->GetYaxis()->SetLabelSize(0.05);
   hq2s__14->GetYaxis()->SetTitleSize(0.05);
   hq2s__14->GetYaxis()->SetTitleFont(22);
   hq2s__14->GetZaxis()->SetLabelFont(22);
   hq2s__14->GetZaxis()->SetLabelSize(0.05);
   hq2s__14->GetZaxis()->SetTitleSize(0.05);
   hq2s__14->GetZaxis()->SetTitleFont(22);
   hq2s__14->Draw("p");
   
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
