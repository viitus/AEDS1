/*12. Faça uma função que receba um vetor de inteiros e retorne quantos valores
pares ele possui.*/

#include <stdio.h>

int contarPar(int vetor[], int tamanho) {
  int c = 0;
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] % 2 == 0) {
      c++;
    }
  }
  return c;
}

int main() {
  int v[10], tamanho = 10;
  printf("Insira os elementos do vetor:\n");
  for (int i = 0; i < tamanho; i++) {
    scanf("%d", &v[i]);
  }
  printf("Quantidade de pares: %d\n", contarPar(v, tamanho));

  return 0;
}
