#include<stdio.h>

main(){
  int vet[10], *p, **q;
  p=&vet[0];
  *p=20;
  **q=*p;
}
