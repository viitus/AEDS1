#include <stdio.h>

int main(void) {
  int n = 3;
  int A[n][n];

  printf("Matriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("\nMatriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz At:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", A[j][i]);
    }
    printf("\n");
  }

  return 0;
}