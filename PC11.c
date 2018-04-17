#include<stdio.h>

int main(){
  float a, b;
  int op;
  printf("Digite dois numeros: ");
  scanf("%f%f", &a, &b);
  printf("Digite a operacao desejada:\n");
  printf("101 para Soma\n");
  printf("102 para Subtracao\n");
  printf("103 para Multiplicacao\n");
  printf("104 para Divisao\n");
  scanf("%d", &op);
  switch(op){
    case 101:
    a=a+b;
    printf("%.1f\n", a);
    break;
    case 102:
    a=a-b;
    printf("%.1f\n", a);
    break;
    case 103:
    a=a*b;
    printf("%.1f\n", a);
    break;
    case 104:
    a=a/b;
    printf("%.1f\n", a);
    break;
    default:
    break;
  }
  return 0;
}
