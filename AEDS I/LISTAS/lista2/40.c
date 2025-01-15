#include <stdio.h>

int main() {
  
  int  x, m, n;
  
  printf("\n(Digite um numero negativo para sair)\n\n");
  printf("Digite varios numeros inteiros\n");
  scanf("%d", &x);
  
  m = x;
  n = x;
  
  while(x>0) {
    
    if(x>m){
      m = x;  
    }else if (x<=n){
      n = x; 
    }
    scanf("%d", &x);
  }
  
  printf("\nO maior numero foi: %d\nO menor numero foi: %d",m,n);
  
  return 0;
}