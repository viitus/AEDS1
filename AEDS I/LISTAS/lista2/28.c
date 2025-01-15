#include <stdio.h>

int main() {
  
  float E=0,n,x=1;
  printf("Digite um numero inteiro: \n");
  scanf("%f",&n);

  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      x*=j; 
    }
    E+=1/x; 
    x=1;
  }

  printf("\nE = %f",E);
  
  return 0;
}