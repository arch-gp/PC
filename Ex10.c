#include<stdio.h>

int main(){
  // e = eleitores
  // vb = votos brancos
  // vn = votos nulos
  // vv = votos validos
  // aux = auxiliar contagem de votos
  float e, vb, vn, vv, aux;
  // pvb = percentual votos brancos
  // pvn = percentual votos nulos
  // pvv = percentual votos validos
  float pvb, pvn, pvv;
  scanf("%f", &e);
  for(int i=0; i<e; i++){
    scanf("%f", &aux);
      if(aux==0)
        vn++;
      else if(aux==1)
        vv++;
      else if(aux==2)
        vb++;
      else
        printf("erro, refaca a contagem");
    }
    pvb=(vb*100)/e;
    pvn=(vn*100)/e;
    pvv=(vv*100)/e;
    printf("Porcentagem de Votos Brancos: %.2f\n", pvb);
    printf("Porcentagem de Votos Nulos: %.2f\n", pvn);
    printf("Porcentagem de Votos Validos: %.2f\n", pvv);
    return 0;
}
