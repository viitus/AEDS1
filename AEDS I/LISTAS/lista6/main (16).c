/* 16. Implemente uma função que receba como parâmetro um array de números reais de
tamanho N e retorne quantos números negativos há nesse array. Essa função deve
obedecer ao protótipo: */

#include <stdio.h>

int negativos(float *vet, int N){
  int neg = 0;
  for(int i=0; i<N; i++){
    if(vet[i] < 0){
      neg++;
    }
  }
  return neg;
}

int main(void) {
  float vet[10];
  printf("insira os valores do vetor\n");
  for(int i=0; i<10; i++){
    scanf("%f", &vet[i]);
  }
  printf("Existem %d numeros negativos no vetor",negativos(vet,10));
  return 0;
}