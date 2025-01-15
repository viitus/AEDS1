#include <stdio.h>

int main(void) {
  int v[8], x, y;
  printf("Insira 8 valores:\n");
  for(int i = 0; i<8 ; i++){
    scanf("%d",&v[i]);
  }
  printf("Escolha dois numeros de 1 a 8\n");
  scanf("%d %d",&x,&y);
  x-=1;
  y-=1;
  if(x<0 || x>7 || y<0 || y>7){
    printf("numero invalido");
  }

  printf("a soma dos numeros nas posiçoes indicadas = %d",v[x]+v[y]);
  
  return 0;
}