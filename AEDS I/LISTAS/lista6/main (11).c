/* 11. Crie uma função que receba como parâmetro um array e o imprima. Não utilize
índices para percorrer o array, apenas aritmética de ponteiros. */

#include <stdio.h>


void recebeArray(int *v){
  int *p;
  printf("insira os valores do array:\n");
  for (p = v; p < v + 10; p++) {
    scanf("%d", p);
  }
  printf("\nArray:\n[ ");
  for (p = v; p < v + 10; p++) {
    printf("%d ", *p);
  }
  printf("]");
}


int main() {
  int v[10];
  recebeArray(v);
  return 0;
}