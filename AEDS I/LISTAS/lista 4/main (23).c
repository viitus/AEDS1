/* Escreva um programa que recebe uma string S e inteiros nao-negativos I e J e
imprima  ̃o segmento S[I..J]. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char string[100];
  int i, j;

  printf("Digite uma string: ");
  setbuf(stdin, NULL);
  fgets(string, 100, stdin);

  printf("Digite o valor de Inicio: ");
  scanf("%d", &i);

  printf("Digite o valor de Fim: ");
  scanf("%d", &j);

  if (i < 0 || j >= strlen(string) || i > j) {
    printf("Indices inválidos.\n");
    return 0;
  }
  for (int k = i; k <= j; k++) {
    printf("%c", string[k]);
  }

  return 0;
}
