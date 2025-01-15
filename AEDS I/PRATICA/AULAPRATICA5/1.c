#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int mat[4][5];
  int somaLin[4], somaTot = 0;

  for (int i = 0; i < 4; i++) {
    somaLin[i] = 0;
    for (int j = 0; j < 5; j++) {
      printf("digite o elemento da linha %d e coluna %d: ", i, j);
      scanf("%d", &mat[i][j]);
      somaTot += mat[i][j];
      somaLin[i] += mat[i][j];
    }
  }
  for (int i = 0; i < 4; i++){
    printf("\na soma da linha %d é igual a %d",i,somaLin[i]);
  }
  printf("\n\na soma de todos elementos é igual a %d",somaTot);
  return 0;
}