#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n, i, j;
  printf("quantas linhas do triangulo de p? ");
  scanf("%d", &n);
  
  int p[n][n]; //diagonal e primeira coluna são sempre 1
  p[0][0] = 1;
  for (i = 1; i < n; i++) {
    p[i][0] = 1;
    p[i][i] = 1;
    for (j = 1; j < i; j++) {
      p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }

  return 0;
}