#include<stdio.h>

int main(){
  int m, a=0, r=0;
  float n1, n2, n3, nf;
  do{
  printf("Digite a matricula: ");
  scanf("%d", &m);
  printf("Digite as notas: ");
  scanf("%f%f%f", &n1, &n2, &n3);
  nf=((2*n1)+(3*n2)+(4*n3))/9;
    if(nf>=5){
      printf("Matricula: %d\nNota: %.2f\nAprovado\n", m, nf);
      a=a+1;
    }else{
      printf("Matricula: %d\nNota: %.2f\nReprovado\n", m, nf);
      r=r+1;
    }
  }while(m>9999);
  printf("Reprovados: %d\n", r);
  printf("Aprovados: %d\n", a);
  return 0;
}
