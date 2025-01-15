/*18. Faça uma função que recebe, por parâmetro, uma matriz A[7][6] e uma coluna N e
retorne a soma dos elementos dessa coluna.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeM(int m[7][6]) {
  printf("\nMatriz: \n");
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 6; j++) {
      if (m[i][j] < 10) {
        printf(" ");
      }
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}
void imprimeColuna(int m[7][6], int c){
  printf("[ ");
  for (int i = 0; i < 7; i++) {
     printf("%d ",m[i][c]);
  }
  printf("]");
}
int soma(int m[7][6], int c){
  int soma=0;
  for(int i=0; i<7; i++){
    soma += m[i][c];
  }
  return soma;
}
int main(void) {
  int m[7][6];
  srand(time(NULL));
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 6; j++) {
      m[i][j] = rand() % 100;
    }
  }
  imprimeM(m);
  printf("\nEscolha uma coluna da matriz: ");
  int c;
  scanf("%d",&c);
  imprimeColuna(m, c-1);
  printf(" Soma da coluna = %d",soma(m,c));
  return 0;
}