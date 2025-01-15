#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int a, A[4], b, B[4], S[5] = {0, 0, 0, 0, 0};

  printf("\ninsira o primeiro numero positivo menor que 10000: ");
  scanf("%d", &a);
  printf("\ninsira o segundo numero positivo menor que 10000: ");
  scanf("%d", &b);

  for (int i = 0; i < 4; i++) {
    if (i == 0) {
      A[0] = (((a % 1000) % 100) % 10);
      B[0] = (((b % 1000) % 100) % 10);
    } else if (i == 1) {
      A[1] = (((a % 1000) % 100) / 10);
      B[1] = (((b % 1000) % 100) / 10);
    } else if (i == 2) {
      A[2] = ((a % 1000) / 100);
      B[2] = ((b % 1000) / 100);
    } else if (i == 3) {
      A[3] = (a / 1000);
      B[3] = (b / 1000);
    }
  }

  printf("\nVetor A    =   [ ");
  for (int i = 3; i >= 0; i--)
    printf("%d ", A[i]);
  printf("]");
  printf("\nVetor B    =   [ ");
  for (int i = 3; i >= 0; i--)
    printf("%d ", B[i]);
  printf("]");

  for (int i = 0; i < 4; i++) {
    S[i] += A[i] + B[i];
    if (S[i] >= 10) {
      S[i] -= 10;
      S[i + 1] += 1;
    }
  }

  printf("\nVetor Soma = [ ");
  for (int i = 4; i >= 0; i--)
    printf("%d ", S[i]);
  printf("]");

  return 0;
}