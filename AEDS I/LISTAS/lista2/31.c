#include <stdio.h>

int main() {

  float S=0,i;
  for(i=1; i<=50; i++){
    S += (2*i-1)/i;
  }  
  printf("%f",S);
  
  return 0;
}