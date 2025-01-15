#include <stdio.h>

int main() {
  
  int c=0,k=1, soma=0, n;
  
  printf("somar quantos primos ? ");
  scanf("%d",&n);
  
  for (int j=1; k<=n; j++){
    for(int i=1; i<=j; i++){
      if(j%i==0){
        c++;
      }
    }
    if(c==2){
      printf("%d ",j);
      soma+=j;
      k++;
    }
    c=0;
    
  }
  printf("\nSoma = %d",soma);
  
  return 0;
}