/* 8. Faça uma função que receba um inteiro N como parâmetro, calcule e retorne
o resultado da seguinte série: S = 2/4 + 5/5 + 10/6 + ... + (N2 + 1)/(N + 3) */

#include <stdio.h>
float serie(int n) {
  float soma = 0;
  for (int i = 1; i <= n; i++) {
    soma += (i * i + 1) /(float) (i + 3);
  }
  return soma;
}
int main(void) {
  int n;
  scanf("%d", &n);
  printf("%f", serie(n));
  return 0;
}