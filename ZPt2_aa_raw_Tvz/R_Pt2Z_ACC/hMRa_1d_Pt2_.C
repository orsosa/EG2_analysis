void hMRa_1d_Pt2_()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 21 18:43:38 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.1875,0.5522306,1.6875,2.216939);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 0.2142857, 0.4285714, 0.6428571, 0.8571429, 1.071429, 1.285714, 1.5}; 
   
   TH1D *hMR_C__1 = new TH1D("hMR_C__1","hMR_C",7, xAxis1);
   hMR_C__1->SetBinContent(1,0.7860728);
   hMR_C__1->SetBinContent(2,0.8165202);
   hMR_C__1->SetBinContent(3,0.8933103);
   hMR_C__1->SetBinContent(4,0.9884043);
   hMR_C__1->SetBinContent(5,1.16446);
   hMR_C__1->SetBinContent(6,1.690207);
   hMR_C__1->SetBinContent(7,1.754673);
   hMR_C__1->SetBinError(1,0.00697378);
   hMR_C__1->SetBinError(2,0.01052605);
   hMR_C__1->SetBinError(3,0.01736763);
   hMR_C__1->SetBinError(4,0.02999215);
   hMR_C__1->SetBinError(5,0.05820699);
   hMR_C__1->SetBinError(6,0.1334599);
   hMR_C__1->SetBinError(7,0.2323775);
   hMR_C__1->SetEntries(855.6372);
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
   hMR_C__1->GetXaxis()->SetTitle("Pt2");
   hMR_C__1->GetXaxis()->SetLabelFont(42);
   hMR_C__1->GetXaxis()->SetLabelSize(0.035);
   hMR_C__1->GetXaxis()->SetTitleSize(0.035);
   hMR_C__1->GetXaxis()->SetTitleFont(42);
   hMR_C__1->GetYaxis()->SetTitle("R(Pt2)");
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
