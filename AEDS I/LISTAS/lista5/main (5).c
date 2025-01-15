/* 5. Faça uma função que receba dois valores numéricos e um símbolo. Este
símbolo representará a operação que se deseja efetuar com os números. Se o
símbolo for + deverá ser realizada uma adição, se for - uma subtração, se for /
uma divisão e se for * será efetuada uma multiplicação. */

#include <stdio.h>

float calcular(float x, float y, char z) {
  if (z == '+') return x + y;
  if (z == '-') return x - y;
  if (z == '*') return x * y;
  if (z == '/') return x / y;
  else return 0;
}

int main(void) {
  float a,b;
  char c;
  printf("insira o primeiro numero: ");
  scanf("%f", &a);
  printf("insira a operação (+ - * /): ");
  scanf(" %c", &c);
  printf("insira o segundo numero: ");
  scanf("%f", &b);
  printf("\nResultado: %.2f",calcular(a, b, c));
  return 0;
}