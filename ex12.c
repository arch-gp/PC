#include<stdio.h>

int main(){
  float n1, n2, nf;
  scanf("%f", &n1);
  scanf("%f", &n2);
  nf=(n1+n2)/2;
  if(nf<3){
    printf("Media: %.2f\n", nf);
    printf("Aluno Reprovado\n");
  }else if(nf>=3 && nf<7){
    printf("Media: %.2f\n", nf);
    printf("Aluno em Exame\n");
  }else{
    printf("Media: %.2f\n", nf);
    printf("Aluno Aprovado\n");
  }
  return 0;
}
