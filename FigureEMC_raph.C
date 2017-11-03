{
  TCanvas *Plot = new TCanvas("NewFigEMC", "EMC ratio",204,49,800,350);
   Plot->Range(0,0,1,1);
   Plot->SetFillColor(0);
   Plot->SetBorderMode(0);
   Plot->SetBorderSize(2);
   Plot->SetFrameBorderMode(0);
   Plot->SetLeftMargin(0.09);
   Plot->SetRightMargin(0.01);
   Plot->SetTopMargin(0.03);
   
   TH2D *Can = new TH2D("Can"," ",100,-0.05,0.95,100,0.85,1.15);
   Can->SetStats(0);
   Can->GetXaxis()->SetLabelSize(0.05);
   Can->GetXaxis()->SetTitleSize(0.06);
   Can->GetXaxis()->SetTitleOffset(0.7);
   Can->GetXaxis()->SetTitle("x_{Bj}");
   Can->GetXaxis()->CenterTitle(true);
   Can->GetYaxis()->SetLabelSize(0.05);
   Can->GetYaxis()->SetTitleSize(0.06);
   Can->GetYaxis()->SetTitleOffset(0.7);
   Can->GetYaxis()->SetTitle("#sigma_{C} / #sigma_{D}");
   Can->GetYaxis()->CenterTitle(true);
   Can->Draw("");
   
   JLab = new TGraphErrors(26);
   JLab->SetName("Graph");
   JLab->SetTitle("Graph");
   JLab->SetFillColor(1);
   JLab->SetMarkerStyle(22);
   JLab->SetPoint( 0,0.3250,0.1015E+01); JLab->SetPointError( 0,0,0.5161E-02);
   JLab->SetPoint( 1,0.3500,0.1011E+01); JLab->SetPointError( 1,0,0.4849E-02);
   JLab->SetPoint( 2,0.3750,0.1003E+01); JLab->SetPointError( 2,0,0.4739E-02);
   JLab->SetPoint( 3,0.4000,0.9859E+00); JLab->SetPointError( 3,0,0.3835E-02);
   JLab->SetPoint( 4,0.4250,0.9798E+00); JLab->SetPointError( 4,0,0.4883E-02);
   JLab->SetPoint( 5,0.4500,0.9743E+00); JLab->SetPointError( 5,0,0.4507E-02);
   JLab->SetPoint( 6,0.4750,0.9617E+00); JLab->SetPointError( 6,0,0.3800E-02);
   JLab->SetPoint( 7,0.5000,0.9553E+00); JLab->SetPointError( 7,0,0.5039E-02);
   JLab->SetPoint( 8,0.5250,0.9485E+00); JLab->SetPointError( 8,0,0.4466E-02);
   JLab->SetPoint( 9,0.5500,0.9401E+00); JLab->SetPointError( 9,0,0.5310E-02);
   JLab->SetPoint(10,0.5750,0.9380E+00); JLab->SetPointError(10,0,0.4562E-02);
   JLab->SetPoint(11,0.6000,0.9274E+00); JLab->SetPointError(11,0,0.3899E-02);
   JLab->SetPoint(12,0.6250,0.9291E+00); JLab->SetPointError(12,0,0.5972E-02);
   JLab->SetPoint(13,0.6500,0.9191E+00); JLab->SetPointError(13,0,0.4997E-02);
   JLab->SetPoint(14,0.6750,0.9162E+00); JLab->SetPointError(14,0,0.5283E-02);
   JLab->SetPoint(15,0.7000,0.9107E+00); JLab->SetPointError(15,0,0.6811E-02);
   JLab->SetPoint(16,0.7250,0.8920E+00); JLab->SetPointError(16,0,0.4773E-02);
   JLab->SetPoint(17,0.7500,0.9044E+00); JLab->SetPointError(17,0,0.5393E-02);
   JLab->SetPoint(18,0.7750,0.9168E+00); JLab->SetPointError(18,0,0.6706E-02);
   JLab->SetPoint(19,0.8000,0.9386E+00); JLab->SetPointError(19,0,0.7347E-02);
   JLab->SetPoint(20,0.8250,0.9642E+00); JLab->SetPointError(20,0,0.8180E-02);
   JLab->SetPoint(21,0.8500,0.1033E+01); JLab->SetPointError(21,0,0.9618E-02);
   JLab->SetPoint(22,0.8750,0.1118E+01); JLab->SetPointError(22,0,0.1592E-01);
   JLab->SetPoint(23,0.9000,0.1172E+01); JLab->SetPointError(23,0,0.1275E-01);
   JLab->SetPoint(24,0.9250,0.1210E+01); JLab->SetPointError(24,0,0.1162E-01);
   JLab->SetPoint(25,0.9500,0.1313E+01); JLab->SetPointError(25,0,0.2477E-01);
   JLab->Draw("pez");

   NMC = new TGraphErrors(18);
   NMC->SetName("Graph");
   NMC->SetTitle("Graph");
   NMC->SetFillColor(1);
   NMC->SetMarkerStyle(20);
   NMC->SetPoint( 0,0.0035,0.902); NMC->SetPointError( 0,0,0.018);
   NMC->SetPoint( 1,0.0055,0.912); NMC->SetPointError( 1,0,0.011);
   NMC->SetPoint( 2,0.0085,0.920); NMC->SetPointError( 2,0,0.011);
   NMC->SetPoint( 3,0.0125,0.926); NMC->SetPointError( 3,0,0.009);
   NMC->SetPoint( 4,0.0175,0.953); NMC->SetPointError( 4,0,0.010);
   NMC->SetPoint( 5,0.025 ,0.957); NMC->SetPointError( 5,0,0.008);
   NMC->SetPoint( 6,0.035 ,0.983); NMC->SetPointError( 6,0,0.009);
   NMC->SetPoint( 7,0.045 ,0.975); NMC->SetPointError( 7,0,0.010);
   NMC->SetPoint( 8,0.055 ,1.004); NMC->SetPointError( 8,0,0.012);
   NMC->SetPoint( 9,0.07  ,1.025); NMC->SetPointError( 9,0,0.010);
   NMC->SetPoint(10,0.09  ,1.039); NMC->SetPointError(10,0,0.012);
   NMC->SetPoint(11,0.125 ,1.027); NMC->SetPointError(11,0,0.009);
   NMC->SetPoint(12,0.175 ,1.024); NMC->SetPointError(12,0,0.012);
   NMC->SetPoint(13,0.25  ,1.010); NMC->SetPointError(13,0,0.012);
   NMC->SetPoint(14,0.35  ,0.974); NMC->SetPointError(14,0,0.018);
   NMC->SetPoint(15,0.45  ,1.021); NMC->SetPointError(15,0,0.030);
   NMC->SetPoint(16,0.55  ,0.970); NMC->SetPointError(16,0,0.046);
   NMC->SetPoint(17,0.65  ,0.846); NMC->SetPointError(17,0,0.062);
   NMC->SetMarkerSize(0.8);
   NMC->Draw("pez");

   SLAC = new TGraphErrors(6);
   SLAC->SetName("Graph");
   SLAC->SetTitle("Graph");
   SLAC->SetFillColor(1);
   SLAC->SetMarkerStyle(21);
   SLAC->SetPoint( 0,0.22,0.999); SLAC->SetPointError( 0,0,0.013);
   SLAC->SetPoint( 1,0.30,1.009); SLAC->SetPointError( 1,0,0.015);
   SLAC->SetPoint( 2,0.40,0.977); SLAC->SetPointError( 2,0,0.009);
   SLAC->SetPoint( 3,0.50,0.944); SLAC->SetPointError( 3,0,0.01 );
   SLAC->SetPoint( 4,0.60,0.91 ); SLAC->SetPointError( 4,0,0.008);
   SLAC->SetPoint( 5,0.70,0.888); SLAC->SetPointError( 5,0,0.008);
   SLAC->SetMarkerSize(0.8);
   SLAC->Draw("pez");

   l1 = new TLine(-0.05,1.0,0.95,1.0);
   l1->SetLineStyle(3);
   l1->Draw();
   l2 = new TLine(0.05,1.15,0.05,0.85);
   l2->SetLineStyle(2);
   l2->Draw();
   l3 = new TLine(0.351,1.15,0.351,0.85);
   l3->SetLineStyle(2);
   l3->Draw();
   l4 = new TLine(0.84,1.15,0.84,0.85);
   l4->SetLineStyle(2);
   l4->Draw();

   TLatex Tl;
   Tl.SetTextSize(0.044);
   Tl.SetTextAlign(12);
   y = 0.96; x1 = 0.02; x2 = x1+0.04;
   Tl.SetTextAngle(90);
   Tl.DrawLatex(-.00, 1.035, "Shadowing");
   Tl.SetTextAngle(0);
   Tl.DrawLatex(0.125, 1.09, "Anti-shadowing");
   Tl.DrawLatex(0.54, 1.09, "EMC effect");
   Tl.SetTextAngle(90);
   Tl.DrawLatex(0.9, 1.035, "Fermi motion");

   TLegend* leg = new TLegend(0.23, 0.19, .39, .39);
   leg->AddEntry(SLAC, "SLAC E139", "p");
   leg->AddEntry(NMC, "CERN NMC", "p");
   leg->AddEntry(JLab, "JLab E03103", "p");
   leg->Draw();
// E665 = new TGraphErrors(18);
// E665->SetName("Graph");
// E665->SetTitle("Graph");
// E665->SetFillColor(1);
// E665->SetMarkerStyle(28);
// E665->SetPoint( 0,2.35E-4 ,0.867); E665->SetPointError( 0,0,0.085);
// E665->SetPoint( 1,6.2E-4  ,0.912); E665->SetPointError( 1,0,0.037);
// E665->SetPoint( 2,0.0011  ,0.924); E665->SetPointError( 2,0,0.021);
// E665->SetPoint( 3,0.00169 ,0.97 ); E665->SetPointError( 3,0,0.047);
// E665->SetPoint( 4,0.002605,0.926); E665->SetPointError( 4,0,0.019);
// E665->SetPoint( 5,0.004015,0.941); E665->SetPointError( 5,0,0.029);
// E665->SetPoint( 6,0.006184,0.973); E665->SetPointError( 6,0,0.028);
// E665->SetPoint( 7,0.011525,1.023); E665->SetPointError( 7,0,0.029);
// E665->SetPoint( 8,0.020275,1.055); E665->SetPointError( 8,0,0.061);
// E665->SetPoint( 9,0.04    ,1.034); E665->SetPointError( 9,0,0.021);
// E665->SetPoint(10,0.30867 ,1.019); E665->SetPointError(10,0,0.06);
// E665->Draw("pe");

}





















