#include <stdio.h>

int main() {
  int i=0;
  
  printf("Digite um numero inteiro impar: ");
  scanf("%d",&i);
  
  while (i >= 0) {
    
    if(i%2!=0){
      printf("%d ",i);
    }
    i--;
  }

  
  return 0;
}