#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char abc[50];
  printf("Insira uma string: \n");
  setbuf(stdin, NULL);
  fgets(abc, 50, stdin);
  for (int i = 0; i < 50; i++) {
    if (abc[i] == '\0') {
      break;
    } else if (abc[i] >= 65 && abc[i] <= 90) {
      abc[i] += 32;
    }
  }
  printf("%s", abc);
  return 0;
}