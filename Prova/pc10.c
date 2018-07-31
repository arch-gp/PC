#include<stdio.h>

int main(){
  int *p, *q, aux=0;
  p=malloc(sizeof(int));
  q=p;
  while(p>0){
    scanf("%d", p);
    if(p<0){
      break;
    }
    aux=aux+1;
    realloc(p,sizeof(int));
    p++;
  };
  p=q;
  for(int i=0; i<aux ; i++){
    printf("%d\n", *p);
    p++;
  }
  return 0;
}
