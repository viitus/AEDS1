/*20. Crie uma função que calcula o comprimento de uma string e que possui o
seguinte protótipo: void tamanho(char *str, int *strsize).*/

#include <stdio.h>
#include <string.h>

void tamanho(char *str, int *strsize) {
  int count = 0;
  int i = 0;
  while (str[i] != '\0') {
    count++;
    i++;
  }
  *strsize = count;
}

int main() {
  char str[100];
  int strsize;
  
  printf("Digite uma strig: ");
  setbuf(stdin, NULL);
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  
  tamanho(str, &strsize);

  printf("O tamanho da string é: %d\n", strsize);

  return 0;
}
