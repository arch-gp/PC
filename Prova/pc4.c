#include<stdio.h>

int main(){
  int AA, S, DDD;
  scanf("%d%d%d", &AA, &S, &DDD);
  printf("Matricula: %d%d%d\n", AA, S, DDD);
  AA=2000+AA;
  printf("Ano de Matricula: %d\nSemestre: %d\n", AA, S);
  return 0;
}
