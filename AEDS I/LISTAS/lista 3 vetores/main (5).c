#include <stdio.h>

int main(void) {
  int n[10], par = 0;
  printf("Insira 10 numeros inteiros:\n");
  for (int i = 0; i < 10; i++) {  
    scanf("%d", &n[i]);
    if (n[i] % 2 == 0) par++;
  }
  printf("O vetor possui %d numeros pares", par);

  return 0;
}