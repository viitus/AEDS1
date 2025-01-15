/*16. Faça uma função que receba uma matriz de 3 x 3 elementos. Calcule e retorne a
soma dos elementos que estão abaixo da diagonal principal.*/
#include <stdio.h>

int soma(int m[3][3]) {
  int soma = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (j <= i) {
        soma += m[i][j];
      }
    }
  }
  return soma;
}

int main(void) {
  int m[3][3];
  printf("insira os valores da matriz 3x3:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &m[i][j]);
    }
  }
  printf("Soma dos valores abaixo da diagonal = %d", soma(m));
  return 0;
}