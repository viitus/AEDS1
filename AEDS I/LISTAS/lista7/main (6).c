/* 6. Faça um programa que leia uma quantidade qualquer de números
armazenando-os na memória e pare a leitura quando o usuário entrar um número
negativo. Em seguida, imprima o vetor lido. Use a função REALLOC. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *vetor = NULL; 
  int tamanho = 0;  
  int num;

  printf("Digite os valores do vetor (digite um número negativo para parar):\n");

  while (1) {
    scanf("%d", &num);
    if (num < 0) {
      break; 
    }
    tamanho++;
    vetor = (int *)realloc(vetor, tamanho * sizeof(int));
    if (vetor == NULL) {
      printf("Erro na alocação de memória.\n");
      return 1;
    }
    vetor[tamanho - 1] = num;
  }

  printf("\nVetor:\n[ ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("]\n");

  free(vetor);

  return 0;
}
