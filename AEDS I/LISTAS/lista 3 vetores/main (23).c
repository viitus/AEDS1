#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int A[5], B[5], prod = 0;

  printf("insira 5 numeros inteiros para o vetor A\n");
  for (int i = 0; i < 5; i++)
    scanf("%d", &A[i]);

  printf("insira 5 numeros inteiros para o vetor B\n");
  for (int i = 0; i < 5; i++)
    scanf("%d", &B[i]);

  printf("\nVetor A:\n[ ");
  for (int i = 0; i < 5; i++)
    printf("%d ", A[i]);
  printf("]\nVetor B:\n[ ");
  for (int i = 0; i < 5; i++)
    printf("%d ", B[i]);
  printf("]\n");

  for (int i = 0; i < 5; i++)
    prod += A[i] * B[i];

  printf("Produto escalar: %d", prod);

  return 0;
}