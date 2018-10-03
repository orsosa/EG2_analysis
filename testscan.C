{
  TFile fin("eta_3pi_st.root");
  TTree *t =(TTree*)fin.Get("outdata");
  t->SetScanField(0);
  t->Scan();
  
}
