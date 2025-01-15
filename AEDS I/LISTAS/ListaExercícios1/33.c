#include <stdio.h>

int main(void) {
  float p;

  printf("\nInsira o preço do produto: R$");
  scanf("%f", &p);

  if (p < 50.00) {
    p = p * 1.05;
  } else if (p >= 50.00 && p <= 100) {
    p = p * 1.10;
  } else {
    p = p * 1.15;
  }
  printf("\nNovo preço: R$%.2f\n", p);
  if (p < 80.00) {
    printf("\nBARATO!");
  } else if (p >= 80.00 && p <= 120.00) {
    printf("\nNormal.");
  } else if (p >= 120.00 && p <= 200.00) {
    printf("\nCaro.");
  } else {
    printf("\nMUITO CARO!");
  }

  return 0;
}