#include <stdio.h>

int main() {
  int i;
  float a,ma,me;
  
  printf("digite um numero: ");
  scanf("%f",&a);

  ma = a;
  me = a;
  
  for (i = 1; i <= 9; i++) {
    printf("digite um numero: ");
    scanf("%f",&a);
    
    if(a > ma){
      ma = a;
    }else if(a < me){
      me = a;
    }
    
  }

  
  printf("Maior = %f\nMenor = %f",ma,me);


  return 0;
}