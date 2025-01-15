#include <stdio.h>

int main(void) {
  int A[2][2], B[2][2], C[2][2];
  int x;
  printf("Matriz A:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("\nMatriz B:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  printf("\nMatriz A:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz B:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz A + B = C:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      C[i][j] = A[i][j] + B[i][j];
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz A - B = C:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      C[i][j] = A[i][j] - B[i][j];
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
  printf("\nAdicionar constante as duas matrizes: ");
  scanf("%d",&x);
  printf("\nMatriz A modificada:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      A[i][j] += x;
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz B modificada:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      B[i][j] += x;
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }
  return 0;
}