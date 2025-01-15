#include <stdio.h>

float serieS (int n){
  float soma = 0 ;
  for (int i = 1; i <= n; i++){
    soma += 1/(float)i;
  }
  return soma;
}

int main(void) {
  int n;
  printf("Insira o valor de n: ");
  scanf("%d", &n);
  printf("S = %f", serieS(n));
  return 0;
}