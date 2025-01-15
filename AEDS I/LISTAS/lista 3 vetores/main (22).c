#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int A[10], B[10], C[10];

  printf("insira 10 numeros inteiros para o vetor A\n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &A[i]);

  printf("insira 10 numeros inteiros para o vetor B\n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &B[i]);

  printf("VETOR C:\n[ ");
  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0)
      C[i] = A[i];
    else
      C[i] = B[i];
    printf("%d ", C[i]);
  }
  printf("]");

  return 0;
}