#include<stdio.h>

int main(){
  int x, *A, **B, ***C, ****D;
  scanf("%d", &x);
  A=&x;
  B=&A;
  C=&B;
  D=&C;
  printf("Numero Original:%d\nDuplo:%d\nTriplo:%d\nQuadruplo:%d\n",*A, **B*2, ***C*3, ****D*4);
  return 0;
}
