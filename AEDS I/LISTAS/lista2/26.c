#include <stdio.h>

int main(void) {
  int x,y;
  printf("insira um numero inteiro: ");
  scanf("%d",&y);
  x=y;
  while(1){
    if(x%11==0 || x%17==0 || x%13==0){
      printf("%d é o primeiro multiplo de 11, 13 ou 17 a partir de %d",x,y);
      break;
    }
    x++;
  }
  
  
  return 0;
}