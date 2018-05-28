#include<stdio.h>

int main(){
  int A, *B, **C, ***D;
  scanf("%d", &A);
  B=&A;
  C=&B;
  D=&C;
  printf("Num:%d\nDuplo:%d\nTriplo:%d\nQuadruplo:%d\n", A, *B*2, **C*3, ***D*4);
  return 0;
}
