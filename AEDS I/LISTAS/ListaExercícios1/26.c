#include <stdio.h>

int main(void) {
  float c,d,g;
  printf("\nDistancia percorida: ");
  scanf("%f",&d);
  printf("\nGasolina consumida: ");
  scanf("%f",&g);
  c = d/g;
  if(c<=8){
    printf("\nVenda o carro!");
  }else if(c>8 && c<=14){
    printf("\nEconomico!");
  }else{
    printf("\nSuper economico!!");
  }
  return 0;
}