#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nome[30];
  char sexo[30];
  int idade;
  printf("insira seu nome: ");
  setbuf(stdin, NULL);
  fgets(nome, 30, stdin);
  printf("insira seu sexo: ");
  setbuf(stdin, NULL);
  fgets(sexo, 30, stdin);
  printf("insira sua idade: ");
  scanf("%d", &idade);
  if (idade <= 25 && strcmp(sexo, "feminino\n") == 0) {
    printf("\n%sACEITA", nome);
  } else {
    printf("\n%sNAO ACEITA", nome);
  }
  return 0;
}