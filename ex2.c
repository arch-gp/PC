#include<stdio.h>
#include<string.h>

typedef struct aluno{
  char n[50];
  int mat;
  char c[500];
} Mboy;

int main(){
  Mboy est[5];
  for(int i=0; i<5; i++){
    scanf("%s", est[i].n);
    scanf("%s", est[i].c);
    scanf("%d", &est[i].mat);
  }
  printf("\n");
  for(int i=0; i<5; i++){
    printf("Nome: %s\nCurso: %s\nNumero de Matricula: %d\n", est[i].n, est[i].c, est[i].mat);
    printf("\n");
  };
  return 0;
}
