/*29. Escreva uma função recursiva SomaSerie(i,j,k). Esta função devolve a soma da série
de valores do intervalo [i,j], com incremento k.*/

#include <stdio.h>

int somaSerie(int i, int j, int k){
  if(i>j)
    return 0;
  else
    return i + somaSerie(i+k, j, k);
}

int main(void) {
  int inicio, fim, incremento;
  printf("Insira o inicio da serie: ");
  scanf("%d",&inicio);
  printf("insira o fim da serie: ");
  scanf("%d",&fim);
  printf("insira o incremento: ");
  scanf("%d",&incremento);
  printf("Soma da serie: %d",somaSerie(inicio, fim, incremento));
  return 0;
}