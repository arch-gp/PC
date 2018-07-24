#include<stdio.h>

int main(){
  float HT, VH, PD, SB, TD, SL;
  printf("Horas Trabalhadas: ");
  scanf("%f", &HT);
  printf("Valor da Hora Trabalhada: ");
  scanf("%f", &VH);
  printf("Percentual de Desconto: ");
  scanf("%f", &PD);
  SB=HT*VH;
  TD=(PD/100)*SB;
  SL=SB-TD;
  printf("Horas Trabalhadas: %.1f\nSalario Bruto: %.2f\nDesconto: %.1f\nSalario Liquido: %.2f\n", HT, SB, PD, SL);
  return 0;
}
