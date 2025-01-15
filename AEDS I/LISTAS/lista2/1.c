#include <stdio.h>

int main(void) {
  int x=3,c=0;
  printf("os 5 primeiros multiples de 3 são: ");
  
  while(c<5){
    printf("%d ",x);
    x*=3;
    c++;
  }
  
  return 0;
}