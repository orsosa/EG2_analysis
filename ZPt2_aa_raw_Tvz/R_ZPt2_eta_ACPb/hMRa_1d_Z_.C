void hMRa_1d_Z_()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 21 18:45:58 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(0.2125,0.309297,1.0875,0.5758029);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Pb__1 = new TH1D("hMR_Pb__1","hMR_Pb",7, xAxis1);
   hMR_Pb__1->SetBinContent(1,0.5162108);
   hMR_Pb__1->SetBinContent(2,0.4839179);
   hMR_Pb__1->SetBinContent(3,0.4756222);
   hMR_Pb__1->SetBinContent(4,0.4164193);
   hMR_Pb__1->SetBinContent(5,0.3780605);
   hMR_Pb__1->SetBinContent(6,0.4087052);
   hMR_Pb__1->SetBinContent(7,0.3843234);
   hMR_Pb__1->SetBinError(1,0.02278882);
   hMR_Pb__1->SetBinError(2,0.0331492);
   hMR_Pb__1->SetBinError(3,0.01756139);
   hMR_Pb__1->SetBinError(4,0.01637722);
   hMR_Pb__1->SetBinError(5,0.01846587);
   hMR_Pb__1->SetBinError(6,0.02680829);
   hMR_Pb__1->SetBinError(7,0.03870666);
   hMR_Pb__1->SetEntries(1974.366);
   hMR_Pb__1->SetStats(0);
   hMR_Pb__1->SetLineWidth(3);
   hMR_Pb__1->SetMarkerStyle(8);
   hMR_Pb__1->SetMarkerSize(3);
   hMR_Pb__1->GetXaxis()->SetTitle("Z");
   hMR_Pb__1->GetXaxis()->SetLabelFont(42);
   hMR_Pb__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb__1->GetXaxis()->SetTitleFont(42);
   hMR_Pb__1->GetYaxis()->SetTitle("R(Z)");
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
