#include <stdio.h>

int main(void) {
  
  float s,sF;
  int h,hE,d;
  
  printf("\nDigite seu salario por hora:");
  scanf("%f",&s);
  
  printf("Digite o numero de horas trabalhadas:");
  scanf("%d",&h);

  printf("Digite o numero de horas extra trabalhadas:");
  scanf("%d",&hE);

  printf("Digite o numero de funcionarios dependentes:");
  scanf("%d",&d);

  sF = s*(h+hE) + 128*d;

  if(sF>=1434.60 && sF<=2150.00) sF = sF - sF*0.075;
  else if(sF>=2150.01 && sF<=2866.70) sF = sF - sF*0.15;
  else if(sF>=2866.71 && sF<=3582.00) sF = sF - sF*0.225;
  else if(sF>=3582.01) sF = sF - sF*0.275;

  if(sF<=500.00) sF = sF+180.00;
  else if(sF>=500.01 && sF<=1000.00) sF = sF+120.00;
  else sF = sF+100.00;
  
  printf("\nSalario Final = %.2f",sF);
  return 0;
}