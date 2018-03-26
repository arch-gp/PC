#include<stdio.h>

int main(){
  float alt, comp, larg, a1, a2, azu;
  scanf("%f", &alt);
  scanf("%f", &comp);
  scanf("%f", &larg);
  a1=alt*comp;
  a2=alt*larg;
  azu=((a1+a2)*15)/10;
  printf("%.2f azuleijos sao necessarios\n", azu);
  return 0;
}
