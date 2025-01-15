#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("insira um nome: ");
  char diga[30];
  setbuf(stdin, NULL);
  fgets(diga, 30, stdin);

  for(int i = 0; i < 4; i++){
    printf("%c",diga[i]);
  }

  return 0;
}