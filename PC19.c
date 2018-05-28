#include<stdio.h>

int main(){
  int a, *x;
  float b, *y;
  char c, *z;
  scanf("%d", &a);
  scanf("%f", &b);
  scanf("%s", &c);
  x=&a;
  y=&b;
  z=&c;
  *x=42;
  *y=39.9;
  *z='N';
  printf("Int:%d\nFloat:%.1f\nChar:%c\n", *x, *y, *z);
  return 0;
}
