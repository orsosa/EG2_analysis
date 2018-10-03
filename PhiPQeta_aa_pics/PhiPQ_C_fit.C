void PhiPQ_C_fit()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 18 00:01:56 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",150,64,920,690);
   gStyle->SetOptFit(1);
   c->Range(-240,-6163.14,240,25348.23);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hs_ac_px__1 = new TH1D("hs_ac_px__1","N hadrons + AC C",12, xAxis1);
   hs_ac_px__1->SetBinContent(1,4823.705);
   hs_ac_px__1->SetBinContent(2,7300.866);
   hs_ac_px__1->SetBinContent(3,10384.72);
   hs_ac_px__1->SetBinContent(4,5337.817);
   hs_ac_px__1->SetBinContent(5,9563.963);
   hs_ac_px__1->SetBinContent(6,10769.48);
   hs_ac_px__1->SetBinContent(7,6195.446);
   hs_ac_px__1->SetBinContent(8,10171.91);
   hs_ac_px__1->SetBinContent(9,6037.012);
   hs_ac_px__1->SetBinContent(10,7154.709);
   hs_ac_px__1->SetBinContent(11,8111.766);
   hs_ac_px__1->SetBinContent(12,2325.824);
   hs_ac_px__1->SetBinError(1,1396.621);
   hs_ac_px__1->SetBinError(2,2689.729);
   hs_ac_px__1->SetBinError(3,2496.258);
   hs_ac_px__1->SetBinError(4,1776.218);
   hs_ac_px__1->SetBinError(5,11432.7);
   hs_ac_px__1->SetBinError(6,5650.074);
   hs_ac_px__1->SetBinError(7,1789.01);
   hs_ac_px__1->SetBinError(8,3169.159);
   hs_ac_px__1->SetBinError(9,1429.181);
   hs_ac_px__1->SetBinError(10,1858.147);
   hs_ac_px__1->SetBinError(11,1921.43);
   hs_ac_px__1->SetBinError(12,906.0473);
   hs_ac_px__1->SetEntries(38.02928);
   hs_ac_px__1->SetStats(0);
   
   TF1 *fC1 = new TF1("fC","[0] + [1]*TMath::Cos(x/180*3.1416)+[2]*TMath::Cos(2*x/180*3.1416)",-180,180, TF1::EAddToList::kNo);
   fC1->SetFillColor(19);
   fC1->SetFillStyle(0);
   fC1->SetLineWidth(3);
   fC1->SetChisquare(12.26623);
   fC1->SetNDF(9);
   fC1->GetXaxis()->SetLabelFont(22);
   fC1->GetXaxis()->SetLabelSize(0.05);
   fC1->GetXaxis()->SetTitleSize(0.05);
   fC1->GetXaxis()->SetTitleFont(22);
   fC1->GetYaxis()->SetLabelFont(22);
   fC1->GetYaxis()->SetLabelSize(0.05);
   fC1->GetYaxis()->SetTitleSize(0.05);
   fC1->GetYaxis()->SetTitleFont(22);
   fC1->SetParameter(0,5995.677);
   fC1->SetParError(0,586.5772);
   fC1->SetParLimits(0,0,0);
   fC1->SetParameter(1,1269.68);
   fC1->SetParError(1,868.7911);
   fC1->SetParLimits(1,0,0);
   fC1->SetParameter(2,-1349.35);
   fC1->SetParError(2,741.1182);
   fC1->SetParLimits(2,0,0);
   fC1->SetParent(hs_ac_px__1);
   hs_ac_px__1->GetListOfFunctions()->Add(fC1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hs_ac_px__1->SetLineColor(ci);
   hs_ac_px__1->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hs_ac_px__1->SetMarkerColor(ci);
   hs_ac_px__1->SetMarkerStyle(8);
   hs_ac_px__1->SetMarkerSize(3);
   hs_ac_px__1->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hs_ac_px__1->GetXaxis()->SetLabelFont(22);
   hs_ac_px__1->GetXaxis()->SetLabelSize(0.05);
   hs_ac_px__1->GetXaxis()->SetTitleSize(0.05);
   hs_ac_px__1->GetXaxis()->SetTickLength(0.01);
   hs_ac_px__1->GetXaxis()->SetTitleOffset(0.85);
   hs_ac_px__1->GetXaxis()->SetTitleFont(22);
   hs_ac_px__1->GetYaxis()->SetLabelFont(22);
   hs_ac_px__1->GetYaxis()->SetLabelSize(0.05);
   hs_ac_px__1->GetYaxis()->SetTitleSize(0.05);
   hs_ac_px__1->GetYaxis()->SetTitleFont(22);
   hs_ac_px__1->GetZaxis()->SetLabelFont(22);
   hs_ac_px__1->GetZaxis()->SetLabelSize(0.05);
   hs_ac_px__1->GetZaxis()->SetTitleSize(0.05);
   hs_ac_px__1->GetZaxis()->SetTitleFont(22);
   hs_ac_px__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.3175817,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons + AC C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
