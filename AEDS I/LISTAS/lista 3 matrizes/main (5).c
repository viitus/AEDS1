#include <stdio.h>

int main(void) {
  int n = 5;
  int mat[n][n], x, encontrado = 0;
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("insira o elemento [%d][%d] = ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }
  
  printf("buscar por: ");
  scanf("%d",&x);
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(mat[i][j] == x){
        printf("Elemento %d encontrado na posição %d,%d\n",x,i,j);
        encontrado ++;
      }
    }
  }
  if(!encontrado){
    printf("Elemento nao encontrado");
  }
  return 0;
}