/*19. Escreva uma função que retorna o maior valor de um array de tamanho N.
Escreva um programa que leia N valores inteiros, imprima o array com k elementos
por linha, e o maior elemento. O valor de k também deve ser fornecido pelo
usuário.*/

#include <stdio.h>

int encontrarMaiorElemento(int array[], int tamanho) {
  int maior = array[0];
  for (int i = 1; i < tamanho; i++) {
    if (array[i] > maior) {
      maior = array[i];
    }
  }
  return maior;
}

void imprimirArray(int array[], int tamanho, int elementosPorLinha) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", array[i]);
    if ((i + 1) % elementosPorLinha == 0) {
      printf("\n");
    }
  }
  printf("\n");
}

int main() {
  int N, k;
  
  printf("Digite o tamanho do array: ");
  scanf("%d", &N);
  int array[N];
  
  printf("Digite os elementos do array:\n");
  for (int i = 0; i < N; i++) {
    scanf("%d", &array[i]);
  }
  
  printf("Digite o número de elementos por linha: ");
  scanf("%d", &k);
  
  printf("Array lido:\n");
  imprimirArray(array, N, k);
  
  printf("Maior elemento: %d\n", encontrarMaiorElemento(array, N));
  
  return 0;
}
