#include <stdio.h>

int main(void) {
  char diga[30];
  
  printf("escreva uma string:\n");
  setbuf(stdin, NULL);
  fgets(diga, 30, stdin);
  printf("sua string:\n");
  fputs(diga, stdout);
  
  return 0;
}