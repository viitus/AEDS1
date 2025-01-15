#include <stdio.h>

int main() {
  int n, i, j;
  
  printf("Digite quantos multiplos calcular: ");
  scanf("%d", &n);
  printf("Digite 2 numeros inteiros: ");
  scanf("%d %d", &i, &j);
  
  printf("\nOs primeiros %d multiplos de %d ou %d sao:\n", n, i, j);
  
  for (int c=0, m=0; c < n; m++) {
    if (m%i==0 || m%j==0) {
      printf("%d ", m);
      c++;
    }
  }
  
  return 0;
}