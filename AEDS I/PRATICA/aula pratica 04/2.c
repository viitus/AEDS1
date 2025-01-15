#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[5], b[5], menor, posicao;

  for (int i = 0; i < 5; i++) {
    printf("insira o %dº elemento do arranjo: ", i + 1);
    scanf("%d", &a[i]);
  }

  menor = a[0];

  for (int i = 0; i < 5; i++) {
    if (a[i] < menor) {
      menor = a[i];
      posicao = i;
    }
  }

  for (int i = 0; i < 5; i++) {
    b[i] = a[i];
  }

  b[0] = menor;
  b[posicao] = a[0];

  printf("\nO menor elemento deste arranjo está na posição a[%d]\nNovo arranjo: ",posicao);
  for (int i = 0; i < 5; i++){
    printf("%d ",b[i]);
  }
  return 0;
}