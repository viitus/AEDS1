#include <stdio.h>

int main() {
  int i=1, j=0, a, x, ma=0;
  
  printf("Quantos numeros deseja ler ? ");
  scanf("%d",&a);
  
  while (i <= a) {
    printf("Digite um numero: ");
    scanf("%d",&x);
    i++;

    if(x > ma){
      ma = x;
    }else if(x==ma){
      j++;
    }
    
  }
  printf("\nO maior numero digitado foi %d, ele foi digitado %d vezes",ma,j);
  
  return 0;
}