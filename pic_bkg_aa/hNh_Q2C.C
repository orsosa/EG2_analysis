void hNh_Q2C()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 19:54:19 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4833333,-0.0006574943,4.616667,0.005917448);
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
   hq2l__5->SetBinContent(1,0.002180439);
   hq2l__5->SetBinContent(2,0.003788496);
   hq2l__5->SetBinContent(3,0.004582664);
   hq2l__5->SetBinContent(4,0.004977276);
   hq2l__5->SetBinContent(5,0.004400193);
   hq2l__5->SetBinError(1,9.248864e-06);
   hq2l__5->SetBinError(2,1.74902e-05);
   hq2l__5->SetBinError(3,2.59995e-05);
   hq2l__5->SetBinError(4,3.220409e-05);
   hq2l__5->SetBinError(5,3.70907e-05);
   hq2l__5->SetEntries(114120.6);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hq2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 114121 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  2.123");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7107");
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
   hq2s__6->SetBinContent(1,0.001682042);
   hq2s__6->SetBinContent(2,0.002911984);
   hq2s__6->SetBinContent(3,0.003458128);
   hq2s__6->SetBinContent(4,0.003869808);
   hq2s__6->SetBinContent(5,0.003539945);
   hq2s__6->SetBinError(1,8.894435e-06);
   hq2s__6->SetBinError(2,1.664413e-05);
   hq2s__6->SetBinError(3,2.456615e-05);
   hq2s__6->SetBinError(4,3.08428e-05);
   hq2s__6->SetBinError(5,3.641368e-05);
   hq2s__6->SetEntries(73858.59);

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
