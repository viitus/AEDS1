#include <math.h>
#include <stdio.h>

int main() {

  int a;
  float x, y, z, med;

  printf("\nEscolha qual media "
         "calcular:\n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritimetica\n");
  scanf("%d", &a);

  if (a < 1 || a > 4) {
    printf("\nOpção invalida");
    return 0;
  }

  printf("\nInsira tres numeros:\n");
  scanf("%f%f%f", &x, &y, &z);

  switch (a) {
  case 1:
    med = cbrtf(x * y * z);
    break;
  case 2:
    med = (1*x + 2*y + 3*z) / (1 + 2 + 3);
    break;
  case 3:
    if (x == 0 || y == 0 || z == 0) {
      printf("Indefinido");
      return 0;
    }
    med = 3 / ((1/x) + (1/y) + (1/z));
    break;
  case 4:
    med = (x + y + z) / 3;
    break;
  }
  printf("\nMedia: %.3f", med);

  return 0;
}