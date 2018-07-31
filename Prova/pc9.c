#include<stdio.h>

int main(){
  int *q, *p, t;
  scanf("%d", &t);
  p=malloc(t*sizeof(int));
  q=p;
  for(int i=0; i<t; i++){
    scanf("%d", p);
    p++;
  }
  p=q;
  for(int i=0; i<t; i++){
    printf("%d\n", *p);
    p++;
  }
  free(p);
  free(q);
  return 0;
}
