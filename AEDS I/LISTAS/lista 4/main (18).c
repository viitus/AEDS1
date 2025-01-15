#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char abc[50], L1;
  char def[50], L2;
  
  printf("Insira uma string: \n");
  setbuf(stdin, NULL);
  fgets(abc, 50, stdin);
  printf("escolha uma letra da string: ");
  scanf(" %c", &L1);
  printf("substituir por qual letra?: ");
  scanf(" %c", &L2);
  
  for (int i = 0; i < 50; i++) {
    if (abc[i] == L1) {
      def[i] = L2;
    } else {
      def[i] = abc[i];
    }
    if (abc[i] == '\0') {
      break;
    } 
  }
  printf("%s", def);
  return 0;
}