#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int v[6], v1[6], v2[6];
  int a = 0, b = 0, soma = 0;
  printf("insira 10 numeros inteiros\n");
  for (int i = 0; i < 6; i++) {
    scanf("%d", &v[i]);
  }
  for(int i = 0; i < 6; i++){
    if(v[i] % 2 == 0){
      v1[a] = v[i];
      a++;
    } else {
      v2[b] = v[i];
      b++;
    }
  }
  printf("\nVetor original = ");
  for (int i = 0; i < 6; i++){
    printf("%d ",v[i]);
  }
  printf("\n\nNumeros pares = ");
  for (int i = 0; i < a; i++){
    printf("%d ",v1[i]);
    soma += v1[i];
  }
  printf("\nSoma dos numeros pares = %d", soma);
  printf("\nNumeros impares = ");
  for (int i = 0; i < b; i++){
    printf("%d ",v2[i]);
  }
  printf("\nQuantidade de numeros impares = %d", b);
  return 0;
}