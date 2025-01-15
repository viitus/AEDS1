#include <stdio.h>

int main(void) {
  int n = 4;
  int mat[n][n], max, maxl, maxc;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d",&mat[i][j]);
    }
  }
  max = mat[0][0];
  printf("\nMATRIZ: \n");
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("%d ",mat[i][j]);
      if(mat[i][j] > max){
        max = mat[i][j];
        maxl = i;
        maxc = j;
      }
    }
    printf("\n");
  }
  printf("o maior valor se encontra na linha: %d e coluna: %d",maxl+1,maxc+1);
  return 0;
}