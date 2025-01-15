#include <stdio.h>

int main() {
  float h,b,area=0;
  
  while (area==0){
    printf("\nDigite a altura e a base do triangulo: ");
    scanf("%f %f",&h , &b);
    if(b<=0 || h<=0){
      printf("Valor inválido !!!\n");
    }else{
      area = b*h/2;
      printf("\nArea do triangulo = %.2f",area);
    }
  }
  
  return 0;
}