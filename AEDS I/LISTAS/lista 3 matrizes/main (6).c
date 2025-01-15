#include <stdio.h>

int main(void) {
  int n = 3;
  int A[n][n], B[n][n], C[n][n];

  printf("Matriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("Matriz B:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  printf("\nMatriz C:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (A[i][j] > B[i][j]) {
        C[i][j] = A[i][j];
      } else {
        C[i][j] = B[i][j];
      }
      if (C[i][j] < 10) {
        printf(" ");
      }
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}