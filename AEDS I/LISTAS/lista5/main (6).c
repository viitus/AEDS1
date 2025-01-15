/* 6. Crie um programa que receba três valores (obrigatoriamente maiores que
zero), representando as medidas dos três lados de um triângulo. Elabore funções
para: a) Determinar se eles lados formam um triângulo, sabendo que:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados. b) Determinar e mostrar o tipo de triângulo, caso as medidas formem
um triângulo. Sendo que:
- Chama-se equilátero o triângulo que tem três lados iguais.
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes. */

#include <stdio.h>

int ehtriangulo(int a, int b, int c) {
  if (a >= b + c || b >= a + c || c >= a + b) {
    return 0;
  } else {
    return 1;
  }
}

void formato(int a, int b, int c) {
  if (a == b && b == c && a == c) {
    printf("Triangulo Equilatero");
  } else if (a == b || b == c || a == c) {
    printf("Triangulo Isoceles");
  } else {
    printf("Triangulo Escaleno");
  }
}

int main(void) {
  int a[3];
  for (int i = 0; i < 3; i++) {
    printf("insira a %dª medida: ", i + 1);
    scanf("%d", &a[i]);
  }
  if (ehtriangulo(a[0], a[1], a[2])) {
    printf("\nMedidas podem formar um ");
    formato(a[0], a[1], a[2]);
  } else {
    printf("Medidas não formam um Triangulo");
  }
  return 0;
}