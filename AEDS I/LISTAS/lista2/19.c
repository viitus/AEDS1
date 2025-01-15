#include <stdio.h>

int main() {
  int a, u, d, c, soma;
  
  printf("Digite um numero entre 100 e 999\n");
  scanf("%d",&a);
  u = a%10;
  a = a/10;
  d = a%10;
  a = a/10;
  c = a;
  soma = u+d+c;
  printf("\n%d + %d + %d = %d",c,d,u,soma);

  return 0;
}