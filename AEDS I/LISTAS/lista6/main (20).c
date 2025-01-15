/* 20. Escreva uma função que receba um array de inteiros V e os endereços de duas
variáveis inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do
array. Escreva também uma função main que use essa função. */

#include <stdio.h>

void MaxMin(int V[], int *max, int *min){
  *max = V[0];
  *min = V[0];
  for(int i=0; i<9; i++){
    if(V[i] > *max){
      *max = V[i];
    }
    if(V[i] < *min){
      *min = V[i];
    }
  }
}

int main() {
  int vetor[9];
  int max, min;
  printf("insira os valores do vetor:\n");
  for(int i=0; i<9; i++){
    scanf("%d", &vetor[i]);
  }
  MaxMin(vetor, &max, &min);
  printf("maior valor no vetor = %d\n",max);
  printf("menor valor no vetor = %d\n",min);
  return 0;
}