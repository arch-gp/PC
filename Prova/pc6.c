#include<stdio.h>

int main(){
  int id;
  char n;
  printf("Nome: ");
  scanf("%s", &n);
  printf("Idade: ");
  scanf("%d", &id);
  if(id>5 && id<10){
    printf("Jogador Infantil\n");
  }else if(id>11 && id<15){
    printf("Jogador Juvenil\n");
  }else if(id>16 && id<20){
    printf("Jogador Junior\n");
  }else if(id>21 && id<25){
    printf("Jogador Profissional\n");
  }else{
    printf("Idade Invalida\n");
  }
  return 0;
}
