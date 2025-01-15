/*10. Crie uma função que receba dois parâmetros: um array e um valor do mesmo
tipo do array. A função deverá preencher os elementos de array com esse valor.
Não utilize índices para percorrer o array, apenas aritmética de ponteiros. */

#include <stdio.h>

int main() {
  int v[10];
  int x = 5;
  int *p;

  for (p = v; p < v + 10; p++) {
    *p = x;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", v[i]);
  }

  return 0;
}