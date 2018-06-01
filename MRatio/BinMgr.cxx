#include <sys/stat.h>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <TString.h>
class BinMgr{
public:
  Int_t Nf;
  Int_t *ind;
  Int_t *Nb;
  Int_t N,NY,NX;
  Double_t **BinEdges;
  Char_t **BinName;
  Int_t *NEdges;
  Int_t *bo;
  TString BinSchema;

  BinMgr(const char *bfile ="binning_info.txt") 
  {
    bo=new Int_t[Nf];
    getBinInfo(bfile);
    ind = new Int_t[Nf];
    N=Nb[0];
    for (int k=1;k<Nf;k++){N*=Nb[k];};
    NY=Nb[0];
    for (int k=1;k<Nf-1;k++){NY*=Nb[k];}

  }


  BinMgr(Int_t Nfa,Int_t *Nba):Nf(Nfa),Nb(Nba) 
  {
    ind = new Int_t[Nf];
    bo=new Int_t[Nf];
    for (int k=0;k<Nf;k++){bo[k]=k;}
    N=Nb[0];
    for (int k=1;k<Nf;k++)N*=Nb[k];
    NY=Nb[0];
    for (int k=1;k<Nf-1;k++){NY*=Nb[k];}

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

  int prodRaw(int k)
  {
    int r=1;
    for (int m=0;m<=k;m++) r*=Nb[m];
    return r;
  }

  void  setBinOrder(std::vector<int> ii)
  {
    for (int k=0;k<Nf;k++)
    {
      bo[k]=ii[k];
    }
    NY=Nb[bo[0]];
    for (int k=1;k<Nf-1;k++){NY*=Nb[bo[k]];};

  }

  void  setBinOrder(Int_t *ii)
  {
    for (int k=0;k<Nf;k++)
    {
      bo[k]=ii[k];
    }
    NY=Nb[bo[0]];
    for (int k=1;k<Nf-1;k++){NY*=Nb[bo[k]];};

  }

  int getCodeY(Int_t *bn)
  {
    int r=0;
    for (int l=0;l<Nf-1;l++)
    {
      r+=bn[bo[l]]*prod(l-1);
    }
    return r;
  }

  int getCodeX(Int_t *bn)
  {
    int r=0;
    Int_t l=Nf-1;
    r+=bn[bo[l]];
    return r;
  }
  

  int getCode(Int_t *bn)
  {
    int r=0;
    for (int l=0;l<Nf;l++)
    {
      r+=bn[bo[l]]*prod(l-1);
    }
    return r;
  }

  int getCodeRaw(Int_t *bn)
  {
    int r=0;
    for (int l=0;l<Nf;l++)
    {
      r+=bn[l]*prodRaw(l-1);
    }
    return r;
  }


  void getIndexY(int k)
  {
    for (int l =0;l<Nf-1;l++)
    {
      ind[bo[l]] =(int((k/prod(l-1)))%Nb[bo[l]]);
    }
  }

  void getIndexX(int k)
  {
    int l=Nf-1;
    ind[bo[l]] =(int((k/prod(l-1)))%Nb[bo[l]]);
  }
  
  void getIndex(int k)
  {
    for (int l =0;l<Nf;l++)
    {
      ind[bo[l]] =(int((k/prod(l-1)))%Nb[bo[l]]);
    }
  }

  void getIndexRaw(int k)
  {
    for (int l =0;l<Nf;l++)
    {
      ind[l] =(int((k/prodRaw(l-1)))%Nb[l]);
    }
  }


  char *getName(Int_t k)
  {
    return BinName[bo[k]];
  }

  char* getNameX()
  {
    return BinName[bo[Nf-1]];
  }


  TString getBinSchema()
  {
    BinSchema=getName(0);
    for (int k=0;k<Nf;k++)
    {
      BinSchema.Append("_");
      BinSchema.Append(getName(k));
    }
    return BinSchema;
  }
  
  TString getBinInfo()
  {
    TString binfo=BinSchema.Copy();
    return "(" + binfo.ReplaceAll("_",",") + ")";
  }
  
  Double_t *getBinEdges(Int_t k)
  {
    return BinEdges[bo[k]];
  }

  Double_t *getBinEdgesX()
  {
    return BinEdges[bo[Nf-1]];
  }

  Int_t getNEdgesX()
  {
    NX=NEdges[bo[Nf-1]];
    return NEdges[bo[Nf-1]];
  }

  void printIndexY()
  {
   
    std::cout<<"k:::::::ind0/max0::ind1/max1::...\n";
    for (int k=0;k<NY;k++)
    {
      std::cout<<k<<":::::::";
      getIndexY(k);
      for (int l=0;l<Nf-1;l++)
      	std::cout<<ind[bo[l]]<<"/"<<Nb[bo[l]]-1<<"::";

      std::cout<<getCodeY(ind);
      std::cout<<std::endl;
    }
    
  }

  void printIndex()
  {
   
    std::cout<<"k:::::::ind0/max0::ind1/max1::...\n";
    for (int k=0;k<N;k++)
    {
      std::cout<<k<<":::::::";
      getIndex(k);
      for (int l=0;l<Nf;l++)
      	std::cout<<ind[bo[l]]<<"/"<<Nb[bo[l]]-1<<"::";

      std::cout<<getCode(ind);
      std::cout<<std::endl;
    }
    
  }

  void printIndexXY()
  {
   
    std::cout<<"k:::::::indy0/maxy0::indy1/maxy1::...indx\n";
    for (int k=0;k<N;k++)
    {
      std::cout<<k<<":::::::";
      getIndexY(k);
      getIndexX(k);
      for (int l=0;l<Nf;l++)
      	std::cout<<ind[bo[l]]<<"/"<<Nb[bo[l]]-1<<"::";
      
      std::cout<<getCodeY(ind);
      std::cout<<std::endl;
    }
    
  }

  
  void printIndexRaw()
  {
   
    std::cout<<"k:::::::ind0/max0::ind1/max1::...\n";
    for (int k=0;k<N;k++)
    {
      std::cout<<k<<":::::::";
      getIndexRaw(k);
      for (int l=0;l<Nf;l++)
      	std::cout<<ind[l]<<"/"<<Nb[l]-1<<"::";

      std::cout<<getCodeRaw(ind);
      std::cout<<std::endl;
    }
    
  }

  
  void getBinInfo(const char *bfile ="binning_info.txt")
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
    BinEdges = new Double_t*[Nf];
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
      std::cout<<tok<<std::endl;
      be=tok.Atoi()-1;
      NEdges[k_f]=be;
      Nb[k_f]=be-1;
      bo[k_f]=k_f;
      BinEdges[k_f]=new Double_t[be];
      s.Tokenize(tok,from);
      std::cout<<tok.Data()<<std::endl;
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
	std::cout<<"\t"<<BinEdges[k_f][k];
      }
      std::cout<<std::endl;
    }
  }
};

