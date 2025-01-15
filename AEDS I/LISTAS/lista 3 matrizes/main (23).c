#include <stdio.h>

int main(void) {
  int A[3][3], B[3][3] = {0};

  printf("Matriz A:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        B[i][j] += A[i][k] * A[k][j];
      }
    }
  }

  printf("\nMatriz B = A^2:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (B[i][j] < 10) {
        printf(" ");
      }
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }

  return 0;
}