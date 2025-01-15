/* 7. Faça um programa que pergunte ao usuário quantos valores ele deseja
armazenar em um vetor de double, depois use a função MALLOC para reservar
(alocar) o espaço de memória de acordo com o especificado pelo usuário. Esse
vetor deve ter um tamanho maior ou igual a 10 elementos. Use este vetor dinâmico
como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores
aleatórios (usando a função rand) entre 0 e 100. Exiba na tela os valores
armazenados nos 10 primeiros elementos do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int tamanho;

  printf("Quantos valores deseja armazenar (tamanho >= 10): ");
  scanf("%d", &tamanho);

  if (tamanho < 10) {
    printf("Tamanho deve ser maior ou igual a 10.\n");
    return 1;
  }

  double *vetor = (double *)malloc(tamanho * sizeof(double));
  if (vetor == NULL) {
    printf("Erro na alocação de memória.\n");
    return 1;
  }

  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    vetor[i] = (double)(rand() % 100 + 1);
  }

  printf("Valores nos 10 primeiros elementos do vetor:\n[ ");
  for (int i = 0; i < 10; i++) {
    printf("%.2lf ", vetor[i]);
  }
  printf("... ]\n");

  free(vetor);

  return 0;
}
