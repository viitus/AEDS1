#include <stdio.h>

int fatorial(int n){
  int fat = 1;
  for(int i = 1; i <= n; i++){
    fat *= i;
  }
  return fat;
}

float serieE (int n){
  float soma = 1 ;
  for (int i = 1; i <= n; i++){
    soma += 1/(float)fatorial(i);
  }
  return soma;
}

int main(void) {
  int n;
  printf("Insira o valor de n: ");
  scanf("%d", &n);
  printf("E = %f", serieE(n));
  return 0;
}