#include<stdio.h>

float pm (float x){
  float a;
  a=(62.1*x)-44.7;
  return a;
}
float ph (float x){
  float a;
  a=(72.7*x)-58;
  return a;
}

int main(){
  int g;
  float h, p;
  scanf("%d", &g);
  if(g==1){
      scanf("%f", &h);
      p=pm(h);
      printf("Peso ideal: %.1f\n", p);
    }else if(g==2){
      scanf("%f", &h);
      p=ph(h);
      printf("Peso ideal: %.1f\n", p);
  }else{
    printf("Tipo invalido\n");
  }
  return 0;
}
