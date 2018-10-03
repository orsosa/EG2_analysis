void hNh_NuC()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:39:26 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(1.858333,-0.0003586199,4.591667,0.003227579);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis5[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hnul__7 = new TH1D("hnul__7","#nu solid data",5, xAxis5);
   hnul__7->SetBinContent(1,0.001054045);
   hnul__7->SetBinContent(2,0.002189346);
   hnul__7->SetBinContent(3,0.002715526);
   hnul__7->SetBinContent(4,0.002643658);
   hnul__7->SetBinContent(5,0.001766359);
   hnul__7->SetBinError(1,8.337779e-06);
   hnul__7->SetBinError(2,1.470139e-05);
   hnul__7->SetBinError(3,1.681595e-05);
   hnul__7->SetBinError(4,1.861049e-05);
   hnul__7->SetBinError(5,1.276243e-05);
   hnul__7->SetEntries(99767.34);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hnul");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 99767  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.431");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4522");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hnul__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hnul__7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hnul__7->SetLineColor(ci);
   hnul__7->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hnul__7->SetMarkerColor(ci);
   hnul__7->SetMarkerStyle(36);
   hnul__7->SetMarkerSize(2);
   hnul__7->GetXaxis()->SetTitle("#nu (GeV)");
   hnul__7->GetXaxis()->SetLabelFont(22);
   hnul__7->GetXaxis()->SetLabelSize(0.05);
   hnul__7->GetXaxis()->SetTitleSize(0.05);
   hnul__7->GetXaxis()->SetTitleFont(22);
   hnul__7->GetYaxis()->SetTitle("dN/d#nu");
   hnul__7->GetYaxis()->SetLabelFont(22);
   hnul__7->GetYaxis()->SetLabelSize(0.05);
   hnul__7->GetYaxis()->SetTitleSize(0.05);
   hnul__7->GetYaxis()->SetTitleFont(22);
   hnul__7->GetZaxis()->SetLabelFont(22);
   hnul__7->GetZaxis()->SetLabelSize(0.05);
   hnul__7->GetZaxis()->SetTitleSize(0.05);
   hnul__7->GetZaxis()->SetTitleFont(22);
   hnul__7->Draw("p");
   Double_t xAxis6[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hnus__8 = new TH1D("hnus__8","#nu solid data",5, xAxis6);
   hnus__8->SetBinContent(1,0.0007618821);
   hnus__8->SetBinContent(2,0.00159191);
   hnus__8->SetBinContent(3,0.001974383);
   hnus__8->SetBinContent(4,0.002018659);
   hnus__8->SetBinContent(5,0.001378221);
   hnus__8->SetBinError(1,7.861013e-06);
   hnus__8->SetBinError(2,1.36602e-05);
   hnus__8->SetBinError(3,1.559855e-05);
   hnus__8->SetBinError(4,1.761916e-05);
   hnus__8->SetBinError(5,1.222256e-05);
   hnus__8->SetEntries(62715.9);

   ci = TColor::GetColor("#ff0000");
   hnus__8->SetLineColor(ci);
   hnus__8->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hnus__8->SetMarkerColor(ci);
   hnus__8->SetMarkerStyle(8);
   hnus__8->SetMarkerSize(2);
   hnus__8->GetXaxis()->SetTitle("#nu (GeV)");
   hnus__8->GetXaxis()->SetLabelFont(22);
   hnus__8->GetXaxis()->SetLabelSize(0.05);
   hnus__8->GetXaxis()->SetTitleSize(0.05);
   hnus__8->GetXaxis()->SetTitleFont(22);
   hnus__8->GetYaxis()->SetTitle("dN/d#nu");
   hnus__8->GetYaxis()->SetLabelFont(22);
   hnus__8->GetYaxis()->SetLabelSize(0.05);
   hnus__8->GetYaxis()->SetTitleSize(0.05);
   hnus__8->GetYaxis()->SetTitleFont(22);
   hnus__8->GetZaxis()->SetLabelFont(22);
   hnus__8->GetZaxis()->SetLabelSize(0.05);
   hnus__8->GetZaxis()->SetTitleSize(0.05);
   hnus__8->GetZaxis()->SetTitleFont(22);
   hnus__8->Draw("samep");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2168885,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("#nu solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
