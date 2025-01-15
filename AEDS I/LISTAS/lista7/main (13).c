/*13. Faça um programa que leia dois números N e M:
 Crie e leia uma matriz N x M de inteiros;
 Crie e construa uma matriz transposta M x N de inteiros.
 Mostre as duas matrizes. */

#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int linhas, int colunas, int **matriz){
  printf("MATRIZ:\n");
  for(int i=0; i<linhas; i++){
    printf("[ ");
    for(int j=0; j<colunas; j++){
      printf("%d ",matriz[i][j]);
    }
    printf("]\n");
  }
}

void imprimeTransposta(int linhas, int colunas, int **matriz){
  printf("MATRIZ TRANSPOSTA:\n");
  for(int j=0; j<colunas; j++){
    printf("[ ");
    for(int i=0; i<linhas; i++){
      printf("%d ",matriz[i][j]);
    }
    printf("]\n");
  }
}

int main() {
  int linhas, colunas;
  int **matriz;

  printf("Digite o número de linhas da matriz: ");
  scanf("%d", &linhas);
  printf("Digite o número de colunas da matriz: ");
  scanf("%d", &colunas);

  matriz = (int **)malloc(linhas * sizeof(int *));
  for (int i = 0; i < linhas; i++) {
    matriz[i] = (int *)malloc(colunas * sizeof(int));
  }

  printf("Digite os elementos da matriz:\n");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }

  imprimeMatriz(linhas, colunas, matriz);
  imprimeTransposta(linhas, colunas, matriz);
  
  for (int i = 0; i < linhas; i++) {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}