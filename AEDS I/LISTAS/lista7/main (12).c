/* 12. Faça um programa que leia dois números N e M e:
 Crie e leia uma matriz de inteiros N x M;
 Localize os três max números de uma matriz e mostre a linha e a coluna onde
 estão. */

#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int linhas, int colunas, int **matriz) {
  printf("\nMATRIZ:\n");
  for (int i = 0; i < linhas; i++) {
    printf("[ ");
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("]\n");
  }
}

void encontraMaiores(int linhas, int colunas, int **matriz) {
  int max[3] = {0, 0, 0};
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      if (matriz[i][j] > max[0]) {
        max[2] = max[1];
        max[1] = max[0];
        max[0] = matriz[i][j];
      } else if (matriz[i][j] > max[1]) {
        max[2] = max[1];
        max[1] = matriz[i][j];
      } else if (matriz[i][j] > max[2]) {
        max[2] = matriz[i][j];
      }
    }
  }
  printf("\nOs três max valores na matriz são:[ %d %d %d ]\n", max[0], max[1], max[2]);
}

int main() {
  int N, M;
  int **matriz;

  printf("Digite o número de linhas da matriz: ");
  scanf("%d", &N);
  printf("Digite o número de colunas da matriz: ");
  scanf("%d", &M);

  matriz = (int **)malloc(N * sizeof(int *));
  for (int i = 0; i < N; i++) {
    matriz[i] = (int *)malloc(M * sizeof(int));
  }

  printf("Digite os elementos da matriz:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  imprimeMatriz(N, M, matriz);
  encontraMaiores(N, M, matriz);
  
  for (int i = 0; i < N; i++) {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}