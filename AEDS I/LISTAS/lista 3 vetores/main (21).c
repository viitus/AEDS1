#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int A[10], B[10], C[10];
  printf("insira 10 numeros inteiros para o primeiro vetor\n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &A[i]);
  printf("insira 10 numeros inteiros para o segundo vetor\n");
  for (int i = 0; i < 10; i++)
    scanf("%d", &B[i]);
  printf("\n[ ");
  for (int i = 0; i < 10; i++) {
    C[i] = A[i] - B[i];
    printf("%d ", C[i]);
  }
  printf("]");
  return 0;
}