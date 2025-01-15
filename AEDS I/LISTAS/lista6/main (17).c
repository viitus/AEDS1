/* 17. Escreva um programa que declare um array de inteiros e um ponteiro para
inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada posição
do array usando o ponteiro (use *). */

#include <stdio.h>

int main(void) {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *p;
  for (p = a; p < a + 9; p++) {
    (*p)++;
    printf("%d ", *p);
  }
  return 0;
}