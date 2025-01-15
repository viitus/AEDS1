#include <stdio.h>

int main(void) {
  int x,i=0,j=0;
  
  printf("[1000 para sair]\n");
  printf("Digite uma sequencia de numeros \n");
  
  while(x!=1000){
    
    if(x%2==0){
      i++;
    }
    scanf("%d",&x);
    j++;
  }
  
  printf("%d numeros pares\n",i);
  printf("%d numeros digitados\n",j-1);

  
  return 0;
}