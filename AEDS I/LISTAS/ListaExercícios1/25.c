#include <stdio.h>

int main() {
  float x1, x2, a, b, c, delta;
  printf("Insira os valores de a, b e c da equação de segundo grau\na*x^2 + b*x + c\n");
  scanf("%f%f%f", &a, &b, &c);

  if (a == 0) {
    printf("Não é equação do segundo grau\n");
    x1 = -c / b;
    printf("x = %f", x1);
  } else {
    delta = b * b - 4 * a * c;
    if (delta > 0) {
      x1 = (-b + delta) / (2 * a);
      x2 = (-b - delta) / (2 * a);
      printf("As raizes são %f e %f", x1, x2);
    } else if (delta == 0) {
      x1 = -b / (2 * a);
      printf("Raiz unica: %f", x1);
    } else {
      printf("Não existem raizes reais");
    }
  }

  return 0;
}