void Ratio_diffPt2_taya_rel()
{
//=========Macro generated from canvas: cn/cn
//=========  (Mon Jun 18 02:32:37 2018) by ROOT version 6.12/06
   TCanvas *cn = new TCanvas("cn", "cn",1,1,920,666);
   cn->Range(-0.25,-19.83711,1.75,18.56905);
   cn->SetFillColor(0);
   cn->SetBorderMode(0);
   cn->SetBorderSize(2);
   cn->SetGridx();
   cn->SetGridy();
   cn->SetTickx(1);
   cn->SetTicky(1);
   cn->SetLeftMargin(0.125);
   cn->SetRightMargin(0.125);
   cn->SetFrameBorderMode(0);
   cn->SetFrameBorderMode(0);
   Double_t xAxis11[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hC_Taya__7 = new TH1D("hC_Taya__7","hMR_C",6, xAxis11);
   hC_Taya__7->SetBinContent(1,-14.59991);
   hC_Taya__7->SetBinContent(2,1.743785);
   hC_Taya__7->SetBinContent(3,6.47377);
   hC_Taya__7->SetBinContent(4,1.340227);
   hC_Taya__7->SetBinContent(5,-6.756337);
   hC_Taya__7->SetBinContent(6,-4.199511);
   hC_Taya__7->SetBinError(1,0.02905108);
   hC_Taya__7->SetBinError(2,0.02873299);
   hC_Taya__7->SetBinError(3,0.02370806);
   hC_Taya__7->SetBinError(4,0.02995125);
   hC_Taya__7->SetBinError(5,0.02885537);
   hC_Taya__7->SetBinError(6,0.04223083);
   hC_Taya__7->SetMinimum(-15.99649);
   hC_Taya__7->SetMaximum(14.72844);
   hC_Taya__7->SetEntries(4896.258);
   hC_Taya__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hC_Taya__7->SetLineColor(ci);
   hC_Taya__7->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hC_Taya__7->SetMarkerColor(ci);
   hC_Taya__7->SetMarkerStyle(8);
   hC_Taya__7->SetMarkerSize(3);
   hC_Taya__7->GetXaxis()->SetTitle("Pt2");
   hC_Taya__7->GetXaxis()->SetLabelFont(42);
   hC_Taya__7->GetXaxis()->SetLabelSize(0.035);
   hC_Taya__7->GetXaxis()->SetTitleSize(0.035);
   hC_Taya__7->GetXaxis()->SetTitleFont(42);
   hC_Taya__7->GetYaxis()->SetTitle("R(Pt2)");
   hC_Taya__7->GetYaxis()->SetLabelFont(42);
   hC_Taya__7->GetYaxis()->SetLabelSize(0.035);
   hC_Taya__7->GetYaxis()->SetTitleSize(0.035);
   hC_Taya__7->GetYaxis()->SetTitleOffset(0);
   hC_Taya__7->GetYaxis()->SetTitleFont(42);
   hC_Taya__7->GetZaxis()->SetLabelFont(42);
   hC_Taya__7->GetZaxis()->SetLabelSize(0.035);
   hC_Taya__7->GetZaxis()->SetTitleSize(0.035);
   hC_Taya__7->GetZaxis()->SetTitleFont(42);
   hC_Taya__7->Draw("p");
   Double_t xAxis12[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hFe_Taya__8 = new TH1D("hFe_Taya__8","Differences in % of Taya values.",6, xAxis12);
   hFe_Taya__8->SetBinContent(1,-2.035294);
   hFe_Taya__8->SetBinContent(2,-1.285645);
   hFe_Taya__8->SetBinContent(3,4.863211);
   hFe_Taya__8->SetBinContent(4,9.200177);
   hFe_Taya__8->SetBinContent(5,-3.679864);
   hFe_Taya__8->SetBinContent(6,-5.957873);
   hFe_Taya__8->SetBinError(1,0.02071055);
   hFe_Taya__8->SetBinError(2,0.01948274);
   hFe_Taya__8->SetBinError(3,0.04081367);
   hFe_Taya__8->SetBinError(4,0.02128402);
   hFe_Taya__8->SetBinError(5,0.01867557);
   hFe_Taya__8->SetBinError(6,0.04320792);
   hFe_Taya__8->SetEntries(3477.453);
   hFe_Taya__8->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya__8->SetLineColor(ci);
   hFe_Taya__8->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya__8->SetMarkerColor(ci);
   hFe_Taya__8->SetMarkerStyle(8);
   hFe_Taya__8->SetMarkerSize(3);
   hFe_Taya__8->GetXaxis()->SetTitle("Pt2");
   hFe_Taya__8->GetXaxis()->SetLabelFont(42);
   hFe_Taya__8->GetXaxis()->SetLabelSize(0.035);
   hFe_Taya__8->GetXaxis()->SetTitleSize(0.035);
   hFe_Taya__8->GetXaxis()->SetTitleFont(42);
   hFe_Taya__8->GetYaxis()->SetTitle("R(Pt2)");
   hFe_Taya__8->GetYaxis()->SetLabelFont(42);
   hFe_Taya__8->GetYaxis()->SetLabelSize(0.035);
   hFe_Taya__8->GetYaxis()->SetTitleSize(0.035);
   hFe_Taya__8->GetYaxis()->SetTitleOffset(0);
   hFe_Taya__8->GetYaxis()->SetTitleFont(42);
   hFe_Taya__8->GetZaxis()->SetLabelFont(42);
   hFe_Taya__8->GetZaxis()->SetLabelSize(0.035);
   hFe_Taya__8->GetZaxis()->SetTitleSize(0.035);
   hFe_Taya__8->GetZaxis()->SetTitleFont(42);
   hFe_Taya__8->Draw("samep");
   Double_t xAxis13[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hPb_Taya__9 = new TH1D("hPb_Taya__9","hMR_Pb",6, xAxis13);
   hPb_Taya__9->SetBinContent(1,1.152649);
   hPb_Taya__9->SetBinContent(2,5.396705);
   hPb_Taya__9->SetBinContent(3,5.406453);
   hPb_Taya__9->SetBinContent(4,-0.6216185);
   hPb_Taya__9->SetBinContent(5,-4.448533);
   hPb_Taya__9->SetBinContent(6,13.33185);
   hPb_Taya__9->SetBinError(1,0.01887102);
   hPb_Taya__9->SetBinError(2,0.016161);
   hPb_Taya__9->SetBinError(3,0.01545015);
   hPb_Taya__9->SetBinError(4,0.01954272);
   hPb_Taya__9->SetBinError(5,0.02306483);
   hPb_Taya__9->SetBinError(6,0.0349633);
   hPb_Taya__9->SetEntries(3157.305);
   hPb_Taya__9->SetStats(0);
   hPb_Taya__9->SetLineWidth(3);
   hPb_Taya__9->SetMarkerStyle(8);
   hPb_Taya__9->SetMarkerSize(3);
   hPb_Taya__9->GetXaxis()->SetTitle("Pt2");
   hPb_Taya__9->GetXaxis()->SetLabelFont(42);
   hPb_Taya__9->GetXaxis()->SetLabelSize(0.035);
   hPb_Taya__9->GetXaxis()->SetTitleSize(0.035);
   hPb_Taya__9->GetXaxis()->SetTitleFont(42);
   hPb_Taya__9->GetYaxis()->SetTitle("R(Pt2)");
   hPb_Taya__9->GetYaxis()->SetLabelFont(42);
   hPb_Taya__9->GetYaxis()->SetLabelSize(0.035);
   hPb_Taya__9->GetYaxis()->SetTitleSize(0.035);
   hPb_Taya__9->GetYaxis()->SetTitleOffset(0);
   hPb_Taya__9->GetYaxis()->SetTitleFont(42);
   hPb_Taya__9->GetZaxis()->SetLabelFont(42);
   hPb_Taya__9->GetZaxis()->SetLabelSize(0.035);
   hPb_Taya__9->GetZaxis()->SetTitleSize(0.035);
   hPb_Taya__9->GetZaxis()->SetTitleFont(42);
   hPb_Taya__9->Draw("samep");
   
   TPaveText *pt = new TPaveText(0.01,0.9406193,0.1457205,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("hMR_C");
   pt->Draw();
   cn->Modified();
   cn->cd();
   cn->SetSelected(cn);
}
