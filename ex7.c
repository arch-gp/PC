#include<stdio.h>

int main(){
  float C, F;
  scanf("%f", &F);
  C=(5*(F-32))/9;
  printf("Graus Celsius: %.2f\n", C);
  return 0;
}
