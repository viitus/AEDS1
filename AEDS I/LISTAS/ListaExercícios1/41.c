#include <stdio.h>

int main(void) {
  float h,p,imc;
  printf("insira sua altura (em metros) e em seguida seu peso(em quilos)\n");
  scanf("%f%f",&h,&p);

  imc = p/(h*h);
  
  if(imc<=18.5) printf("Abaixo do peso");
  else if(imc>=18.6 && imc<=24.9) printf("Saudável");
  else if(imc>=25.0 && imc<=29.9) printf("Peso em excesso");
  else if(imc>=30.0 && imc<=34.9) printf("Obesidade Grau I");
  else if(imc>=35.0 && imc<=39.9) printf("Obesidade Grau II (severa)");
  else printf("Obesidade Grau III (mórbida)");
  
  return 0;
}