/* 2. Faça uma função para verificar se um número é um quadrado perfeito. Um
quadrado perfeito é um número inteiro não negativo que pode ser expresso como o
quadrado de outro número inteiro. Ex: 1, 4, 9... */

#include <math.h>
#include <stdio.h>

int ehquadrado(int x) {
  int raiz = sqrt(x);
  if (raiz * raiz == x)
    return 1;
  else
    return 0;
}

int main(void) {
  int x;
  printf("insira um numero inteiro: ");
  scanf("%d", &x);
  if (ehquadrado(x) == 1)
    printf("%d é um quadrado perfeito", x);
  else
    printf("%d não é um quadrado perfeito", x);
  return 0;
}