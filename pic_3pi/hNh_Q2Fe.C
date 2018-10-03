void hNh_Q2Fe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:38:56 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4833333,-2.205924e-06,4.616667,1.985332e-05);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis9[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hq2l__13 = new TH1D("hq2l__13","Q^{2} solid data",5, xAxis9);
   hq2l__13->SetBinContent(1,5.182848e-06);
   hq2l__13->SetBinContent(2,9.924166e-06);
   hq2l__13->SetBinContent(3,1.175227e-05);
   hq2l__13->SetBinContent(4,1.549717e-05);
   hq2l__13->SetBinContent(5,1.270641e-05);
   hq2l__13->SetBinError(1,3.265255e-07);
   hq2l__13->SetBinError(2,6.502106e-07);
   hq2l__13->SetBinError(3,9.564623e-07);
   hq2l__13->SetBinError(4,1.30987e-06);
   hq2l__13->SetBinError(5,1.438893e-06);
   hq2l__13->SetEntries(579.6743);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hq2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 580    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.164");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7059");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hq2l__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hq2l__13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hq2l__13->SetLineColor(ci);
   hq2l__13->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hq2l__13->SetMarkerColor(ci);
   hq2l__13->SetMarkerStyle(36);
   hq2l__13->SetMarkerSize(2);
   hq2l__13->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hq2l__13->GetXaxis()->SetLabelFont(22);
   hq2l__13->GetXaxis()->SetLabelSize(0.05);
   hq2l__13->GetXaxis()->SetTitleSize(0.05);
   hq2l__13->GetXaxis()->SetTitleFont(22);
   hq2l__13->GetYaxis()->SetTitle("dN/dQ^{2}");
   hq2l__13->GetYaxis()->SetLabelFont(22);
   hq2l__13->GetYaxis()->SetLabelSize(0.05);
   hq2l__13->GetYaxis()->SetTitleSize(0.05);
   hq2l__13->GetYaxis()->SetTitleFont(22);
   hq2l__13->GetZaxis()->SetLabelFont(22);
   hq2l__13->GetZaxis()->SetLabelSize(0.05);
   hq2l__13->GetZaxis()->SetTitleSize(0.05);
   hq2l__13->GetZaxis()->SetTitleFont(22);
   hq2l__13->Draw("p");
   Double_t xAxis10[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hq2s__14 = new TH1D("hq2s__14","Q^{2} solid data",5, xAxis10);
   hq2s__14->SetBinContent(1,2.660445e-06);
   hq2s__14->SetBinContent(2,4.397578e-06);
   hq2s__14->SetBinContent(3,7.483229e-06);
   hq2s__14->SetBinContent(4,6.788138e-06);
   hq2s__14->SetBinContent(5,6.422275e-06);
   hq2s__14->SetBinError(1,2.449291e-07);
   hq2s__14->SetBinError(2,4.512017e-07);
   hq2s__14->SetBinError(3,8.023314e-07);
   hq2s__14->SetBinError(4,9.153536e-07);
   hq2s__14->SetBinError(5,1.101483e-06);
   hq2s__14->SetEntries(260.3242);

   ci = TColor::GetColor("#0000ff");
   hq2s__14->SetLineColor(ci);
   hq2s__14->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hq2s__14->SetMarkerColor(ci);
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
   hq2s__14->Draw("samep");
   
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
