/* 27. A multiplicação de dois números inteiros pode ser feita através de somas
sucessivas. Proponha um algoritmo recursivo Multip Rec(n1,n2) que calcule a
multiplicação de dois inteiros. */

#include <stdio.h>

int MultipRec(int n1, int n2) {
  if (n2 == 0)
    return 0;
  else if (n2 > 0) 
    return n1 + MultipRec(n1, n2 - 1); 
  else
    return -MultipRec(n1, -n2);
}

int main(void) {
  int x,y;
  printf("X: ");
  scanf("%d",&x);
  printf("Y: ");
  scanf("%d",&y);
  printf("X * Y = %d",MultipRec(x, y));
  return 0;
}