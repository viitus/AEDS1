#include <stdio.h>

int main(void) {
  int n = 10;
  int A[n][n];

  printf("Matriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(i < j){
        A[i][j] = 2*i + 7*j - 2; 
      }else if (i == j){
        A[i][j] = 3*i*i - 1;
      }else if (i > j){
        A[i][j] = 4*i*i*i - 5*j*j + 1;
      }
      if(A[i][j] < 1000){
        printf(" ");
        if(A[i][j] < 100){
          printf(" ");
          if(A[i][j] < 10 && A[i][j] > 0){
            printf(" ");
          }
        }
      }
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }

  
  return 0;
}