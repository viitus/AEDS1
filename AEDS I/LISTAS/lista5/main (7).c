/* 7. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1.
Por exemplo, a saída para n = 6 seria: */

#include <stdio.h>

void triangulo(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = n; k > i ; k--) {
      printf(" ");
    }
    for (int j = 0; j < 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  triangulo(n);
  return 0;
}