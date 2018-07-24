#include<stdio.h>

int main(){
  int op, soma, subt, mult, divs, x, y;
  do{
    printf("-------------------------------------------\n");
    printf("Calculadora:\n");
    printf("Soma - 101\n");
    printf("Subtracao - 102\n");
    printf("Multiplicacao - 103\n");
    printf("Divisao - 104\n");
    printf("-------------------------------------------\n");
    scanf("%d", &op);
    switch(op){
      case 101:
      printf("---------------------Valores----------------------\n");
      scanf("%d%d", &x, &y);
      soma=x+y;
      printf("Soma= %d\n\n", soma);
      break;
      case 102:
      printf("---------------------Valores----------------------\n");
      scanf("%d%d", &x, &y);
      subt=x-y;
      printf("Subtracao= %d\n\n", subt);
      break;
      case 103:
      printf("---------------------Valores----------------------\n");
      scanf("%d%d", &x, &y);
      mult=x*y;
      printf("Multiplicacao= %d\n\n", mult);
      break;
      case 104:
      printf("---------------------Valores----------------------\n");
      scanf("%d%d", &x, &y);
      divs=x/y;
      printf("Divisao= %d\n\n", divs);
      break;
      default:
      break;
    }
  }while(op!=0);
  printf("Saindo do programa...\n");
  return 0;
}
