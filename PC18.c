#include<stdio.h>

int main(){
  int c, coef = 1, i, j;
  scanf("%d",&c);
  for(i=0; i<c; i++){
    for(j=0; j <= i; j++){
      if (j==0 || i==0)
        coef = 1;
      else
        coef = coef*(i-j+1)/j;
        printf("%4d", coef);
    }
    printf("\n");
  }
  return 0;
}
