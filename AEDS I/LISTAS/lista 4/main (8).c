#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char diga[30];
  printf("insira uma string: ");
  setbuf(stdin, NULL);
  fgets(diga, 30, stdin);
  int uns = 0;
  for (int i = 0; i < strlen(diga); i++) {
    if (diga[i] == '1') {
      uns++;
    }
  }
  printf("sua string possui %d numeros 1", uns);

  return 0;
}