#include <stdio.h>

int main() {
  
  int x, a, b, c;
  
  printf("\naté qual numero fibonacci deseja ver?\n");
  scanf("%d", &x);
  
  a = 0; // a = 2 para sequencia de Lucas
  b = 1;
  printf("%d %d ", a, b);
  
  while(c<=x){
    c = a + b;
    a = b;
    b = c;
    printf("%d ",c);
  }
  
  
  return 0;
}