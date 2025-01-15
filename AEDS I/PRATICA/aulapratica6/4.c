#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nome[50], sobre[50], pri, ult;
  int x;
  
  printf("insira seu nome: ");
  setbuf(stdin, NULL);
  fgets(nome, 50, stdin);

  printf("insira seu sobrenome: ");
  setbuf(stdin, NULL);
  fgets(sobre, 50, stdin);

  nome[strcspn(nome, "\n")] = ' ';
  strcat(nome, sobre);

  pri = nome[0];
  ult = nome[strlen(nome)-2];

  printf("\nstring: %s\nprimeiro caractere: %c\nultimo caractere: %c",nome,pri,ult);
  
  return 0;
}