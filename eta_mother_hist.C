void eta_mother_hist()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul 25 15:44:37 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(-1166.667,-823.9876,4166.667,7415.888);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *h__1 = new TH1F("h__1","#eta mother pid",4000,-500,3500);
   h__1->SetBinContent(592,6278);
   h__1->SetBinContent(593,2072);
   h__1->SetBinContent(832,1724);
   h__1->SetEntries(10074);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("h");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 10074  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  132.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   90.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   h__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h__1);
   h__1->SetLineWidth(2);
   h__1->GetXaxis()->SetTitle("pdg code");
   h__1->GetXaxis()->SetLabelFont(22);
   h__1->GetXaxis()->SetLabelSize(0.05);
   h__1->GetXaxis()->SetTitleSize(0.05);
   h__1->GetXaxis()->SetTitleOffset(0.92);
   h__1->GetXaxis()->SetTitleFont(22);
   h__1->GetYaxis()->SetLabelFont(22);
   h__1->GetYaxis()->SetLabelSize(0.05);
   h__1->GetYaxis()->SetTitleSize(0.05);
   h__1->GetYaxis()->SetTitleFont(22);
   h__1->GetZaxis()->SetLabelFont(22);
   h__1->GetZaxis()->SetLabelSize(0.05);
   h__1->GetZaxis()->SetTitleSize(0.05);
   h__1->GetZaxis()->SetTitleFont(22);
   h__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.9401327,0.21591,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("#eta mother pid");
   pt->Draw();
   TLatex *   tex = new TLatex(320.6132,4466.746,"8350/10074 (83%) from cluster or string");
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
