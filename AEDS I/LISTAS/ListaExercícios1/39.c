#include <stdio.h>

int main() {
  
  float s,a;
  int nop=0;
  
  printf("Insira seu salario atual: ");
  scanf("%f",&s);
  printf("Insira a qauntidade de anos de serviço: ");
  scanf("%f",&a);

  if (s<=500) s*=1.25;
  else if (s>500 && s<=1000) s*=1.20;
  else if (s>1000 && s<=1500) s*=1.15;
  else if (s>1500 && s<=2000) s*=1.10;
  else nop++;

  if (a<1) nop++;
  else if (a>=1 && a<=3) s+=100;
  else if (a>=4 && a<=6) s+=200;
  else if (a>=7 && a<=10) s+=300;
  else s+=500;

  if(nop == 2) printf("Nenhum aumento aplicado!");
  else printf("Salario reajustado = R$%.2f",s);
  
  return 0;
}