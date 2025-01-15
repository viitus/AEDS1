/*13. Faça uma função que receba um vetor de reais e retorne a média dele.*/

#include <stdio.h>

float Media(float v[], int tam) {
  float soma = 0;
  for (int i = 0; i < tam; i++) {
    soma += v[i];
  }
  return soma / tam;
}

int main(void) {
  float v[100];
  int tam;
  printf("digite o tamanho do vetor: ");
  scanf("%d", &tam);
  for (int i = 0; i < tam; i++) {
    scanf("%f", &v[i]);
  }
  printf("\nMedia do vetor: %.3f", Media(v, tam));
  return 0;
}