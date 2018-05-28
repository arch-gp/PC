#include<stdio.h>

int main(){
  int i, v[100], *p, *ini;
  p=&v[0];
  ini=&v[0];
  for(i=0; i<100; i++){
    *p=0;
    p++;
  }
  for(i=0; i<100; i++){
    printf("%d\n", v[i]);
  }
  p=ini;
  for(i=0; i<100; i++){
    *p=i+1;
    p++;
  }
  for(i=0; i<100; i++){
    printf("%d\n", v[i]);
  }
  return 0;
}
