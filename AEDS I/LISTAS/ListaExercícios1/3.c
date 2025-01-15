#include <stdio.h>
#include <math.h>

int main() {
  
  float x,f;
  printf("Digite um número: ");
  scanf("%f",&x);
  
  if(x>=0){  
    f = sqrt(x);
    printf("A raiz quadrada de x é %.2f", f);
  }
  else{
    f=x*x;
    printf("x ao quadrado é %f",f);
  }
  
  return 0;
}