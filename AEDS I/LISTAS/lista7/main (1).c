/* 1. Faça um programa que receba do usuário o tamanho de uma string e chame uma
função para alocar dinamicamente essa string. Em seguida, o usuário deverá
informar o conteúdo dessa string. O programa imprime a string sem suas vogais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *removeVogais(const char *str) {
  int len = strlen(str);
  char *novaStr = (char *)malloc(len + 1); // Aloca memória para a nova string
  int j = 0;
  char c;
  for (int i = 0; i < len+1; i++) {
    c = str[i];
    // Verifica se o caractere não é uma vogal (maiúscula ou minúscula)
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' &&
        c != 'E' && c != 'I' && c != 'O' && c != 'U') {
      novaStr[j] = c; // Copia o caractere para a nova string
      j++;
    }
  }
  novaStr[j] = '\0'; // Adiciona o caractere nulo para finalizar a nova string
  return novaStr;
}

int main() {
  int tamanho;
  char *str;

  printf("Digite o tamanho da string: ");
  scanf("%d", &tamanho);

  str = (char *)malloc(tamanho + 1); // Aloca memória para a string

  printf("Digite o conteudo da string: ");
  setbuf(stdin, NULL);
  fgets(str, tamanho, stdin);
  //scanf(" %[^\n]s", str);

  char *novaStr = removeVogais(str); // Chama a função para remover as vogais

  printf("String sem vogais: %s\n", novaStr);

  free(str);     // Libera a memória alocada para a string
  free(novaStr); // Libera a memória alocada para a nova string

  return 0;
}
