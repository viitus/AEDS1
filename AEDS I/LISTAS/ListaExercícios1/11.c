#include <stdio.h>

int main(void) {

  int x, soma = 0;
  printf("\ninsira um numero inteiro: ");
  scanf("%d", &x);

  if (x > 0) {
    while (x > 0) {
      soma = soma + x % 10;
      x = x / 10;
    }
    printf("soma: %d", soma);
  } else {
    printf("numero inválido");
  }
  
  /* sem usar while:
  if (x < 10000 && x > 0) {
    soma = x % 10;
    x = x / 10;
    if (x < 1000 && x > 0) {
      soma = soma + x % 10;
      x = x / 10;
      if (x < 100 && x > 0) {
        soma = soma + x % 10;
        x = x / 10;
        if (x < 10 && x > 0) {
          soma = soma + x % 10;
          x = x / 10;
        }
      }
    }
    printf("soma: %d", soma);
  } else printf("numero invalido");
  */

  
  return 0;
}