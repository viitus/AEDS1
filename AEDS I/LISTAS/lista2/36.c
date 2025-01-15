#include <stdio.h>

int main() {
  

  int soma1=0, soma2=0, x=100;
  printf("\npara os numeros de 1 a %d",x);
  
  for(int i=1, j; i<=x; i++){
    j=i*i;
    soma1+=j;
  }
  printf("\nsoma dos quadrados = %d",soma1);
  
  for(int i=1; i<=x; i++){
    soma2 += i; 
  }
  soma2 = soma2*soma2;
  printf("\nquadrado da soma = %d",soma2);
  
  printf("\nDiferença = %d",soma2-soma1);


  
  return 0;
}