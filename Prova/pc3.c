#include<stdio.h>

int main(){
  int DD, MM, AA;
  scanf("%d%d%d", &DD, &MM, &AA);
  printf("%d/%d/%d\n", DD, MM, AA);
  printf("Conversao: \n");
  printf("%d/%d/%d\n", AA, MM, DD);
  return 0;
}
