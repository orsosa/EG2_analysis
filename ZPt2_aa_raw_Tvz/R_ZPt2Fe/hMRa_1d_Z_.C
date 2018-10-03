void hMRa_1d_Z_()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 21 18:41:41 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(0.2125,0.4816011,1.0875,0.6247411);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Fe__1 = new TH1D("hMR_Fe__1","hMR_Fe",7, xAxis1);
   hMR_Fe__1->SetBinContent(1,0.6001839);
   hMR_Fe__1->SetBinContent(2,0.5881962);
   hMR_Fe__1->SetBinContent(3,0.5909947);
   hMR_Fe__1->SetBinContent(4,0.5979271);
   hMR_Fe__1->SetBinContent(5,0.5707332);
   hMR_Fe__1->SetBinContent(6,0.5380127);
   hMR_Fe__1->SetBinContent(7,0.5153477);
   hMR_Fe__1->SetBinError(1,0.002365199);
   hMR_Fe__1->SetBinError(2,0.00336752);
   hMR_Fe__1->SetBinError(3,0.004892921);
   hMR_Fe__1->SetBinError(4,0.007047105);
   hMR_Fe__1->SetBinError(5,0.009202857);
   hMR_Fe__1->SetBinError(6,0.01141335);
   hMR_Fe__1->SetBinError(7,0.01423935);
   hMR_Fe__1->SetEntries(31502.36);
   hMR_Fe__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hMR_Fe__1->SetLineColor(ci);
   hMR_Fe__1->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe__1->SetMarkerColor(ci);
   hMR_Fe__1->SetMarkerStyle(8);
   hMR_Fe__1->SetMarkerSize(3);
   hMR_Fe__1->GetXaxis()->SetTitle("Z");
   hMR_Fe__1->GetXaxis()->SetLabelFont(42);
   hMR_Fe__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleFont(42);
   hMR_Fe__1->GetYaxis()->SetTitle("R(Z)");
   hMR_Fe__1->GetYaxis()->SetLabelFont(42);
   hMR_Fe__1->GetYaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetYaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetYaxis()->SetTitleOffset(0);
   hMR_Fe__1->GetYaxis()->SetTitleFont(42);
   hMR_Fe__1->GetZaxis()->SetLabelFont(42);
   hMR_Fe__1->GetZaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetZaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetZaxis()->SetTitleFont(42);
   hMR_Fe__1->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4172575,0.9358257,0.5827425,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("hMR_Fe");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
