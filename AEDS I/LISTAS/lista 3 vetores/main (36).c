#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n = 10;
  int x[n], temp;
  printf("insira 10 numeros inteiros\n");
  for (int i = 0; i < n; i++)
    scanf("%d", &x[i]);
  printf("\nVetor original = [ ");
  for (int i = 0; i < n; i++)
    printf("%d ", x[i]);
  printf("]");
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i-1; j++) {
      if (x[j] > x[j+1]) {
        temp = x[j];
        x[j] = x[j+1];
        x[j+1] = temp;
      }
    }
  }
  printf("\nVetor em ordem = [ ");
  for (int i = 0; i < n; i++)
    printf("%d ", x[i]);
  printf("]");
  return 0;
}