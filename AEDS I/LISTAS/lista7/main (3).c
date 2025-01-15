/* 3. Faça um programa que simule a memória de um computador: o usuário irá
especificar o tamanho da memória, ou seja, quantos bytes serão alocados do tipo
inteiro. Para tanto, a memória solicitada deve ser um valor múltiplo do tamanho
do tipo inteiro. Em seguida, o usuário terá 2 opções: inserir um valor em uma
determinada posição ou consultar o valor contido em uma determinada posição. A
memória deve iniciar com todos os dados zerados. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamMemoria, tamInteiro;

  printf("Digite o tamanho da memória em bytes: ");
  scanf("%d", &tamMemoria);
  printf("Digite o tamanho do tipo inteiro em bytes: ");
  scanf("%d", &tamInteiro);

  if (tamMemoria % tamInteiro != 0) {
    printf("O tamanho da memória deve ser um múltiplo do tamanho do inteiro.\n");
    return 1;
  }

  int *memoria = (int *)calloc(tamMemoria / tamInteiro, sizeof(int));
  int opcao, posicao, valor;

  while (1) {
    printf("\nEscolha uma opção:\n");
    printf("1 - Inserir valor em uma posição\n");
    printf("2 - Consultar valor em uma posição\n");
    printf("3 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("Digite a posição de memória (entre 0 e %d): ",(tamMemoria / tamInteiro) - 1);
      scanf("%d", &posicao);
      if (posicao >= 0 && posicao < (tamMemoria / tamInteiro)) {
        printf("Digite o valor inteiro a ser inserido: ");
        scanf("%d", &valor);
        memoria[posicao] = valor;
        printf("Valor inserido com sucesso!\n");
      } else {
        printf("Posição de memória inválida!\n");
      }
      break;
    case 2:
      printf("Digite a posição de memória (entre 0 e %d): ",(tamMemoria / tamInteiro) - 1);
      scanf("%d", &posicao);
      if (posicao >= 0 && posicao < (tamMemoria / tamInteiro)) {
        printf("Valor contido na posição %d: %d\n", posicao, memoria[posicao]);
      } else {
        printf("Posição de memória inválida!\n");
      }
      break;
    case 3:
      free(memoria);
      return 0;
    default:
      printf("Opção inválida!\n");
      break;
    }
  }

  return 0;
}
