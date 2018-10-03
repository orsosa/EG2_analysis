void hNh_NuC()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 19:54:19 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(1.858333,-0.0006036782,4.591667,0.005433104);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis7[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hnul__7 = new TH1D("hnul__7","#nu solid data",5, xAxis7);
   hnul__7->SetBinContent(1,0.001672181);
   hnul__7->SetBinContent(2,0.003506347);
   hnul__7->SetBinContent(3,0.004551831);
   hnul__7->SetBinContent(4,0.004574778);
   hnul__7->SetBinContent(5,0.003276005);
   hnul__7->SetBinError(1,1.0615e-05);
   hnul__7->SetBinError(2,1.876798e-05);
   hnul__7->SetBinError(3,2.195574e-05);
   hnul__7->SetBinError(4,2.46743e-05);
   hnul__7->SetBinError(5,1.752919e-05);
   hnul__7->SetEntries(165907.6);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hnul");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 165908 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.453");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4513");
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
   Double_t xAxis8[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hnus__8 = new TH1D("hnus__8","#nu solid data",5, xAxis8);
   hnus__8->SetBinContent(1,0.001252429);
   hnus__8->SetBinContent(2,0.002645272);
   hnus__8->SetBinContent(3,0.00348432);
   hnus__8->SetBinContent(4,0.003587417);
   hnus__8->SetBinContent(5,0.002568217);
   hnus__8->SetBinError(1,1.016869e-05);
   hnus__8->SetBinError(2,1.773572e-05);
   hnus__8->SetBinError(3,2.086826e-05);
   hnus__8->SetBinError(4,2.364208e-05);
   hnus__8->SetBinError(5,1.680464e-05);
   hnus__8->SetEntries(108136.4);

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
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2172549,0.995,"blNDC");
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
