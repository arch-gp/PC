#include<stdio.h>
#include<string.h>

typedef struct time{
  int h, m, s;
} Tempo;
typedef struct date{
  int D, M, Y;
} Calendario;
typedef struct comp{
  Tempo tempo;
  Calendario cale;
  char c[145];
} Comp;

int main(){
  Comp k;
  //digite data
  scanf("%d", &k.cale.D);
  scanf("%d", &k.cale.M);
  scanf("%d", &k.cale.Y);
  //digite hora
  scanf("%d", &k.tempo.h);
  scanf("%d", &k.tempo.m);
  scanf("%d", &k.tempo.s);
  //digite compromisso
  scanf("%s", k.c);
  printf("\n");
  printf("Compromisso: %s\nHora:%d:%d:%d\n", k.c, k.tempo.h, k.tempo.m, k.tempo.s);
  printf("Dia: %d/%d/%d\n", k.cale.D, k.cale.M, k.cale.Y);
  return 0;
}
