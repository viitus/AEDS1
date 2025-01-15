#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char abc[50];
  char def[50];
  printf("Insira uma string: \n");
  setbuf(stdin, NULL);
  fgets(abc, 50, stdin);
  int k = 0;
  for (int i = 0; i < 50; i++) {
    if (abc[i] != ' ') {
      def[k] = abc[i];
      k++;
    }
    if (abc[i] == '\0') {
      break;
    } 
  }
  printf("%s", def);
  return 0;
}