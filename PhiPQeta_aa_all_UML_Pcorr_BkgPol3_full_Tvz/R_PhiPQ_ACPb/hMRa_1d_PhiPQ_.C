void hMRa_1d_PhiPQ_()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:32:27 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-225,-0.8105613,225,2.90489);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hMR_Pb__1 = new TH1D("hMR_Pb__1","hMR_Pb",12, xAxis1);
   hMR_Pb__1->SetBinContent(1,1.527148);
   hMR_Pb__1->SetBinContent(2,0.5965492);
   hMR_Pb__1->SetBinContent(3,0.7218497);
   hMR_Pb__1->SetBinContent(4,0.5679607);
   hMR_Pb__1->SetBinContent(5,1.043794);
   hMR_Pb__1->SetBinContent(6,0.8197374);
   hMR_Pb__1->SetBinContent(7,0.5643844);
   hMR_Pb__1->SetBinContent(8,0.4405778);
   hMR_Pb__1->SetBinContent(9,0.7224519);
   hMR_Pb__1->SetBinContent(10,0.5084466);
   hMR_Pb__1->SetBinContent(11,0.5427625);
   hMR_Pb__1->SetBinContent(12,0.5597528);
   hMR_Pb__1->SetBinError(1,0.6998494);
   hMR_Pb__1->SetBinError(2,0.2496152);
   hMR_Pb__1->SetBinError(3,0.2491116);
   hMR_Pb__1->SetBinError(4,0.2339978);
   hMR_Pb__1->SetBinError(5,1.348009);
   hMR_Pb__1->SetBinError(6,0.5519349);
   hMR_Pb__1->SetBinError(7,0.3434818);
   hMR_Pb__1->SetBinError(8,0.2231123);
   hMR_Pb__1->SetBinError(9,0.2485711);
   hMR_Pb__1->SetBinError(10,0.1812803);
   hMR_Pb__1->SetBinError(11,0.182573);
   hMR_Pb__1->SetBinError(12,0.2000124);
   hMR_Pb__1->SetEntries(23.74136);
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
