#include<stdio.h>

int main(){
  int S, A, B, C, D, E, D7;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);
  scanf("%d", &E);
  S= (6*A)+(5*B)+(4*C)+(3*D)+(2*E);
  printf("%d\n", S);
  D7=S%7;
  printf("%d", D7);
  return 0;
}
