/* 4. Escreva um programa que leia primeiro os 6 números gerados pela loteria e
depois os 6 números do seu bilhete. O programa então compara quantos números o
jogador acertou. Em seguida, ele aloca espaço para um vetor de tamanho igual a
quantidade de números corretos e guarda os números corretos nesse vetor.
Finalmente, o programa exibe os números sorteados e os seus números corretos. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numLoteria[6];
  int numBilhete[6];
  int acertos = 0;
  int *numCorretos = NULL;

  srand(time(NULL));
  
  printf("Digite os 6 números do seu bilhete:\n");
  for (int i = 0; i < 6; i++) {
    numLoteria[i] = rand() % 60 + 1;
    scanf("%d", &numBilhete[i]);
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (numBilhete[i] == numLoteria[j]) {
        acertos++;
        numCorretos = (int *)realloc(numCorretos, acertos * sizeof(int));
        numCorretos[acertos - 1] = numBilhete[i];
        break;
      }
    }
  }

  printf("\nNúmeros sorteados pela loteria:\n");
  for (int i = 0; i < 6; i++) {
    printf("%d ", numLoteria[i]);
  }

  if(acertos != 0){
    printf("\n\nNúmeros corretos:\n");
    for (int i = 0; i < acertos; i++) {
      printf("%d ", numCorretos[i]);
    }
  }else{
    printf("\n\nNenhum número correto.");
  }

  free(numCorretos);
  
  return 0;
}
