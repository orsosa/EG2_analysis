void Lorentz_x_step()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jul 10 13:36:13 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",92,64,1024,704);
   c1->Range(-37.66667,-7.722596,-16.33333,69.50336);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TF1 *g1 = new TF1("g","-[0]*(TMath::ATan((x-([1]+[2]/2) - [4])/[3]) - TMath::ATan((x-([1]-[2]/2) - [4])/[3]))",-35,-19, TF1::EAddToList::kDefault);
   g1->SetFillColor(19);
   g1->SetFillStyle(0);
   g1->SetLineWidth(3);
   g1->GetXaxis()->SetLabelFont(22);
   g1->GetXaxis()->SetLabelSize(0.05);
   g1->GetXaxis()->SetTitleSize(0.05);
   g1->GetXaxis()->SetTitleFont(22);
   g1->GetYaxis()->SetLabelFont(22);
   g1->GetYaxis()->SetLabelSize(0.05);
   g1->GetYaxis()->SetTitleSize(0.05);
   g1->GetYaxis()->SetTitleFont(22);
   g1->SetParameter(0,20);
   g1->SetParError(0,0);
   g1->SetParLimits(0,0,0);
   g1->SetParameter(1,-30);
   g1->SetParError(1,0);
   g1->SetParLimits(1,0,0);
   g1->SetParameter(2,2);
   g1->SetParError(2,0);
   g1->SetParLimits(2,0,0);
   g1->SetParameter(3,0.1);
   g1->SetParError(3,0);
   g1->SetParLimits(3,0,0);
   g1->SetParameter(4,0);
   g1->SetParError(4,0);
   g1->SetParLimits(4,0,0);
   g1->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.9416307,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("-[0]*(TMath::ATan((x-([1]+[2]/2) - [4])/[3]) - TMath::ATan((x-([1]-[2]/2) - [4])/[3]))");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
