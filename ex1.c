#include <stdio.h>
#include <string.h>

typedef struct dados{
  char n[50];
  int y;
  char end[100];
} Info;

int main(){
  Info id;
  //leitura do nome
  fgets(id.n, 50, stdin);
  //Leitura do endereço
  fgets(id.end, 100, stdin);
  //Leitura da idade
  scanf("%d", &id.y);
  printf("Seu nome eh: %sSua idade eh: %d\nResidente da rua %s", id.n, id.y, id.end);
return 0;
}
