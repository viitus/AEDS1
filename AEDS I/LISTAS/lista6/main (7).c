/* 7. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse
array do teclado e imprima o endereço das posições contendo valores pares. */

#include <stdio.h>

int main(void) {
  int array[5];
  printf("insira os elementos do array:\n");
  for(int i = 0; i < 5; i++){
    scanf("%d", &array[i]);
  }
  int *p;
  printf("os endereços do elementos pares são:\n");
  for(p = array; p < array + 5; p++){
    if(*p % 2 == 0){
      printf("%p\n", p);
    }
  }
  return 0;
}