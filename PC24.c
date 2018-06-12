#include<stdio.h>

int q(int x){
  if(x==1){
    return 1;
  }else{
    return q(x-1)*x;
  }
}

int main(){
  int fq, y;
  scanf("%d", &y);
  fq= q(2*y) / q(y);
  printf("fat: %d\n", fq);
  return 0;
}
