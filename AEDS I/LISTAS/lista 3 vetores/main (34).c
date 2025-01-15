#include <stdio.h>
#include <stdlib.h>
int main(void) {

  int v[10], x, repete = 0;
  for (int a = 0; a < 10; ) {
    printf("Insira o %dº valor do vetor: ", a + 1);
    scanf("%d", &x);

    for (int j = 0; j < a; j++) {
      if (x == v[j]) {
        repete++;
      }
    }

    if (repete == 0) {
      v[a] = x;
      a++;
    } else {
      printf("Valor repetido\n");
      repete = 0;
    }
  }

  printf("\nVetor = ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", v[i]);
  }
  return 0;
}