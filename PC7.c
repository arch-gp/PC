#include<stdio.h>

int main(){
  int data[6], i, aux;
  for(i=0; i<6; i++){
    scanf("%d", &data[i]);
  }
  aux=data[4];
  data[4]=data[0];
  data[0]=aux;
  aux=data[5];
  data[5]=data[1];
  data[1]=aux;
  for(i=0; i<6; i++){
    printf("%d", data[i]);
  }
  return 0;
}
