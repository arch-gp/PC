#include<stdio.h>

int q(int x){
  if(x==1){
    return 1;
  }else{
    return q(x-1)*x;
  }
}
int sfq(int a){
  int g=1;
  while(a!=0){
    g=g*q(a);
    a--;
  }
  return g;
}

int main(){
  int f, y;
  scanf("%d", &y);
  f=sfq(y);
  printf("%d\n", f);
  return 0;
}
