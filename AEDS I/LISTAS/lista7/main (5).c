/* 5. Faça um programa para armazenar em memória um vetor de dados contendo 1500
valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:
a) Faça um loop e verifique se o vetor contém realmente os 1500 valores
inicializados com zero (conte os 1500 zeros do vetor). b) Atribua para cada
elemento do vetor o valor do seu índice junto a este vetor. c) Exibir na tela os
10 primeiros e os 10 últimos elementos do vetor. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanho = 1500;
  int *vetor = (int *)calloc(tamanho, sizeof(int));
  int c = 0;

  if (vetor == NULL) {
    printf("Erro na alocação de memória.\n");
    return 1;
  }

  // a)
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] != 0) {
      c++;
    }
  }
  if (c != 0) {
    printf("Vetor não está com todos valores zerados");
  } else {
    printf("Vetor criado e zerado");
  }

  // b)
  for (int i = 0; i < tamanho; i++) {
    vetor[i] = i;
  }

  // c)
  printf("\n[ ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }
  printf("... ");
  for (int i = tamanho - 10; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("]\n");

  free(vetor);

  return 0;
}