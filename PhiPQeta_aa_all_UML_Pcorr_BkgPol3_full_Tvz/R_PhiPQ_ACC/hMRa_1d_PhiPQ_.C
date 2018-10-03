void hMRa_1d_PhiPQ_()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:32:26 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-225,-0.9398273,225,3.70642);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hMR_C__1 = new TH1D("hMR_C__1","hMR_C",12, xAxis1);
   hMR_C__1->SetBinContent(1,0.9164397);
   hMR_C__1->SetBinContent(2,1.006043);
   hMR_C__1->SetBinContent(3,1.507891);
   hMR_C__1->SetBinContent(4,0.7984146);
   hMR_C__1->SetBinContent(5,1.379082);
   hMR_C__1->SetBinContent(6,1.43797);
   hMR_C__1->SetBinContent(7,0.7043034);
   hMR_C__1->SetBinContent(8,1.337287);
   hMR_C__1->SetBinContent(9,1.260171);
   hMR_C__1->SetBinContent(10,1.123195);
   hMR_C__1->SetBinContent(11,0.9691463);
   hMR_C__1->SetBinContent(12,0.5254718);
   hMR_C__1->SetBinError(1,0.3301185);
   hMR_C__1->SetBinError(2,0.4194863);
   hMR_C__1->SetBinError(3,0.5194041);
   hMR_C__1->SetBinError(4,0.3479802);
   hMR_C__1->SetBinError(5,1.685713);
   hMR_C__1->SetBinError(6,0.9916056);
   hMR_C__1->SetBinError(7,0.4232954);
   hMR_C__1->SetBinError(8,0.5518876);
   hMR_C__1->SetBinError(9,0.4864592);
   hMR_C__1->SetBinError(10,0.4070739);
   hMR_C__1->SetBinError(11,0.3245685);
   hMR_C__1->SetBinError(12,0.237997);
   hMR_C__1->SetEntries(30.29505);
   hMR_C__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hMR_C__1->SetLineColor(ci);
   hMR_C__1->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hMR_C__1->SetMarkerColor(ci);
   hMR_C__1->SetMarkerStyle(8);
   hMR_C__1->SetMarkerSize(3);
   hMR_C__1->GetXaxis()->SetTitle("PhiPQ");
   hMR_C__1->GetXaxis()->SetLabelFont(42);
   hMR_C__1->GetXaxis()->SetLabelSize(0.035);
   hMR_C__1->GetXaxis()->SetTitleSize(0.035);
   hMR_C__1->GetXaxis()->SetTitleFont(42);
   hMR_C__1->GetYaxis()->SetTitle("R(PhiPQ)");
   hMR_C__1->GetYaxis()->SetLabelFont(42);
   hMR_C__1->GetYaxis()->SetLabelSize(0.035);
   hMR_C__1->GetYaxis()->SetTitleSize(0.035);
   hMR_C__1->GetYaxis()->SetTitleOffset(0);
   hMR_C__1->GetYaxis()->SetTitleFont(42);
   hMR_C__1->GetZaxis()->SetLabelFont(42);
   hMR_C__1->GetZaxis()->SetLabelSize(0.035);
   hMR_C__1->GetZaxis()->SetTitleSize(0.035);
   hMR_C__1->GetZaxis()->SetTitleFont(42);
   hMR_C__1->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4256187,0.9344495,0.5743813,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("hMR_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
