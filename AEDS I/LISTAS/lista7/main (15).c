/* 15. Faça um programa que leia quatro números a, b, c e d, que serão as
dimensões de duas matrizes, e: Crie e leia uma matriz, dadas as dimensões dela;
 Crie e construa uma matriz que seja o produto de duas matrizes.
 Na sua função main(), imprima as duas matrizes e o produto entre elas, se
existir. */

#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **matriz, int linhas, int colunas) {
  printf("Digite os elementos da matriz:\n");
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
}

int **produtoMatrizes(int **matriz1, int a, int b, int **matriz2, int c, int d) {
  if (b != c) {
    printf("As matrizes não podem ser multiplicadas.\n");
    return NULL;
  }
  int **produto = (int **)malloc(a * sizeof(int *));
  for (int i = 0; i < a; i++) {
    produto[i] = (int *)malloc(d * sizeof(int));
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < d; j++) {
      produto[i][j] = 0;
      for (int k = 0; k < b; k++) {
        produto[i][j] += matriz1[i][k] * matriz2[k][j];
      }
    }
  }
  return produto;
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
  for (int i = 0; i < linhas; i++) {
    printf("[ ");
    for (int j = 0; j < colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("]\n");
  }
}

void liberarMatriz(int **matriz, int linhas) {
  for (int i = 0; i < linhas; i++) {
    free(matriz[i]);
  }
  free(matriz);
}

int main() {
  int a, b, c, d;

  printf("Digite as dimensões das duas matrizes (a x b) e (c x d): ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  int **matriz1 = (int **)malloc(a * sizeof(int *));
  for (int i = 0; i < a; i++) {
    matriz1[i] = (int *)malloc(b * sizeof(int));
  }
  lerMatriz(matriz1, a, b);

  int **matriz2 = (int **)malloc(c * sizeof(int *));
  for (int i = 0; i < c; i++) {
    matriz2[i] = (int *)malloc(d * sizeof(int));
  }
  lerMatriz(matriz2, c, d);

  printf("\nPrimeira matriz:\n");
  imprimirMatriz(matriz1, a, b);

  printf("\nSegunda matriz:\n");
  imprimirMatriz(matriz2, c, d);

  int **produto = produtoMatrizes(matriz1, a, b, matriz2, c, d);
  if (produto != NULL) {
    printf("\nProduto das duas matrizes:\n");
    imprimirMatriz(produto, a, d);
    liberarMatriz(produto, a);
  }

  liberarMatriz(matriz1, a);
  liberarMatriz(matriz2, c);

  return 0;
}
