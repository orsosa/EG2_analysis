void eta_3pi_Fe_nu()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:03:57 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(1.858333,-0.08417607,4.591667,0.7575846);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis3[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hRnu_Fe__4 = new TH1D("hRnu_Fe__4","Multiplicity ratio for Fe",5, xAxis3);
   hRnu_Fe__4->SetBinContent(1,0.3917971);
   hRnu_Fe__4->SetBinContent(2,0.5535302);
   hRnu_Fe__4->SetBinContent(3,0.5041018);
   hRnu_Fe__4->SetBinContent(4,0.5673746);
   hRnu_Fe__4->SetBinContent(5,0.4434225);
   hRnu_Fe__4->SetBinError(1,0.05268831);
   hRnu_Fe__4->SetBinError(2,0.05853488);
   hRnu_Fe__4->SetBinError(3,0.05860689);
   hRnu_Fe__4->SetBinError(4,0.07396679);
   hRnu_Fe__4->SetBinError(5,0.07564988);
   hRnu_Fe__4->SetEntries(290.5607);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hRnu_Fe");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 291    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.374");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.5019");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hRnu_Fe__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hRnu_Fe__4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hRnu_Fe__4->SetLineColor(ci);
   hRnu_Fe__4->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hRnu_Fe__4->SetMarkerColor(ci);
   hRnu_Fe__4->SetMarkerStyle(8);
   hRnu_Fe__4->SetMarkerSize(2);
   hRnu_Fe__4->GetXaxis()->SetTitle("#nu (GeV)");
   hRnu_Fe__4->GetXaxis()->SetLabelFont(22);
   hRnu_Fe__4->GetXaxis()->SetLabelSize(0.05);
   hRnu_Fe__4->GetXaxis()->SetTitleSize(0.05);
   hRnu_Fe__4->GetXaxis()->SetTitleFont(22);
   hRnu_Fe__4->GetYaxis()->SetTitle("R^{A}_{D}");
   hRnu_Fe__4->GetYaxis()->SetLabelFont(22);
   hRnu_Fe__4->GetYaxis()->SetLabelSize(0.05);
   hRnu_Fe__4->GetYaxis()->SetTitleSize(0.05);
   hRnu_Fe__4->GetYaxis()->SetTitleFont(22);
   hRnu_Fe__4->GetZaxis()->SetLabelFont(22);
   hRnu_Fe__4->GetZaxis()->SetLabelSize(0.05);
   hRnu_Fe__4->GetZaxis()->SetTitleSize(0.05);
   hRnu_Fe__4->GetZaxis()->SetTitleFont(22);
   hRnu_Fe__4->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.9398649,0.3976471,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Multiplicity ratio for Fe");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
