#include <stdio.h>

int main(void) {
  int x,i,soma=0;
  
  printf("insira um numero inteiro positivo: ");
  scanf("%d",&x);
  printf("\nA soma dos divisores de %d:\n1 ",x);
  
  for(i=2;i<x;i++){
    
    if(x%i==0){
      
      soma += i;
      printf("+ %d ",i);
      
      
    }
  }
  printf("= %d",soma+1);
  
  return 0;
}