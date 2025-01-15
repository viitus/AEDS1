/* 11. Construa um programa que leia o número de linhas e de colunas de uma matriz de
números reais, aloque espaço dinamicamente para esta e a inicialize com valores
fornecidos pelo usuário. Ao final, o programa deverá retornar a matriz na saída padrão
com layout apropriado. */

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

  for (int i = 0; i < linhas; i++) {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}