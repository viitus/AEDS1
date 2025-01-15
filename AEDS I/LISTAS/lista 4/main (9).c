#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char diga[30];
  printf("insira uma string: ");
  setbuf(stdin, NULL);
  fgets(diga, 30, stdin);
  
  for (int i = 0; i < strlen(diga); i++) {
    if (diga[i] == '0') {
      diga[i] = '1';
    }
  }
  printf("string modificada: %s", diga);

  return 0;
}