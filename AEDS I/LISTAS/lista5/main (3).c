/*3. Faça uma função que receba uma temperatura em graus Celsius e retorne-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0)
+ 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

float converteCF(float c) { 
  return c * 9 / 5 + 32;
}

int main(void) {
  float t;
  printf("Insira a temperatura em Celsius = ");
  scanf("%f",&t);
  printf("Temperatura em Fahrenheit = %.2f\n",converteCF(t));
  return 0;
}