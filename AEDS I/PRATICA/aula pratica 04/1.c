#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[5], b[5], prod = 0;

  printf("insira 5 numeros inteiros para o vetor a[]\n");
  for (int i = 0; i < 5; i++)
    scanf("%d", &a[i]);

  printf("insira 5 numeros inteiros para o vetor b[]\n");
  for (int i = 0; i < 5; i++)
    scanf("%d", &b[i]);

  printf("\nVetor A:\n[ ");
  for (int i = 0; i < 5; i++)
    printf("%d ", a[i]);
  printf("]\nVetor B:\n[ ");
  for (int i = 0; i < 5; i++)
    printf("%d ", b[i]);
  printf("]\n");

  for (int i = 0; i < 5; i++)
    prod += a[i] * b[i];
  printf("\nProduto escalar de a[] por b[] é %d", prod);

  return 0;
}