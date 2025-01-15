#include <stdio.h>

int main() {
  
  long x=4000000, a=0, b=1, c=0, soma=0;
  
  while(c<=x){
    c = a + b;
    a = b;
    b = c;
    if(c%2==0){
      printf("%ld ",c);
      soma+=c;
    }
  }
  printf("\na soma dos numeros fibonacci pares menores que 4milhoes = %ld",soma);
  
  return 0;
}