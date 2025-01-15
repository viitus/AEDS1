#include <stdio.h>

int main(void) {
  int mat[4][4], contador = 0;
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      printf("insira o elemento [%d][%d] = ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
      if(mat[i][j] > 10){
        contador++;
      }
    }
  }
  printf("\nexistem %d elementos maiores que 10 na matriz",contador);
  return 0;
}