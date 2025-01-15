/*9. Elabore uma função que receba duas strings como parâmetros e verifique se a
segunda string ocorre dentro da primeira. Use aritmética de ponteiros para
acessar os caracteres das strings. */

#include <stdio.h>
#include <string.h>

int verificaString(char *str1, char *str2) {
  char *ptr1 = str1;
  char *ptr2 = str2;

  while (*ptr1 != '\0') {
    char *temp = ptr1;
    while (*temp == *ptr2 && *temp != '\0' && *ptr2 != '\0') {
      temp++;
      ptr2++;
    }
    if (*ptr2 == '\0') {
      return 1;
    }
    ptr1++;
    ptr2 = str2;
  }
  return 0;
}

int main(void) {
  char principal[30];
  char substring[30];
  printf("insira a string principal: \n");
  setbuf(stdin, NULL);
  fgets(principal, 30, stdin);
  principal[strcspn(principal, "\n")] = '\0';

  printf("insira a segunda string: \n");
  setbuf(stdin, NULL);
  fgets(substring, 30, stdin);
  substring[strcspn(substring, "\n")] = '\0';

  if (verificaString(principal, substring))
    printf("a segunda string é substring da primeira");
  else
    printf("não é substring");
  return 0;
}