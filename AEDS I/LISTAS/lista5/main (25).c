/*25. Crie uma função recursiva que receba um número inteiro positivo N e calcule o
somatório dos números de 1 a N.*/

#include <stdio.h>

int somatorio(int n){
  if(n == 1)
    return 1;
  return n*somatorio(n-1);
}

int main(void) {
  int n;
  scanf("%d",&n);
  printf("Somatorio: %d",somatorio(n));
  return 0;
}