#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
  char naipe[10];
  char valor[3];
} Carta;

void criarBaralho(Carta baralho[]) {
  char naipes[4][10] = {"Paus", "Ouros", "Copas", "Espadas"};
  char valor[13][3] = {"A", "2", "3",  "4", "5", "6", "7",
                       "8", "9", "10", "J", "Q", "K"};
  int i, j, k = 0;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 13; j++) {
      strcpy(baralho[k].valor, valor[j]);
      strcpy(baralho[k].naipe, naipes[i]);
      k++;
    }
  }
}

int main() {
  Carta baralho[52];
  int x, y;
  criarBaralho(baralho);

  printf("distribuir quantas cartas ? ");
  scanf("%d", &x);
  printf("quantos participantes ? ");
  scanf("%d", &y);

  srand(time(NULL));
  int numeros[52];
  for (int i = 0; i < 52; i++) {
    numeros[i] = i;
  }
  for (int i = 52 - 1; i > 0; i--) {
    int j = rand() % (i + 1);
    int temp = numeros[i];
    numeros[i] = numeros[j];
    numeros[j] = temp;
  }

  int k = 0;
  for (int i = 0; i < y; i++) {
    printf("\nJogador %d:\n", i + 1);
    for (int j = 0; j < x; j++) {
      printf("%s de %s\n", baralho[numeros[k]].valor, baralho[numeros[k]].naipe);
      k++;
    }
  }
  
  return 0;
}
