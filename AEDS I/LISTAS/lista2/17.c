#include <stdio.h>

int main() {
  int i=0, a, soma=0;
  
  printf("Digite um numero inteiro: ");
  scanf("%d",&a);
  while (i <= a) {
    soma += i;
    i++;
  }
  printf("Soma dos primeiros %d numeros naturais é : %d",a,soma);
  
  return 0;
}