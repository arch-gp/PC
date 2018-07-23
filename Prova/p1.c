#include<stdio.h>
#include<string.h>

int main(){
  char n[10], s[10];
  fgets(n, 10, stdin);
  fgets(s, 10, stdin);
  strncat(n, s, 20);
  printf("%s\n", n);
  return 0;
}
