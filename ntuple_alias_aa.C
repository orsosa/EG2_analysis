{
TChain *t = new TChain();
t->Add("pruned_*.root/ntuple_data");
t->SetAlias("Rt","TMath::Sqrt(ECX*ECX+ECY*ECY)");
t->SetAlias("R_vze","TMath::Sqrt(ECX*ECX+ECY*ECY+(ECZ-Ze)*(ECZ-Ze))");
t->SetAlias("R_vzec","TMath::Sqrt(ECX*ECX+ECY*ECY+(ECZ-Zec)*(ECZ-Zec))");
t->SetAlias("th_vze","TMath::ASin(Rt/R_vze)");
t->SetAlias("th_vzec","TMath::ASin(Rt/R_vzec)");
t->SetAlias("phi","(TMath::ATan(ECY/ECX)*(ECX>0) + (TMath::ATan(ECY/ECX)+TMath::Pi())*(ECX<0&&ECY>0) + (TMath::ATan(ECY/ECX)-TMath::Pi())*(ECX<0&&ECY<0))");
t->SetAlias("Px_vze","E*TMath::Sin(th_vze)*TMath::Cos(phi)");
t->SetAlias("Px_vzec","E*TMath::Sin(th_vzec)*TMath::Cos(phi)");
t->SetAlias("Py_vze","E*TMath::Sin(th_vze)*TMath::Sin(phi)");
t->SetAlias("Py_vzec","E*TMath::Sin(th_vzec)*TMath::Sin(phi)");
t->SetAlias("Pz_vze","E*TMath::Cos(th_vze)");
t->SetAlias("Pz_vzec","E*TMath::Cos(th_vzec)");

//t->Draw("(Px_vze-Px_vze)/Px_vze*100:Px_vze>>h(500,-3,3,500,-2,2)","pid==22","colz");
}
