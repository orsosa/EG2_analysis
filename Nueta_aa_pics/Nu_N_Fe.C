void Nu_N_Fe()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:49:48 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(1.858333,-210.3104,4.591667,1892.793);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis11[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hs_px__11 = new TH1D("hs_px__11","N hadrons C",5, xAxis11);
   hs_px__11->SetBinContent(1,984.1285);
   hs_px__11->SetBinContent(2,874.7253);
   hs_px__11->SetBinContent(3,1412.838);
   hs_px__11->SetBinContent(4,1048.753);
   hs_px__11->SetBinContent(5,928.8063);
   hs_px__11->SetBinError(1,90.1173);
   hs_px__11->SetBinError(2,132.937);
   hs_px__11->SetBinError(3,189.5269);
   hs_px__11->SetBinError(4,94.64293);
   hs_px__11->SetBinError(5,95.52634);
   hs_px__11->SetEntries(345.3117);
   hs_px__11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hs_px__11->SetLineColor(ci);
   hs_px__11->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hs_px__11->SetMarkerColor(ci);
   hs_px__11->SetMarkerStyle(8);
   hs_px__11->SetMarkerSize(3);
   hs_px__11->GetXaxis()->SetTitle("#nu ((GeV)");
   hs_px__11->GetXaxis()->SetRange(1,5);
   hs_px__11->GetXaxis()->SetLabelFont(22);
   hs_px__11->GetXaxis()->SetLabelSize(0.05);
   hs_px__11->GetXaxis()->SetTitleSize(0.05);
   hs_px__11->GetXaxis()->SetTickLength(0.01);
   hs_px__11->GetXaxis()->SetTitleOffset(0.85);
   hs_px__11->GetXaxis()->SetTitleFont(22);
   hs_px__11->GetYaxis()->SetLabelFont(22);
   hs_px__11->GetYaxis()->SetLabelSize(0.05);
   hs_px__11->GetYaxis()->SetTitleSize(0.05);
   hs_px__11->GetYaxis()->SetTitleFont(22);
   hs_px__11->GetZaxis()->SetLabelFont(22);
   hs_px__11->GetZaxis()->SetLabelSize(0.05);
   hs_px__11->GetZaxis()->SetTitleSize(0.05);
   hs_px__11->GetZaxis()->SetTitleFont(22);
   hs_px__11->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2337618,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
