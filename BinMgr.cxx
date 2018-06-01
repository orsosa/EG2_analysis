#include <sys/stat.h>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

class BinMgr{
public:
  Int_t Nf;
  Int_t *ind;
  Int_t *Nb;
  Int_t N;
  Float_t **BinEdges;
  Char_t **BinName;
  Int_t *NEdges;
  Int_t *bo;

  BinMgr(const char *bfile ="binning_info.txt") 
  {
    bo=new Int_t[Nf];
    get_bin_info(bfile);
    ind = new Int_t[Nf];
    N=Nb[0];
    for (int k=1;k<Nf;k++)N*=Nb[k];
  }


  BinMgr(Int_t Nfa,Int_t *Nba):Nf(Nfa),Nb(Nba) 
  {
    ind = new Int_t[Nf];
    bo=new Int_t[Nf];
    for (int k=0;k<Nf;k++){bo[k]=k;}
    N=Nb[0];

    for (int k=1;k<Nf;k++)N*=Nb[k];
  }

  ~BinMgr()
  {
    delete[] ind;
    delete[] bo;
    delete[] NEdges;
    delete[] BinName;
    delete[] BinEdges;
    delete[] Nb;
  }

  int prod(int k)
  {
    int r=1;
    for (int m=0;m<=k;m++) r*=Nb[bo[m]];
    return r;
  }
  void  set_bin_order(Int_t n,Int_t *ind)
  {
    for (int k=0;k<n;k++)
    {
      bo[k]=ind[k];
    }
  }
  int get_code(Int_t *bn)
  {
    int r=0;
    for (int l=0;l<Nf;l++)
    {
      r+=bn[l]*prod(l-1);
    }
    return r;
  }
  void get_index(int k)
  {
    for (int l =0;l<Nf;l++)
    {
      ind[l] =(int((k/prod(l-1)))%Nb[bo[l]]);
    }
  }
  void print_index()
  {
   
    std::cout<<"k:::::::ind0/max0::ind1/max1::...\n";
    for (int k=0;k<N;k++)
    {
      std::cout<<k<<":::::::";
      get_index(k);
      for (int l=0;l<Nf;l++)
      	std::cout<<ind[l]<<"/"<<Nb[bo[l]]-1<<"::";

      std::cout<<get_code(ind);
      std::cout<<std::endl;
    }
    
  }
  void get_bin_info(const char *bfile ="binning_info.txt")
  {
    char *bfile_f = Form("%s_formatted.txt",bfile);
    struct stat sb;
    if (stat(bfile, &sb) != 0)
    {
      std::cout<<Form("Error: file %s doesn't exist!\n",bfile);
      exit(1);
    }
    system(Form("awk -v c=0 \'!/#|!|+|?/{c+=1};END {print c}\' %s > lc.txt",bfile));
    system(Form("awk \'!/#|!|+|?/{print NF,$0}\' %s>%s",bfile,bfile_f));
    std::ifstream fc("lc.txt");
    fc>>Nf;
    fc.close();
    system("rm lc.txt");
    NEdges = new Int_t[Nf];
    Nb = new Int_t[Nf];
    BinName = new Char_t*[Nf];
    BinEdges = new Float_t*[Nf];
    std::ifstream binfile(bfile_f);
    int NB = 200;
    int be=0;
    char line[NB];
    TString s;
    TString tok;
    for (int k_f =0; k_f<Nf;k_f++)
    {
      Ssiz_t from=0;
      binfile.getline(line,NB);
      s.Clear();
      s.Insert(0,line);
      s=s.Strip(TString::kBoth);
      s.Tokenize(tok,from);
      cout<<tok<<endl;
      be=tok.Atoi()-1;
      NEdges[k_f]=be;
      Nb[k_f]=be-1;
      bo[k_f]=k_f;
      BinEdges[k_f]=new Float_t[be];
      s.Tokenize(tok,from);
      cout<<tok.Data()<<endl;
      BinName[k_f] = new Char_t[5];
      strcpy(BinName[k_f],tok.Data());
      for (int k=0;k<be;k++)
      {
	s.Tokenize(tok,from);
	BinEdges[k_f][k]=tok.Atof();
      }
    }
    
    for (int k_f =0; k_f<Nf;k_f++)
    {
      for (int k=0;k<NEdges[k_f];k++)
      {
	cout<<"\t"<<BinEdges[k_f][k];
      }
      cout<<endl;
    }
  }
};

