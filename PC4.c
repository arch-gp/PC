#include<stdio.h>
#include<math.h>

int main(){
  int NF, NB, NM, PF, PB, PM, F, B, M, T;
  //pratos
  scanf("%d%d%d", &NF, &NB, &NM);
  //passageiros
  scanf("%d%d%d", &PF, &PB, &PM);
  if(NF<PF){
    F=NF-PF;
  }else if(NF==PF){
    F=0;
  }else{
    F=0;
  }
  if(NB<PB){
    B=NB-PB;
  }else if(NB==PB){
    B=0;
  }else{
    B=0;
  }
  if(NM<PM){
    M=NM-PM;
  }else if(NM==PM){
    M=0;
  }else{
    M=0;
  }
  T=F+B+M;
  T=abs(T);
  printf("%d", T);
  return 0;
}
