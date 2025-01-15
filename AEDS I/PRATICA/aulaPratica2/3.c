#include <stdio.h>

int main(void) {

  int valor, contador=0;
  printf("Digite 5 numeros inteiros:\n");
  
  scanf("%d", &valor);
  if (valor%2==0)contador++;
  scanf("%d",&valor);
  if (valor%2==0)contador++;
  scanf("%d",&valor);
  if (valor%2==0)contador++;
  scanf("%d",&valor);
  if (valor%2==0)contador++;
  scanf("%d",&valor);
  if (valor%2==0)contador++;

  printf("Voce digitou %d numeros pares e %d numeros impares",contador,5-contador);
  
  return 0;
}