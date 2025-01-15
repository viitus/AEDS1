/* 10. Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de
dimensões definidas pelo usuário e a leia. Em seguida, implemente uma função que
receba um valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso não
esteja na matriz. */

#include <stdio.h>
#include <stdlib.h>

int verificarValor(int valor, int **matriz, int linhas, int colunas) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      if (matriz[i][j] == valor) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  int linhas, colunas, valor;
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

  printf("Digite um valor para verificar se está na matriz: ");
  scanf("%d", &valor);

  if (verificarValor(valor, matriz, linhas, colunas)) {
    printf("O valor %d está presente na matriz.\n", valor);
  } else {
    printf("O valor %d não está presente na matriz.\n", valor);
  }

  for (int i = 0; i < linhas; i++) {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}
