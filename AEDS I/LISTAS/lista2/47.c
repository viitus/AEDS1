#include <stdio.h>
int main() {
  int x;
  float a, b, c;
  while (1) {
    printf("\n\n[1]adição\n[2]subtração\n[3]multiplicação\n[4]divisão\n[5]sair\n");
    scanf("%d", &x);
    if (x == 5) {
      break;
    } else if (x == 1) {
      printf("ADIÇÃO digite dois numeros: ");
      scanf("%f %f", &a, &b);
      c = a + b;
      printf("= %.2f", c);
    } else if (x == 2) {
      printf("SUBTRAÇÃO digite dois numeros: ");
      scanf("%f %f", &a, &b);
      c = a - b;
      printf("= %.2f", c);
    } else if (x == 3) {
      printf("MULTIPLICAÇÃO digite dois numeros: ");
      scanf("%f %f", &a, &b);
      c = a * b;
      printf("= %.2f", c);
    } else if (x == 4) {
      printf("ADIÇÃO digite dois numeros: ");
      scanf("%f %f", &a, &b);
      if (b == 0) {
        printf("indefinido");
      } else {
        c = a / b;
        printf("= %.2f", c);
      }
    } else {
      printf("OPÇÃO INVÁLIDA");
    }
  }
  printf("Obrigado por usar a calculadora!");
  return 0;
}