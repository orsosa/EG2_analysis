void hMRa_1d_PhiPQ_()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:32:39 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-225,0.07630938,225,1.237388);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hMR_Pb__1 = new TH1D("hMR_Pb__1","hMR_Pb",12, xAxis1);
   hMR_Pb__1->SetBinContent(1,0.77625);
   hMR_Pb__1->SetBinContent(2,0.4819603);
   hMR_Pb__1->SetBinContent(3,0.5369936);
   hMR_Pb__1->SetBinContent(4,0.5468834);
   hMR_Pb__1->SetBinContent(5,0.4745749);
   hMR_Pb__1->SetBinContent(6,0.5966451);
   hMR_Pb__1->SetBinContent(7,0.7754781);
   hMR_Pb__1->SetBinContent(8,0.3693745);
   hMR_Pb__1->SetBinContent(9,0.5775436);
   hMR_Pb__1->SetBinContent(10,0.4826461);
   hMR_Pb__1->SetBinContent(11,0.417633);
   hMR_Pb__1->SetBinContent(12,0.435742);
   hMR_Pb__1->SetBinError(1,0.3007988);
   hMR_Pb__1->SetBinError(2,0.1362283);
   hMR_Pb__1->SetBinError(3,0.1254587);
   hMR_Pb__1->SetBinError(4,0.1174485);
   hMR_Pb__1->SetBinError(5,0.227028);
   hMR_Pb__1->SetBinError(6,0.1792886);
   hMR_Pb__1->SetBinError(7,0.2579407);
   hMR_Pb__1->SetBinError(8,0.1348319);
   hMR_Pb__1->SetBinError(9,0.1381511);
   hMR_Pb__1->SetBinError(10,0.1154919);
   hMR_Pb__1->SetBinError(11,0.109112);
   hMR_Pb__1->SetBinError(12,0.08894729);
   hMR_Pb__1->SetEntries(116.5974);
   hMR_Pb__1->SetStats(0);
   hMR_Pb__1->SetLineWidth(3);
   hMR_Pb__1->SetMarkerStyle(8);
   hMR_Pb__1->SetMarkerSize(3);
   hMR_Pb__1->GetXaxis()->SetTitle("PhiPQ");
   hMR_Pb__1->GetXaxis()->SetLabelFont(42);
   hMR_Pb__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb__1->GetXaxis()->SetTitleFont(42);
   hMR_Pb__1->GetYaxis()->SetTitle("R(PhiPQ)");
   hMR_Pb__1->GetYaxis()->SetLabelFont(42);
   hMR_Pb__1->GetYaxis()->SetLabelSize(0.035);
   hMR_Pb__1->GetYaxis()->SetTitleSize(0.035);
   hMR_Pb__1->GetYaxis()->SetTitleOffset(0);
   hMR_Pb__1->GetYaxis()->SetTitleFont(42);
   hMR_Pb__1->GetZaxis()->SetLabelFont(42);
   hMR_Pb__1->GetZaxis()->SetLabelSize(0.035);
   hMR_Pb__1->GetZaxis()->SetTitleSize(0.035);
   hMR_Pb__1->GetZaxis()->SetTitleFont(42);
   hMR_Pb__1->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4151672,0.9358257,0.5848328,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("hMR_Pb");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
