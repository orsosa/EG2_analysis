void emc_diff()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 14 01:27:47 2018) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",1,1,800,576);
   c->SetHighLightColor(2);
   c->Range(0.07624999,-0.1509375,0.61375,1.358438);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("data/externals comparison");
   Double_t xAxis3[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1F *_stack_1 = new TH1F("_stack_1","data/externals comparison",14, xAxis3);
   _stack_1->SetMinimum(0);
   _stack_1->SetMaximum(1.2075);
   _stack_1->SetDirectory(0);
   _stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _stack_1->SetLineColor(ci);
   _stack_1->GetXaxis()->SetTitle("diff");
   _stack_1->GetXaxis()->SetLabelFont(42);
   _stack_1->GetXaxis()->SetLabelSize(0.035);
   _stack_1->GetXaxis()->SetTitleSize(0.035);
   _stack_1->GetXaxis()->SetTitleFont(42);
   _stack_1->GetYaxis()->SetLabelFont(42);
   _stack_1->GetYaxis()->SetLabelSize(0.035);
   _stack_1->GetYaxis()->SetTitleSize(0.035);
   _stack_1->GetYaxis()->SetTitleOffset(0);
   _stack_1->GetYaxis()->SetTitleFont(42);
   _stack_1->GetZaxis()->SetLabelFont(42);
   _stack_1->GetZaxis()->SetLabelSize(0.035);
   _stack_1->GetZaxis()->SetTitleSize(0.035);
   _stack_1->GetZaxis()->SetTitleFont(42);
   ->SetHistogram(_stack_1);
   
   Double_t xAxis4[15] = {0.13, 0.1607143, 0.1914286, 0.2221429, 0.2528571, 0.2835714, 0.3142857, 0.345, 0.3757143, 0.4064286, 0.4371428, 0.4678572, 0.4985714, 0.5292857, 0.56}; 
   
   TH1D *hC_d_stack_1 = new TH1D("hC_d_stack_1","C",14, xAxis4);
   hC_d_stack_1->SetBinContent(0,0.9820603);
   hC_d_stack_1->SetBinContent(1,-0.03137263);
   hC_d_stack_1->SetBinContent(2,-0.02777035);
   hC_d_stack_1->SetBinContent(3,-0.03246008);
   hC_d_stack_1->SetBinContent(4,-0.03807433);
   hC_d_stack_1->SetBinContent(5,-0.04134471);
   hC_d_stack_1->SetBinContent(6,-0.04473863);
   hC_d_stack_1->SetBinContent(7,-0.04464006);
   hC_d_stack_1->SetBinContent(8,-0.04738622);
   hC_d_stack_1->SetBinContent(9,-0.04649766);
   hC_d_stack_1->SetBinContent(10,-0.04239073);
   hC_d_stack_1->SetBinContent(11,-0.05164288);
   hC_d_stack_1->SetBinContent(12,-0.03954567);
   hC_d_stack_1->SetBinContent(13,-0.03217304);
   hC_d_stack_1->SetBinContent(14,0.01132099);
   hC_d_stack_1->SetBinContent(15,1.866667);
   hC_d_stack_1->SetBinError(0,0.007728229);
   hC_d_stack_1->SetBinError(1,0.001223295);
   hC_d_stack_1->SetBinError(2,0.0009329926);
   hC_d_stack_1->SetBinError(3,0.000889646);
   hC_d_stack_1->SetBinError(4,0.000901196);
   hC_d_stack_1->SetBinError(5,0.0009494716);
   hC_d_stack_1->SetBinError(6,0.001056435);
   hC_d_stack_1->SetBinError(7,0.001214965);
   hC_d_stack_1->SetBinError(8,0.001427734);
   hC_d_stack_1->SetBinError(9,0.001713572);
   hC_d_stack_1->SetBinError(10,0.00213037);
   hC_d_stack_1->SetBinError(11,0.002671511);
   hC_d_stack_1->SetBinError(12,0.003620117);
   hC_d_stack_1->SetBinError(13,0.005456257);
   hC_d_stack_1->SetBinError(14,0.01044703);
   hC_d_stack_1->SetBinError(15,0.4776486);
   hC_d_stack_1->SetMinimum(0.85);
   hC_d_stack_1->SetMaximum(1.15);
   hC_d_stack_1->SetEntries(1002930);

   ci = TColor::GetColor("#ff0000");
   hC_d_stack_1->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hC_d_stack_1->SetMarkerColor(ci);
   hC_d_stack_1->SetMarkerStyle(36);
   hC_d_stack_1->GetXaxis()->SetLabelFont(42);
   hC_d_stack_1->GetXaxis()->SetLabelSize(0.035);
   hC_d_stack_1->GetXaxis()->SetTitleSize(0.035);
   hC_d_stack_1->GetXaxis()->SetTitleFont(42);
   hC_d_stack_1->GetYaxis()->SetLabelFont(42);
   hC_d_stack_1->GetYaxis()->SetLabelSize(0.035);
   hC_d_stack_1->GetYaxis()->SetTitleSize(0.035);
   hC_d_stack_1->GetYaxis()->SetTitleFont(42);
   hC_d_stack_1->GetZaxis()->SetLabelFont(42);
   hC_d_stack_1->GetZaxis()->SetLabelSize(0.035);
   hC_d_stack_1->GetZaxis()->SetTitleSize(0.035);
   hC_d_stack_1->GetZaxis()->SetTitleFont(42);
   ->Add(hC_d_stack_1,"");
   ->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.2601005,0.9341608,0.7398995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("data/externals comparison");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
