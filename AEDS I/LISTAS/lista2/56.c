#include <stdio.h>

int main() {
  
  long c=0, soma=0, n=2000000;
  
  for (int j=1; j<=n; j++){
    for(int i=1; i<=j; i++){
      if(j%i==0){
        c++;
      }
    }
    if(c==2){
      soma+=j;
    }
    c=0;
  }
  printf("\nSoma = %ld",soma);
  
  return 0;
}