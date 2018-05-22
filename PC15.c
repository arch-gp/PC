#include<stdio.h>

int main(){
  int i, n[5];
  for(i=0; i<5; i++){
    scanf("%d", &n[i]);
  }
  for(i=4; i>=0; i--){
    printf("%d ", n[i]);
  }
  return 0;
}
