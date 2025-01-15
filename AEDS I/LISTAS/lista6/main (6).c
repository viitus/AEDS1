/*6. Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima
o dobro de cada valor lido.*/

#include <stdio.h>

int main(void) {
  int array[5];
  int *p;

  printf("Digite 5 valores inteiros:\n");
  for (p = array; p < array + 5; p++) {
    scanf("%d", p);
  }

  printf("O dobro de cada valor lido é:\n");
  for (p = array; p < array + 5; p++) {
    printf("%d\n", *p * 2);
  }

  return 0;
}