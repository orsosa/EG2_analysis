{
//=========Macro generated from canvas: c/c
//=========  (Sat Mar 10 02:10:43 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.325,-0.1737804,1.075,0.6694893);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Pb = new TH1D("hMR_Pb","hMR_Pb",6, xAxis2);
   hMR_Pb->SetBinContent(1,0.4532213);
   hMR_Pb->SetBinContent(2,0.5309293);
   hMR_Pb->SetBinContent(3,0.4627434);
   hMR_Pb->SetBinContent(4,0.4617439);
   hMR_Pb->SetBinContent(5,0.4549122);
   hMR_Pb->SetBinContent(6,0.09552593);
   hMR_Pb->SetBinError(1,0.02003079);
   hMR_Pb->SetBinError(2,0.02210839);
   hMR_Pb->SetBinError(3,0.02222399);
   hMR_Pb->SetBinError(4,0.02457651);
   hMR_Pb->SetBinError(5,0.01387017);
   hMR_Pb->SetBinError(6,0.1543846);
   hMR_Pb->SetEntries(6);
   hMR_Pb->SetStats(0);
   hMR_Pb->SetMarkerStyle(8);
   hMR_Pb->GetXaxis()->SetTitle("Z");
   hMR_Pb->GetXaxis()->SetLabelFont(42);
   hMR_Pb->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb->GetXaxis()->SetTitleFont(42);
   hMR_Pb->GetYaxis()->SetTitle("R(Z)");
   hMR_Pb->GetYaxis()->SetLabelFont(42);
   hMR_Pb->GetYaxis()->SetLabelSize(0.035);
   hMR_Pb->GetYaxis()->SetTitleSize(0.035);
   hMR_Pb->GetYaxis()->SetTitleOffset(1.1);
   hMR_Pb->GetYaxis()->SetTitleFont(42);
   hMR_Pb->GetZaxis()->SetLabelFont(42);
   hMR_Pb->GetZaxis()->SetLabelSize(0.035);
   hMR_Pb->GetZaxis()->SetTitleSize(0.035);
   hMR_Pb->GetZaxis()->SetTitleFont(42);
   hMR_Pb->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4151672,0.9358257,0.5848328,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("hMR_Pb");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
