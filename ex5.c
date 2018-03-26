#include<stdio.h>

int main(){
  float r, a, p=3.14;
  scanf("%f", &r);
  a=p*(r*r);
  printf("A area do circulo de raio %.2f eh: %.2f\n", r, a);
  return 0;
}
