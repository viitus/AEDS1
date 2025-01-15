#include <stdio.h>

int main() {
  int i=0, a;
  
  printf("Digite um numero inteiro par: ");
  scanf("%d",&a);
  
  while (i <= a) {
    
    if(i%2==0){
      printf("%d ",i);
    }
    i++;
  }

  
  return 0;
}