#include<stdio.h>
int main(){
FILE *arq=fopen("info.txt","w+");
FILE *arq1=fopen("arquivo.txt","w+");
FILE *arq2=fopen("arquivo2.txt","a");
char a[20], b[20];
if(arq==NULL){
  printf("Erro no arquivo\n");
}else{
  printf("arquivo aberto\n");
}
if(arq1==NULL){
  printf("Erro no arquivo\n");
}else{
  printf("Arquivo berto\n");
}
if(arq2==NULL){
  printf("ERRO no arquivo");
} else{
  printf("Arquivo aberto");
}
printf("Escreva uma frase:\n");
fgets(a,20,stdin);
fprintf(arq,"%s",a);
printf("Escreva uma frase");
fgets(b,20,stdin);
fprintf(arq1,"%s",b);

while(fscanf(arq,"%c",&a)!=EOF){
  fprintf(arq2,"%c",a);
}
while(fscanf(arq1,"%c",&b)!=EOF){
  fprintf(arq2,"%c",b);
}
fclose(arq1);
fclose(arq2);
fclose(arq);
return 0;
}
