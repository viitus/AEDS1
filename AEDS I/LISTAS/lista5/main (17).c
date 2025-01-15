/*17. Escreva uma função que recebe uma matriz quadrada de ordem 10 e calcule a
sua transposta. Crie ainda uma função para imprimir as matrizes.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeM(int m[10][10]) {
  printf("\nMatriz: \n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (m[i][j] < 10) {
        printf(" ");
      }
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

void imprimeMT(int m[10][10]) {
  printf("\nMatriz Transposta: \n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (m[j][i] < 10) {
        printf(" ");
      }
      printf("%d ", m[j][i]);
    }
    printf("\n");
  }
}

int main(void) {
  int m[10][10];
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      m[i][j] = rand() % 100;
    }
  }
  imprimeM(m);
  imprimeMT(m);
  return 0;
}