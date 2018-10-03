void Ratio_diffZ_taya_rel()
{
//=========Macro generated from canvas: cn/cn
//=========  (Wed Jun 20 02:37:51 2018) by ROOT version 6.12/06
   TCanvas *cn = new TCanvas("cn", "cn",1,1,920,666);
   cn->Range(0.1833333,-14.58893,1.116667,33.93868);
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
   Double_t xAxis11[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hC_Taya__7 = new TH1D("hC_Taya__7","hMR_C",6, xAxis11);
   hC_Taya__7->SetBinContent(1,-0.581452);
   hC_Taya__7->SetBinContent(2,2.728293);
   hC_Taya__7->SetBinContent(3,-2.095414);
   hC_Taya__7->SetBinContent(4,0.2550329);
   hC_Taya__7->SetBinContent(5,10.38842);
   hC_Taya__7->SetBinContent(6,-0.8826703);
   hC_Taya__7->SetBinError(1,0.02229048);
   hC_Taya__7->SetBinError(2,0.02374078);
   hC_Taya__7->SetBinError(3,0.02647877);
   hC_Taya__7->SetBinError(4,0.03075207);
   hC_Taya__7->SetBinError(5,0.0390149);
   hC_Taya__7->SetBinError(6,0.03057975);
   hC_Taya__7->SetMinimum(-9.736166);
   hC_Taya__7->SetMaximum(29.08592);
   hC_Taya__7->SetEntries(4927.437);
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
   hC_Taya__7->GetXaxis()->SetTitle("Z");
   hC_Taya__7->GetXaxis()->SetLabelFont(42);
   hC_Taya__7->GetXaxis()->SetLabelSize(0.035);
   hC_Taya__7->GetXaxis()->SetTitleSize(0.035);
   hC_Taya__7->GetXaxis()->SetTitleFont(42);
   hC_Taya__7->GetYaxis()->SetTitle("R(Z)");
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
   Double_t xAxis12[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hFe_Taya__8 = new TH1D("hFe_Taya__8","Differences in % of Taya values.",6, xAxis12);
   hFe_Taya__8->SetBinContent(1,1.690501);
   hFe_Taya__8->SetBinContent(2,-0.1046018);
   hFe_Taya__8->SetBinContent(3,-2.706512);
   hFe_Taya__8->SetBinContent(4,-2.157006);
   hFe_Taya__8->SetBinContent(5,8.781166);
   hFe_Taya__8->SetBinContent(6,2.951292);
   hFe_Taya__8->SetBinError(1,0.0153756);
   hFe_Taya__8->SetBinError(2,0.01616367);
   hFe_Taya__8->SetBinError(3,0.01657063);
   hFe_Taya__8->SetBinError(4,0.01852985);
   hFe_Taya__8->SetBinError(5,0.02305712);
   hFe_Taya__8->SetBinError(6,0.01881978);
   hFe_Taya__8->SetEntries(6748.908);
   hFe_Taya__8->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya__8->SetLineColor(ci);
   hFe_Taya__8->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya__8->SetMarkerColor(ci);
   hFe_Taya__8->SetMarkerStyle(8);
   hFe_Taya__8->SetMarkerSize(3);
   hFe_Taya__8->GetXaxis()->SetTitle("Z");
   hFe_Taya__8->GetXaxis()->SetLabelFont(42);
   hFe_Taya__8->GetXaxis()->SetLabelSize(0.035);
   hFe_Taya__8->GetXaxis()->SetTitleSize(0.035);
   hFe_Taya__8->GetXaxis()->SetTitleFont(42);
   hFe_Taya__8->GetYaxis()->SetTitle("R(Z)");
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
   Double_t xAxis13[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hPb_Taya__9 = new TH1D("hPb_Taya__9","hMR_Pb",6, xAxis13);
   hPb_Taya__9->SetBinContent(1,2.604659);
   hPb_Taya__9->SetBinContent(2,-7.971526);
   hPb_Taya__9->SetBinContent(3,-1.752793);
   hPb_Taya__9->SetBinContent(4,2.414842);
   hPb_Taya__9->SetBinContent(5,27.32128);
   hPb_Taya__9->SetBinContent(6,22.45997);
   hPb_Taya__9->SetBinError(1,0.01468727);
   hPb_Taya__9->SetBinError(2,0.01431885);
   hPb_Taya__9->SetBinError(3,0.01643284);
   hPb_Taya__9->SetBinError(4,0.01956514);
   hPb_Taya__9->SetBinError(5,0.0235059);
   hPb_Taya__9->SetBinError(6,0.02009816);
   hPb_Taya__9->SetEntries(3679.402);
   hPb_Taya__9->SetStats(0);
   hPb_Taya__9->SetLineWidth(3);
   hPb_Taya__9->SetMarkerStyle(8);
   hPb_Taya__9->SetMarkerSize(3);
   hPb_Taya__9->GetXaxis()->SetTitle("Z");
   hPb_Taya__9->GetXaxis()->SetLabelFont(42);
   hPb_Taya__9->GetXaxis()->SetLabelSize(0.035);
   hPb_Taya__9->GetXaxis()->SetTitleSize(0.035);
   hPb_Taya__9->GetXaxis()->SetTitleFont(42);
   hPb_Taya__9->GetYaxis()->SetTitle("R(Z)");
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
