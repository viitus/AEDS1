/*35. Crie um programa que receba um vetor de números reais com 100 elementos.
Escreva uma função recursiva que inverta a ordem dos elementos presentes no
vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criaVetor(int v[]) {
  srand(time(NULL));
  for (int i = 0; i < 100; i++) {
    v[i] = rand() % 100;
  }
}

void inverteVetor(int vetor[], int inicio, int fim) {
  if (inicio < fim) {
    float temp = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = temp;
    inverteVetor(vetor, inicio + 1, fim - 1);
  }
}

void printaVetor(int v[]){
  printf("Vetor:\n[ ");
  for(int i=0; i<100; i++){
    printf("%d ",v[i]);
  }
  printf("]\n");
}

int main(void) {
  int v[100];
  criaVetor(v);
  printaVetor(v);
  inverteVetor(v, 0, 99);
  printaVetor(v);
  return 0;
}