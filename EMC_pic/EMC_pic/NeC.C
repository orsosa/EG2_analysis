{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun  6 18:02:53 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,0,1024,768);
   c->Range(0.07498826,-321867.4,0.6136854,2896807);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(14);
   gre->SetName("gCC");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(8);
   gre->SetPoint(0,0.1484486,1086004);
   gre->SetPointError(0,6.137587e-10,1042.115);
   gre->SetPoint(1,0.1765678,1893698);
   gre->SetPointError(1,6.633116e-10,1376.117);
   gre->SetPoint(2,0.2067874,2062245);
   gre->SetPointError(2,6.669474e-10,1436.052);
   gre->SetPoint(3,0.2373237,1981589);
   gre->SetPointError(3,6.6748e-10,1407.689);
   gre->SetPoint(4,0.2677469,1765689);
   gre->SetPointError(4,6.655666e-10,1328.792);
   gre->SetPoint(5,0.2982394,1409551);
   gre->SetPointError(5,6.667061e-10,1187.245);
   gre->SetPoint(6,0.3288335,1060490);
   gre->SetPointError(6,6.661412e-10,1029.801);
   gre->SetPoint(7,0.3594254,754211);
   gre->SetPointError(7,6.650215e-10,868.4532);
   gre->SetPoint(8,0.3900298,517581);
   gre->SetPointError(8,6.643053e-10,719.431);
   gre->SetPoint(9,0.420534,332493);
   gre->SetPointError(9,6.628015e-10,576.6221);
   gre->SetPoint(10,0.4512632,203568);
   gre->SetPointError(10,6.614926e-10,451.1851);
   gre->SetPoint(11,0.4814394,113385);
   gre->SetPointError(11,6.578352e-10,336.7269);
   gre->SetPoint(12,0.5115493,50062);
   gre->SetPointError(12,6.516239e-10,223.7454);
   gre->SetPoint(13,0.5402267,15149);
   gre->SetPointError(13,5.838186e-10,123.0813);
   
   TH1F *Graph_gCC1 = new TH1F("Graph_gCC1","Graph",100,0.1092708,0.5794045);
   Graph_gCC1->SetMinimum(0);
   Graph_gCC1->SetMaximum(2268547);
   Graph_gCC1->SetDirectory(0);
   Graph_gCC1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gCC1->SetLineColor(ci);
   Graph_gCC1->GetXaxis()->SetLabelFont(42);
   Graph_gCC1->GetXaxis()->SetLabelSize(0.035);
   Graph_gCC1->GetXaxis()->SetTitleSize(0.035);
   Graph_gCC1->GetXaxis()->SetTitleFont(42);
   Graph_gCC1->GetYaxis()->SetLabelFont(42);
   Graph_gCC1->GetYaxis()->SetLabelSize(0.035);
   Graph_gCC1->GetYaxis()->SetTitleSize(0.035);
   Graph_gCC1->GetYaxis()->SetTitleFont(42);
   Graph_gCC1->GetZaxis()->SetLabelFont(42);
   Graph_gCC1->GetZaxis()->SetLabelSize(0.035);
   Graph_gCC1->GetZaxis()->SetTitleSize(0.035);
   Graph_gCC1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gCC1);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(14);
   gre->SetName("gCD");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   gre->SetPoint(0,0.148447,1304059);
   gre->SetPointError(0,5.130693e-10,1141.954);
   gre->SetPoint(1,0.176571,2251524);
   gre->SetPointError(1,5.563997e-10,1500.508);
   gre->SetPoint(2,0.2067842,2451473);
   gre->SetPointError(2,5.584423e-10,1565.718);
   gre->SetPoint(3,0.2373333,2362338);
   gre->SetPointError(3,5.590946e-10,1536.99);
   gre->SetPoint(4,0.2677626,2109560);
   gre->SetPointError(4,5.577927e-10,1452.432);
   gre->SetPoint(5,0.298257,1686027);
   gre->SetPointError(5,5.586078e-10,1298.471);
   gre->SetPoint(6,0.3288306,1266079);
   gre->SetPointError(6,5.576826e-10,1125.202);
   gre->SetPoint(7,0.359461,904095);
   gre->SetPointError(7,5.575808e-10,950.8391);
   gre->SetPoint(8,0.3900353,621152);
   gre->SetPointError(8,5.563045e-10,788.132);
   gre->SetPoint(9,0.4205296,399746);
   gre->SetPointError(9,5.546869e-10,632.2547);
   gre->SetPoint(10,0.4512351,247457);
   gre->SetPointError(10,5.540858e-10,497.4505);
   gre->SetPoint(11,0.4814263,135905);
   gre->SetPointError(11,5.504034e-10,368.653);
   gre->SetPoint(12,0.5115144,59889);
   gre->SetPointError(12,5.444566e-10,244.7223);
   gre->SetPoint(13,0.5396271,17293);
   gre->SetPointError(13,4.689275e-10,131.5029);
   
   TH1F *Graph_gCD2 = new TH1F("Graph_gCD2","Graph",100,0.1093289,0.5787451);
   Graph_gCD2->SetMinimum(0);
   Graph_gCD2->SetMaximum(2696626);
   Graph_gCD2->SetDirectory(0);
   Graph_gCD2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gCD2->SetLineColor(ci);
   Graph_gCD2->GetXaxis()->SetLabelFont(42);
   Graph_gCD2->GetXaxis()->SetLabelSize(0.035);
   Graph_gCD2->GetXaxis()->SetTitleSize(0.035);
   Graph_gCD2->GetXaxis()->SetTitleFont(42);
   Graph_gCD2->GetYaxis()->SetLabelFont(42);
   Graph_gCD2->GetYaxis()->SetLabelSize(0.035);
   Graph_gCD2->GetYaxis()->SetTitleSize(0.035);
   Graph_gCD2->GetYaxis()->SetTitleFont(42);
   Graph_gCD2->GetZaxis()->SetLabelFont(42);
   Graph_gCD2->GetZaxis()->SetLabelSize(0.035);
   Graph_gCD2->GetZaxis()->SetTitleSize(0.035);
   Graph_gCD2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gCD2);
   
   multigraph->Add(gre,"");
   multigraph->Draw("ap");
   multigraph->GetXaxis()->SetNdivisions(520);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.02);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
