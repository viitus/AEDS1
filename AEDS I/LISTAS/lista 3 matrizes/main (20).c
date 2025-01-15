#include <stdio.h>
int main(void) {
  float A[3][6];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      printf("insira o elemento [%d][%d] = ", i, j);
      scanf(" %f", &A[i][j]);
    }
  }
  printf("\nMatriz A:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }
  float soma = 0;
  float medi = 0;
  int k = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      if(j % 2 == 0){
        soma += A[i][j];
      }
      if(j == 1 || j == 3){
        medi += A[i][j];
        k++;
      }
    }
  }
  medi /= k;
  printf("\nSoma dos elementos das colunas impares = %.2f\n",soma);
  printf("Media dos elementos da segunda e quarta coluna = %.2f\n",medi);
  printf("\nMatriz A modificada:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      if(j == 5){
        A[i][5] = A[i][0] + A[i][1];
      }
      printf("%.2f ", A[i][j]);
    }
    printf("\n");
  }
  return 0;
}