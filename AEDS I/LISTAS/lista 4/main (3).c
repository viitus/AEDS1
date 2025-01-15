#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("insira um nome: ");
  char diga[30];
  setbuf(stdin, NULL);
  fgets(diga, 30, stdin);
  if(diga[0] == 'a' || diga[0] == 'A'){
    printf("%s",diga);
  }
  return 0;
}