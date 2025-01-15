#include <stdio.h>

int main() {
  
  float x,y;
  
  printf("Digite o salario: \n");
  scanf("%f",&x);
  printf("Digite o valor da prestação do emprestimo: \n");
  scanf("%f",&y);
  
  if(y >= 0.2*x){
    printf("emprestimo não consedido");
  }
  else printf("emprestimo consedido");


  
  return 0;
}