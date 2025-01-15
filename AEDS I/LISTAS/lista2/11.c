#include <stdio.h>

int main() {
  int i=0 , a=0;
  
  printf("Digite um numero inteiro: ");
  scanf("%d",&a);
  
  while (i <= a) {
    printf("%d ",i);
    i++;
  }

  
  return 0;
}