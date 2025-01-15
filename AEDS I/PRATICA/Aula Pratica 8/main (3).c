/* 3a Questão
Escreva uma função que receba 3 valores inteiros por parâmetro e os exiba em
ordem crescente. Faça um programa que leia N conjuntos de 3 valores e acione a
função para cada conjunto. (N deve ser lido do teclado). */

#include <stdio.h>

void ordena(int *a, int *b, int *c) {
  int temp;
  if (*a > *b) {
    temp = *a;
    *a = *b;
    *b = temp;
  }
  if (*a > *c) {
    temp = *a;
    *a = *c;
    *c = temp;
  }
  if (*b > *c) {
    temp = *b;
    *b = *c;
    *c = temp;
  }
}

int main() {
  int n;
  printf("Ordenar quantos conjuntos ? ");
  scanf("%d", &n);
  int x[3];
  for (int i = 0; i < n; i++) {
    printf("\n - %dº Conjunto - \n", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("Insira o %dº número: ", j + 1);
      scanf("%d", &x[j]);
    }
    printf("\nValores em ordem crescente: ");
    ordena(&x[0], &x[1], &x[2]);
    printf("%d %d %d\n", x[0], x[1], x[2]);
  }
  return 0;
}