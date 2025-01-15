#include <stdio.h>

int main(void) {
  int x,i;
  printf("insira um numero inteiro positivo: ");
  scanf("%d",&x);

  printf("\nOs divisores de %d são: ",x);
  for(i=1;i<=x;i++){
    if(x%i==0){
      printf("%d ",i);
    }
  }
  
  return 0;
}