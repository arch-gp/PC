#include<stdio.h>

int main(){
  float si, sf, rs;
  scanf("%f", &si);
  scanf("%f", &rs);
  rs=si*rs;
  sf=si+rs;
  printf("Salario reajustado: RS%.2f\n", sf);
  return 0;
}
