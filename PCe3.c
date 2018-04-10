#include<stdio.h>

int main(){
  int x, y;
  scanf("%d", &x);
  y=2018-x;
  if(y<16){
    printf("Nao pode votar esse ano\n");
  }else{
    printf("Pode votar esse ano\n");
  }
  return 0;
}
