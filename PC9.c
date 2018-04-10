#include<stdio.h>

int main(){
  float HT, VH, PD, SB, TD, SL;
  scanf("%f", &HT);
  scanf("%f", &VH);
  scanf("%f", &PD);
  SB=HT*VH;
  TD=(PD/100)*SB;
  SL=SB-TD;
  printf("Salario Bruto: %.2f\nTotal de Desconto: %.2f\nSalario Liquido: %.2f\n", SB, TD, SL);
  return 0;
}
