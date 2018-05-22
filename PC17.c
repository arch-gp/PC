#include<stdio.h>

int main(){
  int m1[50][50], m2[50][50], i, j, mr[50][50], ql1, qc1, ql2, qc2;
  scanf("%d", &ql1);
  scanf("%d", &qc1);
  scanf("%d", &ql2);
  scanf("%d", &qc2);
  if(ql1=qc2){
    for(i=0; i<ql1; i++){
      for(j=0; j<qc1; j++){
        scanf("%d", &m1[i][j]);
      }
    }
    for(i=0; i<ql2; i++){
      for(j=0; j<qc2; j++){
        scanf("%d", &m2[i][j]);
      }
    }
    for(i=0; i<ql1; i++){
      for(j=0; j<qc2; j++){
        mr[i][j]=(m1[i][j]*m2[j][i])+(m1[j][i]*m2[i][j]);
      }
    }
    for(i=0; i<ql1; i++){
      for(j=0; j<qc2; j++){
        printf("%d \t", mr[i][j]);
      }
      printf("\n");
    }
  }else{
    printf("Nao vai dar nao parcero\n");
  }
  return 0;
}
