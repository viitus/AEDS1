#include <stdio.h>

int main(void) {
  int n = 4;
  int A[n][n];
  printf("*apenas numeros no intervalo [1,20]\n");
  printf("Matriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf("%d", &A[i][j]);
      if(A[i][j] < 1 || A[i][j] > 20){
        printf("numero invalido\n");
        j--;
      }
    }
  }

  printf("\nMatriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz A transformada:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(j > i){
        A[i][j] = 0;
      }
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}