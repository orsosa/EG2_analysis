void Ratio_diffZ_taya()
{
//=========Macro generated from canvas: cn/cn
//=========  (Wed Jun 20 02:37:51 2018) by ROOT version 6.12/06
   TCanvas *cn = new TCanvas("cn", "cn",1,1,920,666);
   cn->Range(0.1833333,-0.06552097,1.116667,0.1320541);
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
   Double_t xAxis8[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hC_Taya__4 = new TH1D("hC_Taya__4","hMR_C",6, xAxis8);
   hC_Taya__4->SetBinContent(1,-0.00493615);
   hC_Taya__4->SetBinContent(2,0.02290364);
   hC_Taya__4->SetBinContent(3,-0.01786529);
   hC_Taya__4->SetBinContent(4,0.002178114);
   hC_Taya__4->SetBinContent(5,0.08476846);
   hC_Taya__4->SetBinContent(6,-0.00662061);
   hC_Taya__4->SetBinError(1,0.02229048);
   hC_Taya__4->SetBinError(2,0.02374078);
   hC_Taya__4->SetBinError(3,0.02647877);
   hC_Taya__4->SetBinError(4,0.03075207);
   hC_Taya__4->SetBinError(5,0.0390149);
   hC_Taya__4->SetBinError(6,0.03057975);
   hC_Taya__4->SetMinimum(-0.04576347);
   hC_Taya__4->SetMaximum(0.1122966);
   hC_Taya__4->SetEntries(4927.437);
   hC_Taya__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hC_Taya__4->SetLineColor(ci);
   hC_Taya__4->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hC_Taya__4->SetMarkerColor(ci);
   hC_Taya__4->SetMarkerStyle(8);
   hC_Taya__4->SetMarkerSize(3);
   hC_Taya__4->GetXaxis()->SetTitle("Z");
   hC_Taya__4->GetXaxis()->SetLabelFont(42);
   hC_Taya__4->GetXaxis()->SetLabelSize(0.035);
   hC_Taya__4->GetXaxis()->SetTitleSize(0.035);
   hC_Taya__4->GetXaxis()->SetTitleFont(42);
   hC_Taya__4->GetYaxis()->SetTitle("R(Z)");
   hC_Taya__4->GetYaxis()->SetLabelFont(42);
   hC_Taya__4->GetYaxis()->SetLabelSize(0.035);
   hC_Taya__4->GetYaxis()->SetTitleSize(0.035);
   hC_Taya__4->GetYaxis()->SetTitleOffset(0);
   hC_Taya__4->GetYaxis()->SetTitleFont(42);
   hC_Taya__4->GetZaxis()->SetLabelFont(42);
   hC_Taya__4->GetZaxis()->SetLabelSize(0.035);
   hC_Taya__4->GetZaxis()->SetTitleSize(0.035);
   hC_Taya__4->GetZaxis()->SetTitleFont(42);
   hC_Taya__4->Draw("p");
   Double_t xAxis9[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hFe_Taya__5 = new TH1D("hFe_Taya__5","Differences",6, xAxis9);
   hFe_Taya__5->SetBinContent(1,0.01088006);
   hFe_Taya__5->SetBinContent(2,-0.0006648376);
   hFe_Taya__5->SetBinContent(3,-0.01687751);
   hFe_Taya__5->SetBinContent(4,-0.01339938);
   hFe_Taya__5->SetBinContent(5,0.05195755);
   hFe_Taya__5->SetBinContent(6,0.0150801);
   hFe_Taya__5->SetBinError(1,0.0153756);
   hFe_Taya__5->SetBinError(2,0.01616367);
   hFe_Taya__5->SetBinError(3,0.01657063);
   hFe_Taya__5->SetBinError(4,0.01852985);
   hFe_Taya__5->SetBinError(5,0.02305712);
   hFe_Taya__5->SetBinError(6,0.01881978);
   hFe_Taya__5->SetEntries(6748.908);
   hFe_Taya__5->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya__5->SetLineColor(ci);
   hFe_Taya__5->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hFe_Taya__5->SetMarkerColor(ci);
   hFe_Taya__5->SetMarkerStyle(8);
   hFe_Taya__5->SetMarkerSize(3);
   hFe_Taya__5->GetXaxis()->SetTitle("Z");
   hFe_Taya__5->GetXaxis()->SetLabelFont(42);
   hFe_Taya__5->GetXaxis()->SetLabelSize(0.035);
   hFe_Taya__5->GetXaxis()->SetTitleSize(0.035);
   hFe_Taya__5->GetXaxis()->SetTitleFont(42);
   hFe_Taya__5->GetYaxis()->SetTitle("R(Z)");
   hFe_Taya__5->GetYaxis()->SetLabelFont(42);
   hFe_Taya__5->GetYaxis()->SetLabelSize(0.035);
   hFe_Taya__5->GetYaxis()->SetTitleSize(0.035);
   hFe_Taya__5->GetYaxis()->SetTitleOffset(0);
   hFe_Taya__5->GetYaxis()->SetTitleFont(42);
   hFe_Taya__5->GetZaxis()->SetLabelFont(42);
   hFe_Taya__5->GetZaxis()->SetLabelSize(0.035);
   hFe_Taya__5->GetZaxis()->SetTitleSize(0.035);
   hFe_Taya__5->GetZaxis()->SetTitleFont(42);
   hFe_Taya__5->Draw("samep");
   Double_t xAxis10[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hPb_Taya__6 = new TH1D("hPb_Taya__6","hMR_Pb",6, xAxis10);
   hPb_Taya__6->SetBinContent(1,0.01285006);
   hPb_Taya__6->SetBinContent(2,-0.03857892);
   hPb_Taya__6->SetBinContent(3,-0.008161023);
   hPb_Taya__6->SetBinContent(4,0.01085732);
   hPb_Taya__6->SetBinContent(5,0.1051121);
   hPb_Taya__6->SetBinContent(6,0.06812782);
   hPb_Taya__6->SetBinError(1,0.01468727);
   hPb_Taya__6->SetBinError(2,0.01431885);
   hPb_Taya__6->SetBinError(3,0.01643284);
   hPb_Taya__6->SetBinError(4,0.01956514);
   hPb_Taya__6->SetBinError(5,0.0235059);
   hPb_Taya__6->SetBinError(6,0.02009816);
   hPb_Taya__6->SetEntries(3679.402);
   hPb_Taya__6->SetStats(0);
   hPb_Taya__6->SetLineWidth(3);
   hPb_Taya__6->SetMarkerStyle(8);
   hPb_Taya__6->SetMarkerSize(3);
   hPb_Taya__6->GetXaxis()->SetTitle("Z");
   hPb_Taya__6->GetXaxis()->SetLabelFont(42);
   hPb_Taya__6->GetXaxis()->SetLabelSize(0.035);
   hPb_Taya__6->GetXaxis()->SetTitleSize(0.035);
   hPb_Taya__6->GetXaxis()->SetTitleFont(42);
   hPb_Taya__6->GetYaxis()->SetTitle("R(Z)");
   hPb_Taya__6->GetYaxis()->SetLabelFont(42);
   hPb_Taya__6->GetYaxis()->SetLabelSize(0.035);
   hPb_Taya__6->GetYaxis()->SetTitleSize(0.035);
   hPb_Taya__6->GetYaxis()->SetTitleOffset(0);
   hPb_Taya__6->GetYaxis()->SetTitleFont(42);
   hPb_Taya__6->GetZaxis()->SetLabelFont(42);
   hPb_Taya__6->GetZaxis()->SetLabelSize(0.035);
   hPb_Taya__6->GetZaxis()->SetTitleSize(0.035);
   hPb_Taya__6->GetZaxis()->SetTitleFont(42);
   hPb_Taya__6->Draw("samep");
   
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
