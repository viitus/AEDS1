#include <stdio.h>
#include <math.h>

int main() {
  
  float x,q,c,s;
  
  printf("\n(Digite um valor <= 0 para sair)\n\n");
  
  while(1) {
    
    scanf("%f", &x);
    
    if(x<=0) break;
    
    q = x*x;
    c = x*x*x;
    s = sqrt(x);
    
    printf("quadrado = %f\ncubo = %f\nraiz quadrada = %f\n\n",q,c,s);
  }
  
  return 0;
}