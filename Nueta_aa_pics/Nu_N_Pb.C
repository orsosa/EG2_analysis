void Nu_N_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:49:49 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(1.858333,-69.26831,4.591667,623.4147);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis17[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hs_px__17 = new TH1D("hs_px__17","N hadrons C",5, xAxis17);
   hs_px__17->SetBinContent(1,236.2749);
   hs_px__17->SetBinContent(2,311.0114);
   hs_px__17->SetBinContent(3,468.2691);
   hs_px__17->SetBinContent(4,447.5572);
   hs_px__17->SetBinContent(5,303.5818);
   hs_px__17->SetBinError(1,44.46041);
   hs_px__17->SetBinError(2,93.29572);
   hs_px__17->SetBinError(3,59.48941);
   hs_px__17->SetBinError(4,52.09771);
   hs_px__17->SetBinError(5,57.27802);
   hs_px__17->SetEntries(154.4025);
   hs_px__17->SetStats(0);
   hs_px__17->SetLineWidth(3);
   hs_px__17->SetMarkerStyle(8);
   hs_px__17->SetMarkerSize(3);
   hs_px__17->GetXaxis()->SetTitle("#nu ((GeV)");
   hs_px__17->GetXaxis()->SetRange(1,5);
   hs_px__17->GetXaxis()->SetLabelFont(22);
   hs_px__17->GetXaxis()->SetLabelSize(0.05);
   hs_px__17->GetXaxis()->SetTitleSize(0.05);
   hs_px__17->GetXaxis()->SetTickLength(0.01);
   hs_px__17->GetXaxis()->SetTitleOffset(0.85);
   hs_px__17->GetXaxis()->SetTitleFont(22);
   hs_px__17->GetYaxis()->SetLabelFont(22);
   hs_px__17->GetYaxis()->SetLabelSize(0.05);
   hs_px__17->GetYaxis()->SetTitleSize(0.05);
   hs_px__17->GetYaxis()->SetTitleFont(22);
   hs_px__17->GetZaxis()->SetLabelFont(22);
   hs_px__17->GetZaxis()->SetLabelSize(0.05);
   hs_px__17->GetZaxis()->SetTitleSize(0.05);
   hs_px__17->GetZaxis()->SetTitleFont(22);
   hs_px__17->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2337618,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
