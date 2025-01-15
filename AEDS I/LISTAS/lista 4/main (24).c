/* Escreva um programa que recebe do usuario uma string S, um caractere C, e
umaposic ̧ao I e devolve o ındice da primeira posicao da string onde foi
encontrado o caractere C. A procura deve comecar a partir da posic ̧ao I. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char s[100];
  char c;
  int i;

  printf("Digite uma string: ");
  setbuf(stdin, NULL);
  fgets(s, 100, stdin);
  printf("Digite um caractere: ");
  scanf(" %c", &c);
  printf("Procurar a partir da posição: ");
  scanf("%d", &i);
  
  for ( ; i < strlen(s); i++) {
    if (s[i] == c){
      printf("\n%c encontrado na posição %d da string", c, i);
      break;
    } else if (s[i] == '\n'){
      printf("\n%c NAO encontrado na string", c);
    }
  }
  
  return 0;
}