#include<stdio.h>

int main(){
  int i, x[5], s, dv;
  for(i=0; i<5; i++){
    scanf("%d", &x[i]);
  }
  int a=x[0];
  int b=x[1];
  int c=x[2];
  int d=x[3];
  int e=x[4];
  s=(6*a)+(5*b)+(4*c)+(3*d)+(2*e);
  dv=s%7;
  if(dv==0){
    printf("Aceito\n");
  }else{
    printf("Negado\n");
  }
  return 0;
}
