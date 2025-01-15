#include <stdio.h>

int main() {
  
  int p,c=0;
  
  printf("insira um numero inteiro: ");
  scanf("%d",&p);
  
  for(int i=1; i<=p; i++){
    if(p%i==0){
      c++;
    }
  }
  if(c==2){
    printf("%d é primo",p);
  }else {
    printf("%d não é primo",p);
  }
  return 0;
}