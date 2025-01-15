#include <stdio.h>
#include <stdlib.h>
int main() {
  int A[3][3], B[3][3], C[3][3];
  printf("MATRIZ A\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("digite o elemento da linha %d e coluna %d: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }
  printf("MATRIZ B\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("digite o elemento da linha %d e coluna %d: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }
  printf("\nMATRIZ A:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d ", A[i][j]);
    printf("\n");
  }
  printf("\nMATRIZ B:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d ", B[i][j]);
    printf("\n");
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      C[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  printf("\nMATRIZ C = A * B:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%d ", C[i][j]);
    printf("\n");
  }
  return 0;
}