void hNh_NuFe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:40:46 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(1.858333,-0.0003072326,4.591667,0.002765093);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis11[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hnul__15 = new TH1D("hnul__15","#nu solid data",5, xAxis11);
   hnul__15->SetBinContent(1,0.0009343229);
   hnul__15->SetBinContent(2,0.001919824);
   hnul__15->SetBinContent(3,0.002329309);
   hnul__15->SetBinContent(4,0.002313335);
   hnul__15->SetBinContent(5,0.001570587);
   hnul__15->SetBinError(1,5.92037e-06);
   hnul__15->SetBinError(2,1.02489e-05);
   hnul__15->SetBinError(3,1.151073e-05);
   hnul__15->SetBinError(4,1.285315e-05);
   hnul__15->SetBinError(5,9.070298e-06);
   hnul__15->SetEntries(158091.5);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hnul");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 158092 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.431");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4548");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hnul__15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hnul__15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hnul__15->SetLineColor(ci);
   hnul__15->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hnul__15->SetMarkerColor(ci);
   hnul__15->SetMarkerStyle(36);
   hnul__15->SetMarkerSize(2);
   hnul__15->GetXaxis()->SetTitle("#nu (GeV)");
   hnul__15->GetXaxis()->SetLabelFont(22);
   hnul__15->GetXaxis()->SetLabelSize(0.05);
   hnul__15->GetXaxis()->SetTitleSize(0.05);
   hnul__15->GetXaxis()->SetTitleFont(22);
   hnul__15->GetYaxis()->SetTitle("dN/d#nu");
   hnul__15->GetYaxis()->SetLabelFont(22);
   hnul__15->GetYaxis()->SetLabelSize(0.05);
   hnul__15->GetYaxis()->SetTitleSize(0.05);
   hnul__15->GetYaxis()->SetTitleFont(22);
   hnul__15->GetZaxis()->SetLabelFont(22);
   hnul__15->GetZaxis()->SetLabelSize(0.05);
   hnul__15->GetZaxis()->SetTitleSize(0.05);
   hnul__15->GetZaxis()->SetTitleFont(22);
   hnul__15->Draw("p");
   Double_t xAxis12[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hnus__16 = new TH1D("hnus__16","#nu solid data",5, xAxis12);
   hnus__16->SetBinContent(1,0.0004805195);
   hnus__16->SetBinContent(2,0.0009714709);
   hnus__16->SetBinContent(3,0.001207714);
   hnus__16->SetBinContent(4,0.001214399);
   hnus__16->SetBinContent(5,0.0008196547);
   hnus__16->SetBinError(1,4.520285e-06);
   hnus__16->SetBinError(2,7.616394e-06);
   hnus__16->SetBinError(3,8.617069e-06);
   hnus__16->SetBinError(4,9.581691e-06);
   hnus__16->SetBinError(5,6.649326e-06);
   hnus__16->SetEntries(76307.4);

   ci = TColor::GetColor("#0000ff");
   hnus__16->SetLineColor(ci);
   hnus__16->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hnus__16->SetMarkerColor(ci);
   hnus__16->SetMarkerStyle(8);
   hnus__16->SetMarkerSize(2);
   hnus__16->GetXaxis()->SetTitle("#nu (GeV)");
   hnus__16->GetXaxis()->SetLabelFont(22);
   hnus__16->GetXaxis()->SetLabelSize(0.05);
   hnus__16->GetXaxis()->SetTitleSize(0.05);
   hnus__16->GetXaxis()->SetTitleFont(22);
   hnus__16->GetYaxis()->SetTitle("dN/d#nu");
   hnus__16->GetYaxis()->SetLabelFont(22);
   hnus__16->GetYaxis()->SetLabelSize(0.05);
   hnus__16->GetYaxis()->SetTitleSize(0.05);
   hnus__16->GetYaxis()->SetTitleFont(22);
   hnus__16->GetZaxis()->SetLabelFont(22);
   hnus__16->GetZaxis()->SetLabelSize(0.05);
   hnus__16->GetZaxis()->SetTitleSize(0.05);
   hnus__16->GetZaxis()->SetTitleFont(22);
   hnus__16->Draw("samep");
   
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
