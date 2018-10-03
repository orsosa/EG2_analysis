void hNh_Pt2Pb()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:10:09 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4166667,-55.25953,1.083333,497.3358);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis19[6] = {0, 0.18, 0.36, 0.54, 1.5, 4.591495e-41}; 
   
   TH1D *hpt2l__19 = new TH1D("hpt2l__19","Pt^{2} solid data",5, xAxis19);
   hpt2l__19->SetBinContent(6,819);
   hpt2l__19->SetBinError(6,28.61818);
   hpt2l__19->SetEntries(819);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 819    ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hpt2l__19->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hpt2l__19);
   hpt2l__19->SetLineWidth(2);
   hpt2l__19->SetMarkerStyle(36);
   hpt2l__19->SetMarkerSize(2);
   hpt2l__19->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2l__19->GetXaxis()->SetLabelFont(22);
   hpt2l__19->GetXaxis()->SetLabelSize(0.05);
   hpt2l__19->GetXaxis()->SetTitleSize(0.05);
   hpt2l__19->GetXaxis()->SetTitleFont(22);
   hpt2l__19->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2l__19->GetYaxis()->SetLabelFont(22);
   hpt2l__19->GetYaxis()->SetLabelSize(0.05);
   hpt2l__19->GetYaxis()->SetTitleSize(0.05);
   hpt2l__19->GetYaxis()->SetTitleFont(22);
   hpt2l__19->GetZaxis()->SetLabelFont(22);
   hpt2l__19->GetZaxis()->SetLabelSize(0.05);
   hpt2l__19->GetZaxis()->SetTitleSize(0.05);
   hpt2l__19->GetZaxis()->SetTitleFont(22);
   hpt2l__19->Draw("p");
   Double_t xAxis20[6] = {0, 0.18, 0.36, 0.54, 1.5, 4.591495e-41}; 
   
   TH1D *hpt2s__20 = new TH1D("hpt2s__20","Pt^{2} solid data",5, xAxis20);
   hpt2s__20->SetBinContent(6,153);
   hpt2s__20->SetBinError(6,12.36932);
   hpt2s__20->SetEntries(153);
   hpt2s__20->SetLineWidth(2);
   hpt2s__20->SetMarkerStyle(8);
   hpt2s__20->SetMarkerSize(2);
   hpt2s__20->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2s__20->GetXaxis()->SetLabelFont(22);
   hpt2s__20->GetXaxis()->SetLabelSize(0.05);
   hpt2s__20->GetXaxis()->SetTitleSize(0.05);
   hpt2s__20->GetXaxis()->SetTitleFont(22);
   hpt2s__20->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2s__20->GetYaxis()->SetLabelFont(22);
   hpt2s__20->GetYaxis()->SetLabelSize(0.05);
   hpt2s__20->GetYaxis()->SetTitleSize(0.05);
   hpt2s__20->GetYaxis()->SetTitleFont(22);
   hpt2s__20->GetZaxis()->SetLabelFont(22);
   hpt2s__20->GetZaxis()->SetLabelSize(0.05);
   hpt2s__20->GetZaxis()->SetTitleSize(0.05);
   hpt2s__20->GetZaxis()->SetTitleFont(22);
   hpt2s__20->Draw("samep");
   
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
