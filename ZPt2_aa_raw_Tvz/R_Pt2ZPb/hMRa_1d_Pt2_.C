void hMRa_1d_Pt2_()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 21 18:43:32 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.1875,0.2882705,1.6875,1.146259);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 0.2142857, 0.4285714, 0.6428571, 0.8571429, 1.071429, 1.285714, 1.5}; 
   
   TH1D *hMR_Pb__1 = new TH1D("hMR_Pb__1","hMR_Pb",7, xAxis1);
   hMR_Pb__1->SetBinContent(1,0.4075624);
   hMR_Pb__1->SetBinContent(2,0.477774);
   hMR_Pb__1->SetBinContent(3,0.5514671);
   hMR_Pb__1->SetBinContent(4,0.6482012);
   hMR_Pb__1->SetBinContent(5,0.7592604);
   hMR_Pb__1->SetBinContent(6,0.946566);
   hMR_Pb__1->SetBinContent(7,0.9326459);
   hMR_Pb__1->SetBinError(1,0.00236421);
   hMR_Pb__1->SetBinError(2,0.004393528);
   hMR_Pb__1->SetBinError(3,0.008716064);
   hMR_Pb__1->SetBinError(4,0.01714452);
   hMR_Pb__1->SetBinError(5,0.03272521);
   hMR_Pb__1->SetBinError(6,0.06381746);
   hMR_Pb__1->SetBinError(7,0.09512925);
   hMR_Pb__1->SetEntries(1529.426);
   hMR_Pb__1->SetStats(0);
   hMR_Pb__1->SetLineWidth(3);
   hMR_Pb__1->SetMarkerStyle(8);
   hMR_Pb__1->SetMarkerSize(3);
   hMR_Pb__1->GetXaxis()->SetTitle("Pt2");
   hMR_Pb__1->GetXaxis()->SetLabelFont(42);
   hMR_Pb__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb__1->GetXaxis()->SetTitleFont(42);
   hMR_Pb__1->GetYaxis()->SetTitle("R(Pt2)");
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
