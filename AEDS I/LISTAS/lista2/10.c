#include <stdio.h>

int main() {
  int i=1 , a=0 , soma=0;
  
  while (i <= 50) {
    printf("%d ",a);
    a = a+2;
    i++;
    soma = soma + a;
  }
  printf("Soma = %d",soma);
  
  return 0;
}