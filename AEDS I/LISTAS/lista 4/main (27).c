/* Fac ̧a um programa que, dada uma string, diga se ela e um palındromo ou
nao. Lembrando que um palındromo e uma palavra que tenha a propriedade de
poder ser lida tanto da direita para a esquerda como da esquerda para a
direita. Exemplo: ovo arara Socorram-me, subi no onibus em Marrocos. anotaram a
data da maratona */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo(char b[], char c[]){
  for(int i = 0; i < strlen(b); i++){
    if(b[i] != c[i]){
      return 0;
    }
  }
  return 1;
}

int main() {
  char a[100], b[100], c[100];

  printf("escreva uma frase: ");
  setbuf(stdin, NULL);
  fgets(a, 100, stdin);
  a[strcspn(a, "\n")] = '\0';

  int i, j = 0;
  for (i = 0; a[i] != '\0'; i++) {
    if (a[i] != ' ') {
      if (a[i] >= 97 && a[i] <= 122) {
        b[j] = a[i] - 32;
      } else {
        b[j] = a[i];
      }
      j++;
    }
  }
  b[j] = '\0';
  int y = strlen(b);
  for (int x = 0; x < y ; x++) {
    c[x] = b[y-1-x];
  }
  c[y] = '\0';

  if(palindromo(b,c)){
    printf("\na frase é um palindromo");
  }else{
    printf("\na frase não é um palindromo");
  }

  return 0;
}