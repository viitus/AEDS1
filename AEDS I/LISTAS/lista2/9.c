#include <stdio.h>

int main() {
  int i=1 , n , a=1;
  
  printf("digite um numero inteiro: ");
  scanf("%d",&n);

  while (i <= n) {
    printf("%d ",a);
    a = a+2;
    i++;
  }

  return 0;
}