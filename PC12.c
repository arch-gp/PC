#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int j;
  printf("0- Pedra\n1- Papel\n 2- Tesoura\nVamos jogar: ");
  scanf("%d", &j);
  int c;
  srand((unsigned)time(NULL));
  c= rand() % 3;
  printf("%d\n", c);
  if(j==0 && c==1){
    printf("Derrota\n");
  }else if(j==0 && c==2){
    printf("Vitoria\n");
  }else if(j==1 && c==0){
    printf("Vitoria\n");
  }else if(j==1 && c==2){
    printf("Derrota\n");
  }else if(j==2 && c==0){
    printf("Derrota\n");
  }else if(j==2 && c==1){
    printf("Vitoria\n");
  }else{
    printf("Empate\n");
  }
  return 0;
}
