#include <stdio.h>

int main(void) {
  int i,soma=0;
  for(i=1;i<1000;i++){
    if(i%3==0 || i%5==0){
      printf("%d + ",i);
      soma += i;
    }
  }
  printf("= %d",soma);
  
  return 0;
}