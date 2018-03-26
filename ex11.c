#include<stdio.h>

int main(){
  float tC=60, tD=20, atC, atD, rtC, rtD, rtt;
  scanf("%f", &rtC);
  scanf("%f", &atD);
  rtC=tC*rtC; //reprovados turma C
  atD=tD*atD; //descobrindo quantos aprovados turma D
  rtD=tD-atD; // reprovados turma D
  rtt=(100*(rtC+rtD))/80;
  printf("Numero de reprovados C: %.1f\n", rtC);
  printf("Numero de reprovados D: %.1f\n", rtD);
  printf("Porcentagem Total de Reprovados: %.2f\n", rtt);
  return 0;
}
