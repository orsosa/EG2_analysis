void exp_expfullhMR_Fe_diff()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 19 00:05:51 2018) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,64,800,600);
   c->Range(0.3,-12.99186,1.1,4.538011);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Fe_diff__1 = new TH1D("hMR_Fe_diff__1","hMR_Fe",6, xAxis1);
   hMR_Fe_diff__1->SetBinContent(1,-10.44824);
   hMR_Fe_diff__1->SetBinContent(2,-10.60287);
   hMR_Fe_diff__1->SetBinContent(3,-1.953387);
   hMR_Fe_diff__1->SetBinContent(4,2.117219);
   hMR_Fe_diff__1->SetBinContent(5,-0.6004527);
   hMR_Fe_diff__1->SetBinContent(6,0.6546304);
   hMR_Fe_diff__1->SetEntries(12);
   hMR_Fe_diff__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#666699");
   hMR_Fe_diff__1->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe_diff__1->SetLineColor(ci);

   ci = TColor::GetColor("#666699");
   hMR_Fe_diff__1->SetMarkerColor(ci);
   hMR_Fe_diff__1->SetMarkerStyle(8);
   hMR_Fe_diff__1->GetXaxis()->SetTitle("Z");
   hMR_Fe_diff__1->GetXaxis()->SetLabelFont(42);
   hMR_Fe_diff__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe_diff__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe_diff__1->GetXaxis()->SetTitleFont(42);
   hMR_Fe_diff__1->GetYaxis()->SetTitle("Difference (%)");
   hMR_Fe_diff__1->GetYaxis()->SetLabelFont(42);
   hMR_Fe_diff__1->GetYaxis()->SetLabelSize(0.035);
   hMR_Fe_diff__1->GetYaxis()->SetTitleSize(0.035);
   hMR_Fe_diff__1->GetYaxis()->SetTitleOffset(1.1);
   hMR_Fe_diff__1->GetYaxis()->SetTitleFont(42);
   hMR_Fe_diff__1->GetZaxis()->SetLabelFont(42);
   hMR_Fe_diff__1->GetZaxis()->SetLabelSize(0.035);
   hMR_Fe_diff__1->GetZaxis()->SetTitleSize(0.035);
   hMR_Fe_diff__1->GetZaxis()->SetTitleFont(42);
   hMR_Fe_diff__1->Draw("bar");
   
   TPaveText *pt = new TPaveText(0.01,0.9406446,0.1615789,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("hMR_Fe");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
