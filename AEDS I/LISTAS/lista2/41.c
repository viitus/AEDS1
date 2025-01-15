#include <stdio.h>

int main() {
  
  float r1,r2,R;
  
  printf("\n(Digite 0 para sair)\n\n");
  printf("Digite o valor das duas resistencias\n");
  
  while(1) {
    
    scanf("%f %f", &r1, &r2);
    R = (r1*r2)/(r1+r2);
    
    if(r1==0 || r2==0) break;
    
    printf("Resistencia em paralelo equivalente = %.3f\n",R);
  }
  
  return 0;
}