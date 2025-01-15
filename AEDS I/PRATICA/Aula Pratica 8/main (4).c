/* 4a Questão
Escreva uma função que recebe 3 valores reais X, Y e Z e que verifique se esses
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe
qual é o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é
necessário que a seguinte propriedade seja satisfeita: o comprimento de cada
lado de um triângulo é menor do que a soma do comprimento dos outros dois lados.
A função deve identificar o tipo de triângulo formado observando as seguintes
definições:
1. Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
2. Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais;
3. Triângulo Escaleno: os comprimentos dos 3 lados são diferentes;
Faça um programa que leia um número indeterminado de triângulos (valores dos 3
lados) e para cada triângulo, acione a função. */

#include <stdio.h>

void triangulo() {
  int a, b, c;
  printf("insira a 1ª medida: ");
  scanf("%d", &a);
  printf("insira a 2ª medida: ");
  scanf("%d", &b);
  printf("insira a 3ª medida: ");
  scanf("%d", &c);
  if (a >= b + c || b >= a + c || c >= a + b) {
    printf("Medidas não formam um Triangulo\n");
  } else {
    printf("Medidas podem formar um ");
    if (a == b && b == c && a == c) {
      printf("Triangulo Equilatero\n");
    } else if (a == b || b == c || a == c) {
      printf("Triangulo Isoceles\n");
    } else {
      printf("Triangulo Escaleno\n");
    }
  }
}

int main() {
  char continua;
  printf("\n - Verificar triangulos - \n\n");
  while (1) {
    triangulo();
    printf("\nOutro triangulo? (s/n): ");
    scanf(" %c", &continua);
    if (continua == 'n' || continua == 'N') {
      break;
    }
  }
  return 0;
}