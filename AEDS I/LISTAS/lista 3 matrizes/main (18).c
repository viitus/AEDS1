#include <stdio.h>

int main(void) {

  int A[3][3];
  int somaC[3] = {0};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf(" %d", &A[i][j]);
    }
  }
  printf("\nMatriz A:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (A[i][j] < 10 && A[i][j] > 0) {
        printf(" ");
      }
      printf("%d ", A[i][j]);
      somaC[i] += A[j][i];
    }
    printf("\n");
  }
  printf("Vetor soma de colunas:\n");
  for (int j = 0; j < 3; j++) {
    printf("%d ", somaC[j]);
  }

  return 0;
}