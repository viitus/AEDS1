#include <stdio.h>

int main() {
  float v;
  int e;
  printf("Insira o valor do produto: ");
  scanf("%f", &v);
  printf("Para qual estado ele sera vendido? \nMG - 1\nRJ - 2\nSP - 3\nMS - 4\n");
  scanf("%d", &e);

  switch (e) {
  case 1:
    v *= 1.07;
    break;
  case 2:
    v *= 1.15;
    break;
  case 3:
    v *= 1.12;
    break;
  case 4:
    v *= 1.08;
    break;
  default:
    printf("Estado inválido!");
    return 0;
  }
  printf("Preço do produto com imposto estadual: %.2f", v);

  return 0;
}