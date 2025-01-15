#include <stdio.h>

int main(void) {

  float x, soma=0, j=0;

  printf("Digite as notas do aluno (10 ~ 20) \n");
  
  do{
    soma += x;
    scanf("%f",&x);
    j++;
  }while(x<=20 && x>=10);
  
  printf("Media das notas validas = %.2f\n",soma/(j-1));
  
  return 0;
}