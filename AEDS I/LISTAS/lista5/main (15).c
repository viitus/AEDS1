/*15. Faça uma função que receba uma matriz 4 x 4 e retorne quantos valores
maiores do que 10 ela possui.*/

#include <stdio.h>

int maiorq10(int m[4][4]) {
  int contador = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (m[i][j] > 10) {
        contador++;
      }
    }
  }
  return contador;
}

int main(void) {
  int m[4][4];
  printf("insira os valores da matriz 4x4:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &m[i][j]);
    }
  }
  printf("a matriz possui %d valores maiores que 10",maiorq10(m));
  return 0;
}