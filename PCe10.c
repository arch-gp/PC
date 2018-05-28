#include<stdio.h>

int main(){
  int i;
  float a[10], *p[10];
  p[0]=&a[0];
  for(i=0; i<10; i++){
    scanf("%f", &a[i]);
    p[i]=&a[i];
  }
  printf("\n");
  for(i=0; i<10; i++){
    printf("%.2f\n", a[i]);
    printf("%p\n", p+i);
  }
  return 0;
}
