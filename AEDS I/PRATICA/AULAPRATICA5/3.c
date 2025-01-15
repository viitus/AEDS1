#include <stdio.h>
#include <stdlib.h>
int main(){
  int mat[4][4];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("digite o elemento da linha %d e coluna %d: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  printf("\nMATRIZ:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
  printf("\nos elementos da diagonal são: ");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if(i == j){
        printf("%d ",mat[i][j]);
      }
    }
  }
  return 0;  
}