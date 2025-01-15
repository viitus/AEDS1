#include <stdio.h>
#include <math.h>

int main() {
  
  float x;
  printf("\ninsira um numero: ");
  scanf("%f",&x);
  if (x>0){
    x = log10(x);
    printf("o logaritimo na base 10 do numero é: %f",x);
  }
  else printf("\nnumero invalido");
  
  
  return 0;
}