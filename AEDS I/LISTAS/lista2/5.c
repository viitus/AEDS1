#include <stdio.h>

int main() {
  int i;
  float a,soma=0;
  
  for (i = 1; i <= 10; i++) {
    printf("digite um numero: ");
    scanf("%f",&a);
    soma = soma+a;
  }
  printf("Soma = %f",soma);


  return 0;
}