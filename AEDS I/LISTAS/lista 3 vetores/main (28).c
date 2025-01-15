#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int v[10], v1[10], v2[10];
  int a = 0, b = 0;
  printf("insira 10 numeros inteiros\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &v[i]);
  }
  for(int i = 0; i < 10; i++){
    if(v[i] % 2 == 0){
      v1[a] = v[i];
      a++;
    } else {
      v2[b] = v[i];
      b++;
    }
  }
  printf("\nVetor original = ");
  for (int i = 0; i < 10; i++){
    printf("%d ",v[i]);
  }
  printf("\nVetor par = ");
  for (int i = 0; i < a; i++){
    printf("%d ",v1[i]);
  }
  printf("\nVetor impar = ");
  for (int i = 0; i < b; i++){
    printf("%d ",v2[i]);
  }

  return 0;
}