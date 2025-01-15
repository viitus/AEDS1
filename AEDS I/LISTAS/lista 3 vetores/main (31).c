#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n = 10;
  int v1[n], v2[n], vu[2 * n];
  printf("insira os valores do primeiro vetor:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &v1[i]);
  }
  printf("insira os valores do segundo vetor:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &v2[i]);
  }
  int a = 0;
  for (int i = 0; i < n; i++) {
    vu[a] = v1[i];
    a++;
  }
  for (int i = 0; i < n; i++) {
    int repete = 0;
    for (int j = 0; j < 2 * n; j++) {
      if (v2[i] == vu[j]) {
        repete++;
        break;
      }
    }
    if (repete == 0) {
      vu[a] = v2[i];
      a++;
    }
  }

  printf("\nVetor uniao = ");
  for (int i = 0; i < a; i++) {
    printf("%d ", vu[i]);
  }

  return 0;
}