#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int mat[4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("digite o elemento da linha %d e coluna %d: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  int linhanula = 0, colunanula = 0;
  for (int i = 0; i < 4; i++) {
    int c = 0;
    for (int j = 0; j < 4; j++) {
      if (mat[i][j] == 0) {
        c++;
      }
    }
    if (c == 4) {
      linhanula++;
    }
  }
  for (int i = 0; i < 4; i++) {
    int c = 0;
    for (int j = 0; j < 4; j++) {
      if (mat[j][i] == 0) {
        c++;
      }
    }
    if (c == 4) {
      colunanula++;
    }
  }
  printf("\nesta matriz possui %d linhas nulas e %d colunas nulas",linhanula, colunanula);
  return 0;
}