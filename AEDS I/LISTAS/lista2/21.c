#include <stdio.h>

int main() {
  float y, prod = 1;
  int x, soma = 0;
  
  printf("Digite dois numeros\n");
  scanf("%d %f",&x,&y);
  
  while (x<=y){
    if(x%2 == 0){
      soma += x;
    }else{
      prod *= x;
    }
    x++;
  }

  printf("no intervalo entre os dois numeros\nsoma dos numeros pares = %d\nproduto dos numeros impares = %.2f",soma,prod);
 
  return 0;
}