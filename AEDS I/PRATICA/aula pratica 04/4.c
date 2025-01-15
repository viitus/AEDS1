#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[5], menor, maior;
  float media = 0;
  for (int i = 0; i < 5; i++) {
    printf("insira o %dº elemento do arranjo: ", i + 1);
    scanf("%d", &a[i]);
  }
  menor = a[0];
  maior = a[0];
  for (int i = 0; i < 5; i++) {
    media += a[i];
    if (a[i] < menor)
      menor = a[i];
    if (a[i] > maior)
      maior = a[i];
  }
  media = media / 5;
  printf("o maior valor é: %d\no menor valor é: %d\na media dos valores é: %.2f",maior,menor,media);
  return 0;
}