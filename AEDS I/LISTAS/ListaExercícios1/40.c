#include <stdio.h>

int main(void) {
  float cf,cc;
  printf("insira o custo de fabrica do carro: ");
  scanf("%f",&cf);

  if(cf <= 12000){
    cc = cf + cf*0.05;
  }else if(cf>12000 && cf <=25000){
    cc = cf + cf*0.10 + cf*0.15;
  }else {
    cc = cf + cf*0.15 + cf*0.20;
  }
  
  printf("Custo para o consumidor = R$%.2f",cc);



  
  return 0;
}