#include<stdio.h>

int main(){
  int M[3][3], somaADP=0, i, j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      scanf("%d", &M[i][j]);
    }
  }
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      if(i<j){
      somaADP=somaADP+M[i][j];
      }
    }
    printf("%d\n", somaADP);
  }
  printf("SomaADP: %d\n", somaADP);
  return 0;
}
