#include<stdio.h>

int main(){
  int x;
  scanf("%d", &x);
  if(x>=0){
    printf("X eh Positivo\n");
    if(x==0){
      printf("X=0\n");
    }
  }else{
    printf("X eh Negativo\n");
  }
  return 0;
}
