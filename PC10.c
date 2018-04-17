#include<stdio.h>
#include<string.h>

int main(){
  int i;
  char n[20];
  printf("Digite seu nome: ");
  fgets(n, 20, stdin);
  printf("Digite sua idade: ");
  scanf("%d", &i);
  if(i>=21){
    printf("Nome: %sIdade: %d\nJogador Profissional\n", n, i);
  }else if(i>=16 && i<=20){
    printf("Nome: %sIdade: %d\nJogador Junior\n", n, i);
  }else if(i>=11 && i<=15){
    printf("Nome: %sIdade: %d\nJogador Juvenil\n", n, i);
  }else if(i>=5 && i<=10){
    printf("Nome: %sIdade: %d\nJogador Infantil\n", n, i);
  }else{
    printf("Idade invalida\n");
  }
  return 0;
}
