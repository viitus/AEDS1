/* 1. Faça uma função para verificar se um número é positivo ou negativo. Sendo
que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
*/

#include <stdio.h>

int ehpositivo(int x) {
  if (x > 0) {
    return 1;
  } else if (x < 0) {
    return -1;
  } else {
    return 0;
  }
}

int main(void) {
  int a;
  printf("Insira um número inteiro: ");
  scanf("%d", &a);
  printf("%d", ehpositivo(a));

  return 0;
}