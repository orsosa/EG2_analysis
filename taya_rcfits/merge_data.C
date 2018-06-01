{
  TNtuple *tD = new TNtuple("tD","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex");
  TNtuple *tC = new TNtuple("tC","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex");
  TNtuple *tFe = new TNtuple("tFe","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex");
  TNtuple *tPb = new TNtuple("tPb","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex");

  TFile ofile("RCFactors.root","recreate");
  tD->ReadFile("RCFactorD.txt","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex");
  tC->ReadFile("RCFactorC.txt","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex");
  tFe->ReadFile("RCFactorFe.txt","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex");
  tPb->ReadFile("RCFactorPb.txt","Q2:Xb:Zh:Pt:Phi:SigmaB:SigmaOb:Tail1:Taile2:Fact_noex:Fact_ex");

  tD->AddFriend(tC);
  tD->AddFriend(tFe);
  tD->AddFriend(tPb);

  tD->Write();
  tC->Write();
  tFe->Write();
  tPb->Write();

  tD->Draw("Fact_ex>>h(50,0.8,1.2)");
}
