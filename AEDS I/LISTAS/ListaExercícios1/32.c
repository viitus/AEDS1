#include <stdio.h>

int main(void) {

  int code;
  float q;
  printf("\nInsira o código do produto: ");
  scanf("%d", &code);
  printf("\nInsira a quantidade: ");
  scanf("%f", &q);

  switch (code) {
  case 100:
    printf("\n%.0f x Cachorro Quente = R$%.2f", q, q * 1.20);
    break;
  case 101:
    printf("\n%.0f x Bauru Simples = R$%.2f", q, q * 1.30);
    break;
  case 102:
    printf("\n%.0f x Bauru com Ovo = R$%.2f", q, q * 1.50);
    break;
  case 103:
    printf("\n%.0f x Hamburguer = R$%.2f", q, q * 1.20);
    break;
  case 104:
    printf("\n%.0f x Cheeseburguer = R$%.2f", q, q * 1.70);
    break;
  case 105:
    printf("\n%.0f x Suco = R$%.2f", q, q * 2.20);
    break;
  case 106:
    printf("\n%.0f x Refrigerante = R$%.2f", q, q * 1.00);
    break;
  default:
    printf("\nCódigo inválido!");
    break;
  }

  return 0;
}