#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n = 10;
  int A[n], x, i, j;
  printf("insira 10 numeros inteiros\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    for (j = i; j > 0 && A[j - 1] > x; j--) {
      A[j] = A[j - 1];
    }
    A[j] = x;
  }
  printf("\nVetor em ordem crescente = [ ");
  for (i = 0; i < n; i++)
    printf("%d ", A[i]);
  printf("]");
  return 0;
}