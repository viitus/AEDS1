#include <stdio.h>

int main(void) {
  int n = 4;
  int mat[n][n], contador = 0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      mat[i][j] = i*j;
    }
  }
  printf("\nMATRIZ: \n");
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}