#include <stdio.h>
#include <math.h>

int main() {
  
  float x,f,g;
  printf("Digite um número: ");
  scanf("%f",&x);
  
  if(x>=0){  
    f = sqrt(x);
    printf("A raiz quadrada de x é %.2f\n", f);
    g = x*x;
    printf("x ao quadrado é %.2f", g);
  }
  else{
    printf("numero invalido");
  }
  
  return 0;
}