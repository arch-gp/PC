#include<stdio.h>
#include<math.h>

int main(){
  int x[8][8], i, j;
  unsigned long long int c=1;
  for(i=0; i<8; i++){
    for(j=0; j<8; j++){
      printf("Semente[%d][%d]: %llu\n", i+1, j+1, c);
      c=c*2;
    }
  }
  printf("Total de sementes: %llu\n", c=pow(2,63)+1);
  return 0;
}
