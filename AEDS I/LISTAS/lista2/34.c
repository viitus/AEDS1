#include <stdio.h>
#include <stdlib.h>

int main() {

  int c=1, n=1, x=20;
  
  while(1){
    for(int i=1; i<=x; i++){
      if(n%i==0){
        c++;
      }
    } 
    if(c==x){
      break;
    }else{
      c=0;
    }
    n++;
  }

  printf("%d é o menor numero que divide todos os números de 1 a %d sem resto",n,x);

  
  
  
  return 0;
}