/* 2. Faça um programa que leia um número N e:
 Crie dinamicamente e leia um vetor de inteiro de N posições;
 Leia um número inteiro X e conte e mostre os múltiplos desse número que existem
 no vetor. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, X, i, c = 0;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &N);

  int *vetor = (int *)malloc(N * sizeof(int));

  printf("Digite os elementos do vetor:\n");
  for (i = 0; i < N; i++) {
    scanf("%d", &vetor[i]);
  }

  printf("Digite o número inteiro X: ");
  scanf("%d", &X);

  printf("Múltiplos de %d no vetor: ", X);
  for (i = 0; i < N; i++) {
    if (vetor[i] % X == 0) {
      printf("%d ", vetor[i]);
      c++;
    }
  }
  printf("\nExistem %d multiplos de %d no vetor", c, X);
  
  if (c == 0) {
    printf("Nenhum múltiplo encontrado.");
  }

  free(vetor);

  return 0;
}
