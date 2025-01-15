#include <stdio.h>

int main(void) {
  int A[3][3], B[3][3], C[3][3] = {0};
  printf("Matriz A:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
    }
  }
  printf("\nMatriz B:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++){
        C[i][j] += A[i][k] * B[k][j];
      }      
    }
  }
  printf("\nMatriz C = A * B:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if(C[i][j] < 10){
        printf(" ");
      }
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }
  return 0;
}