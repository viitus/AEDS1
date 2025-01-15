/* 5. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3
colunas. Imprima o endereço de cada posição dessa matriz. */

#include <stdio.h>

int main(void) {
  float mat[3][3];
  float *p;
  p = &mat[0][0];

  // isso
  for (int i = 0; i < 9; i++) {
    printf("%p\n", p++);
  }
  printf("\n");

  // ou isso
  for (p = &mat[0][0]; p < &mat[0][0] + 9; p++) {
    printf("%p\n", p);
  }
  printf("\n");

  // é o mesmo que isso
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%p\n", &mat[i][j]);
    }
  }

  return 0;
}