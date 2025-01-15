#include <stdio.h>

int main() {
  
  float x, soma, c=0;
  
  printf("\nDigite todas as idades (0 para sair)\n");
  
  while(1) {
    scanf("%f", &x);
    if(x<=0) break;
    soma+=x;
    c++;
  }
  
  printf("media das idades = %f",soma/c);
  
  return 0;
}