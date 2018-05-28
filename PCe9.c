#include<stdio.h>

int main(){
  float a[10], *p[10];
  int i;
  for(i=0; i<10; i++){
    scanf("%f", &a[i]);
    p[i]=&a[i];
  }
  for(i=0; i<10; i++){
    printf("%.2f\n", a[i]);
    printf("%p\n", p[i]);
  }
  return 0;
}
