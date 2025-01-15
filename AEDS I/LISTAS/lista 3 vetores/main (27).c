#include <stdio.h>
#include <stdlib.h>
int main(void) {

  int x[10];

  printf("insira 10 numeros inteiros\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &x[i]);
  }

  printf("para o vetor: \n[ ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", x[i]);
  }
  printf("]");

  for (int i = 0; i < 10; i++) {
    int c = 0;
    for (int j = 1; j <= x[i]; j++) {
      if (x[i] % j == 0) {
        c++;
      }
    }
    if (c == 2) {
      printf("\no numero %d na posição %d do vetor é primo", x[i], i-1);
    }
  }
  
  return 0;
}