#include <stdio.h>

int main(void) {
  int mat[5][5];
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      if(i == j){
        mat[i][j] = 1;
      }else{
        mat[i][j] = 0;
      }
    }
  }
  printf("\nMATRIZ: \n");
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}