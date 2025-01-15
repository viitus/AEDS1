/*21. Crie uma função que compara duas strings e que retorna se elas são iguais
ou diferentes.*/

#include <stdio.h>
#include <string.h>

int compararStrings(char string1[], char string2[]) {
  int resultado = strcmp(string1, string2);
  if (resultado == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  char string1[100];
  char string2[100];

  printf("Digite a primeira string: ");
  setbuf(stdin, NULL);
  fgets(string1, 100, stdin);

  printf("Digite a segunda string: ");
  setbuf(stdin, NULL);
  fgets(string2, 100, stdin);

  if (compararStrings(string1, string2)) {
    printf("As strings são iguais.\n");
  } else {
    printf("As strings são diferentes.\n");
  }

  return 0;
}
