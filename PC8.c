#include<stdio.h>

int main(){
  int i, mat[6], a[2], s, d[3];
  for(i=0; i<6; i++){
    scanf("%d", &mat[i]);
  }
  for(i=0; i<6; i++){
    printf("%d", mat[i]);
  }
  printf("\n");
  a[0]=0;
  a[1]=0;
  s=0;
  d[0]=0;
  d[1]=0;
  d[2]=0;
  a[0]=mat[0];
  a[1]=mat[1];
  s=mat[2];
  d[0]=mat[3];
  d[1]=mat[4];
  d[2]=mat[5];
  printf("O aluno foi matriculado em 20%d%d\n", a[0], a[1]);
  printf("%d Semestre\n", s);
  printf("Ordem de matricula: %d%d%d\n", d[0], d[1], d[2]);
  return 0;
}
