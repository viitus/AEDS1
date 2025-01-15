/* 13. Escreva uma função que dado um número real passado como parâmetro, retorne a
parte inteira e a parte fracionária deste número. Escreva um programa que chama esta
função. */

#include <stdio.h>

void frac(float num, int* inteiro, float* frac);

int main() {
  float nu;
  int in;
  float fr;
  printf("insira um numero real\n");
  scanf("%f", &nu);
  frac(nu, &in, &fr);
  printf("parte inteira = %d\n", in);
  printf("parte fracionaria = %f\n", fr);
  return 0;
}

void frac(float num, int *inteiro, float *frac){
  *inteiro = num;
  *frac = num - *inteiro;
}