#include<stdio.h>
#include<string.h>

typedef struct notas{
  int n1, n2, n3, media;
} Esq;
typedef struct aluno{
  char n[50];
  int mat;
  char c[500];
} Mboy;

int main(){
  Esq N[5], M[5];
  Mboy id[5];
  for(int i=0; i<5; i++){
    //Nome
    scanf("%s", id[i].n);
    //curso
    scanf("%s", id[i].c);
    //matricula
    scanf("%d", &id[i].mat);
    //notas
    scanf("%d", &N[i].n1);
    scanf("%d", &N[i].n2);
    scanf("%d", &N[i].n3);
  }
  printf("\n");
    for(int i=0; i<5; i++){
      M[i].media=(N[i].n1+N[i].n2+N[i].n3)/3;
    }
    for(int i=0; i<5; i++){
      printf("Aluno: %s\nCurso: %s\nMatricula: %d\nMedia: %d\n", id[i].n, id[i].c, id[i].mat, M[i].media);
      printf("\n");
    }
    return 0;
}
