/*26. Escreva uma função recursiva que calcule a soma dos primeiros n cubos: 
S(n) = 1^3 + 2^3 + ... + n^3 */

#include <stdio.h>

int somaCubo(int n){
  if(n == 1)
    return 1;
  return n*n*n + somaCubo(n-1);
}

int main(void) {
  int x;
  scanf("%d",&x);
  printf("Soma dos %d primeiros cubos: %d",x,somaCubo(x));
  return 0;
}