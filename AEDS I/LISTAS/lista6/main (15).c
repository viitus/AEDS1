/* 15. Escreva uma função que aceita como parâmetro um array de inteiros com N
valores, e determina o maior elemento do array e o número de vezes que este
elemento ocorreu no array. Por exemplo, para um array com os seguintes
elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retornar para o programa
que a chamou o valor 15 e o número 3 (indicando que o número 15 ocorreu 3
vezes). A função deve ser do tipo void.  */

#include <stdio.h>

void maiorValor(int array[], int N, int *v, int *maior) {
  *maior = array[0];
  *v = 0;
  for (int i = 0; i < N; i++) {
    if (array[i] > *maior)
      *maior = array[i];
  }
  for (int i = 0; i < N; i++) {
    if (array[i] == *maior)
      (*v)++;
  }
}

int main(void) {
  int vetor[9] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
  int v, maior;
  maiorValor(vetor, 9, &v, &maior);
  printf("o maior numero do vetor é %d, aparecendo %d vezes", maior, v);
  return 0;
}