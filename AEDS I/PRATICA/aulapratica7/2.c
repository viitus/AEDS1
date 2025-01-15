#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct banda {
  char nome[30];
  char genero[30];
  int integrantes;
  int posicao;
};

int main(void) {
  struct banda B[5];
  for (int i = 0; i < 5; i++) {
    B[i].posicao = 0;
  }
  printf("-------------\nTOP BANDAS\n-------------\n");
  for (int i = 0; i < 5; i++) {
    printf("Nome: ");
    setbuf(stdin, NULL);
    fgets(B[i].nome, 50, stdin);
    printf("Gênero: ");
    setbuf(stdin, NULL);
    fgets(B[i].genero, 50, stdin);
    printf("Numero de integrante: ");
    scanf("%d", &B[i].integrantes);
    printf("Posição no top 5: ");
    scanf("%d", &B[i].posicao);
  }
  return 0;
}