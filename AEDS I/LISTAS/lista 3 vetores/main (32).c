#include <stdio.h>
#include <stdlib.h>
int main(void) {

  int n = 5;
  int x[n], y[n];
  printf("insira os valores do primeiro vetor:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }
  printf("insira os valores do segundo vetor:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &y[i]);
  }

  int soma[n], mult[n];
  for (int i = 0; i < n; i++) {
    soma[i] = x[i] + y[i];
    mult[i] = x[i] * y[i];
  }
  printf("\nVetor soma = ");
  for (int i = 0; i < n; i++) {
    printf("%d ", soma[i]);
  }
  printf("\nVetor multiplicação = ");
  for (int i = 0; i < n; i++) {
    printf("%d ", mult[i]);
  }

  int uni[2 * n], a = 0;
  for (int i = 0; i < n; i++) {
    uni[a] = x[i];
    a++;
  }
  for (int i = 0; i < n; i++) {
    int repete = 0;
    for (int j = 0; j < 2 * n; j++) {
      if (y[i] == uni[j]) {
        repete++;
        break;
      }
    }
    if (repete == 0) {
      uni[a] = y[i];
      a++;
    }
  }
  printf("\nVetor uniao = ");
  for (int i = 0; i < a; i++) {
    printf("%d ", uni[i]);
  }

  int inte[n], c = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (x[i] == y[j]) {
        inte[c] = y[j];
        c++;
        break;
      }
    }
  }
  printf("\nVetor interseção = ");
  for (int i = 0; i < c; i++) {
    printf("%d ", inte[i]);
  }

  int dif[n], b = 0;
  for (int i = 0; i < n; i++) {
    int repete = 0;
    for (int j = 0; j < n; j++) {
      if (x[i] == y[j]) {
        repete++;
        break;
      }
    }
    if(repete == 0){
      dif[b] = x[i];
      b++;
    }
  }
  for (int i = 0; i < n; i++) {
    int repete = 0;
    for (int j = 0; j < n; j++) {
      if (y[i] == x[j]) {
        repete++;
        break;
      }
    }
    if(repete == 0){
      dif[b] = y[i];
      b++;
    }
  }
  printf("\nVetor diferença = ");
  for (int i = 0; i < b; i++) {
    printf("%d ", dif[i]);
  }
  
  return 0;
}