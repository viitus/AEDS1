/* 30. Faça uma função recursiva que receba um número inteiro positivo ímpar N e
retorne o fatorial duplo desse número. O fatorial duplo é definido como o
produto de todos os números naturais ímpares de 1 até algum número natural ímpar
N. Assim, o fatorial duplo de 5 é: 5!! = 1 * 3 * 5 = 15. */

#include <stdio.h>

int fatorial(int n){
  if(n == 1)
    return 1;
  return n * fatorial(n-2);
}

int main(void) {
  int n;
  
  while (1) {
    printf("insira um numero impar: ");
    scanf("%d", &n);
    if (n % 2 == 0)
      printf("Numero é par");
    else
      break;
  }
  printf("Fatorial Duplo = %d",fatorial(n));
  
  return 0;
}