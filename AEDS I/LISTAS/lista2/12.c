#include <stdio.h>

int main() {
  int  a=0;
  
  printf("Digite um numero inteiro: ");
  scanf("%d",&a);
  
  while (a >= 0) {
    printf("%d ",a);
    a--;
  }

  
  return 0;
}