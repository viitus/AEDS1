#include <stdio.h>
int main() {

  float a, b, c;
  printf("\nInsira tres valores:\n");
  scanf("%f%f%f", &a, &b, &c);

  if ((a + b <= c) || (c + a <= b) || (b + c <= a)) {
    printf("\nValores NAO podem formar um triangulo");
  } else if (a == b && a == c && b == c) {
    printf("\nValores podem formar um triangulo equilatero");
  } else if (a == b || a == c || b == c) {
    printf("\nValores podem formar um triangulo isoceles");
  } else {
    printf("\nValores podem formar um triangulo escaleno");
  }

  return 0;
}