#include <stdio.h>

int main() {
  int i;
  float a,soma=0;
  
  for (i = 1; i <= 10; i++) {
    printf("digite um numero: ");
    scanf("%f",&a);
    if(a>=0){
      soma = soma+a;
    }else{
      i--;
    }
  }
  
  printf("Media = %f",soma/10);


  return 0;
}