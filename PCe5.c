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
  int g=1;
  char c;
  float h, p;
  scanf("%d", &g);
  switch(g){
    case 1:
      scanf("%f", &h);
      p=pm(h);
      printf("Peso ideal: %.1f\n", p);
      break;
    case 2:
      scanf("%f", &h);
      p=ph(h);
      printf("Peso ideal: %.1f\n", p);
      break;
    default:
      break;
  }
  return 0;
}
