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
  printf("\nInt:%d\nFloat:%.1f\nChar:%c\n", *x, *y, *z);
  scanf("%d", &a);
  scanf("%f", &b);
  scanf("%s", &c);
  printf("\nInt:%d\nFloat:%.1f\nChar:%c\n", *x, *y, *z);
  return 0;
}
