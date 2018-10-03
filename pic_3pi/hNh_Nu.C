void hNh_Nu()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jun 19 04:59:49 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(1.858333,-1.081468e-06,4.591667,9.733215e-06);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis9[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hnus__15 = new TH1D("hnus__15","#un solid data",5, xAxis9);
   hnus__15->SetBinContent(1,5.221759e-06);
   hnus__15->SetBinContent(2,6.115373e-06);
   hnus__15->SetBinContent(3,6.295129e-06);
   hnus__15->SetBinContent(4,7.033495e-06);
   hnus__15->SetBinContent(5,2.456865e-06);
   hnus__15->SetBinError(1,7.537539e-07);
   hnus__15->SetBinError(2,9.792779e-07);
   hnus__15->SetBinError(3,1.02123e-06);
   hnus__15->SetBinError(4,1.206265e-06);
   hnus__15->SetBinError(5,5.958845e-07);
   hnus__15->SetEntries(167.9461);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hnus");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 168    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.295");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4805");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hnus__15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hnus__15);
   hnus__15->SetLineWidth(2);
   hnus__15->SetMarkerStyle(8);
   hnus__15->SetMarkerSize(2);
   hnus__15->GetXaxis()->SetTitle("#nu (GeV)");
   hnus__15->GetXaxis()->SetLabelFont(22);
   hnus__15->GetXaxis()->SetLabelSize(0.05);
   hnus__15->GetXaxis()->SetTitleSize(0.05);
   hnus__15->GetXaxis()->SetTitleFont(22);
   hnus__15->GetYaxis()->SetTitle("dN/d#nu");
   hnus__15->GetYaxis()->SetLabelFont(22);
   hnus__15->GetYaxis()->SetLabelSize(0.05);
   hnus__15->GetYaxis()->SetTitleSize(0.05);
   hnus__15->GetYaxis()->SetTitleFont(22);
   hnus__15->GetZaxis()->SetLabelFont(22);
   hnus__15->GetZaxis()->SetLabelSize(0.05);
   hnus__15->GetZaxis()->SetTitleSize(0.05);
   hnus__15->GetZaxis()->SetTitleFont(22);
   hnus__15->Draw("p");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2603922,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("#un solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
