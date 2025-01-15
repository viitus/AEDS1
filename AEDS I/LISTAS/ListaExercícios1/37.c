#include <stdio.h>

int main() {
  int h1, m1, h2, m2, h, m;
  float t;
  printf("Insira o horario de chegada\n");
  scanf("%d%d", &h1, &m1);
  printf("Insira o horario de saida\n");
  scanf("%d%d", &h2, &m2);

  if (h1 > 23 || h2 > 23 || h1 < 0 || h2 < 0 || m1 > 59 || m2 > 59 || m1 < 0 || m2 < 0) {
    printf("Horario invalido!\nHora deve ser entre 00 e 23 e minutos entre 00 e 59");
    return 0;
  }

  h = h2 - h1;
  m = m2 - m1;
  if (m > 0) h++;
  if (h < 0) h = h + 24;

  if (h >= 0 && h <= 2) {
    t = h * 1.00;
  } else if (h >= 3 && h <= 4) {
    t = 2 + (h - 2) * 1.40;
  } else {
    t = 4.80 + (h - 4) * 2.00;
  }

  printf("Tarifa: R$%.2f - %dhoras", t, h);

  return 0;
}