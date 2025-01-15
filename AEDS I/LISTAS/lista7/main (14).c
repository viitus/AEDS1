/* 14. Faça um programa que leia números do teclado e os armazene em um vetor alocado
dinamicamente. O usuário irá digitar uma sequência de números, sem limite de
quantidade. Os números serão digitados um a um e, sendo que caso ele deseje encerrar
a entrada de dados, ele irá digitar o número ZERO. Os dados devem ser armazenados
na memória deste modo
 Inicie com um vetor de tamanho 10 alocado dinamicamente;
 Após, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do
vetor anterior adicionado espaço para mais 10 valores (tamanho N+10, onde N
inicia com 10);
 Copie os valores já digitados da área inicial para esta área maior e libere a
memória da área inicial;
 Repita este procedimento de expandir dinamicamente com mais 10 valores o
vetor alocado cada vez que o mesmo estiver cheio. Assim o vetor irá ser
’expandido’ de 10 em 10 valores.
Ao final, exiba o vetor lido. Não use a função REALLOC. */

#include <stdio.h>
#include <stdlib.h>

void expandeVetor(int **vetor, int *tamanho) {
  int novoTamanho = (*tamanho) + 10;
  int *novoVetor = (int *)malloc(novoTamanho * sizeof(int));
  if (novoVetor == NULL) {
    printf("Erro na alocação de memória.\n");
    exit(1);
  }
  for (int i = 0; i < *tamanho; i++) {
    novoVetor[i] = (*vetor)[i];
  }
  free(*vetor);
  *vetor = novoVetor;
  *tamanho = novoTamanho;
}

void imprimeVetor(int *vetor, int tamanho) {
  printf("\nVETOR:\n[ ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("]\n");
}

int main() {
  int tamanho = 10;
  int *vetor = (int *)malloc(tamanho * sizeof(int));
  if (vetor == NULL) {
    printf("Erro na alocação de memória.\n");
    return 1;
  }
  int numero;
  int i = 0;
  printf("Digite os números (digite 0 para encerrar):\n");
  while (1) {
    scanf("%d", &numero);
    if (numero == 0) {
      break;
    }
    vetor[i] = numero;
    i++;
    if (i % tamanho == 0) {
      expandeVetor(&vetor, &tamanho);
    }
  }
  imprimeVetor(vetor, tamanho);
  free(vetor);
  return 0;
}
