/*28. Faça uma função recursiva que receba um número inteiro positivo par N e imprima
todos os números pares de 0 até N em ordem decrescente.*/

#include <stdio.h>

void decresce(int n){
  printf("%d ",n);
  if(n != 0)
    decresce(n-1);
}

int main(void) {
  int n;
  scanf("%d",&n);
  decresce(n);
  return 0;
}