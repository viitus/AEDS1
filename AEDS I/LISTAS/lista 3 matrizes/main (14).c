#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int r, n = 5;
  int A[n][n];
  int usado[100] = {0}; // vetor que recebe que verifica os numeros usados
  srand(time(NULL));

  printf("\nMatriz A:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {

      do {
        r = rand() % 100;      // escolhe um numero aletorio
      } while (usado[r] == 1); // se o numero ja for usado escolhe outro

      usado[r] = 1; // o numero usado é marcado como 1 na posição do vetor 'usado'
      A[i][j] = r; // colo o numero aleatorio na matriz

      if (A[i][j] < 10) {
        printf("0");
      }
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}