#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[50], c;
  int contador = 0;
  
  printf("insira uma string: ");
  setbuf(stdin, NULL);
  fgets(str, 50, stdin);

  printf("insira um caractere: ");
  scanf("%c", &c);

  for (int i = 0; i < 50; i++) {
    if (str[i] == c) {
      contador++;
    } else if (str[i] == '\0') {
      break;
    }
  }
  printf("\no caractere [%c] aparece na string %d vezes", c, contador);
  
  return 0;
}