#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
  float med=0, medPar=0;
  int x, contador=0, max=INT_MIN, min=INT_MAX, contadorPar=0, soma=0, somaPar=0;

  printf("Insira quantos numeros quiser(0 para sair)\n");
  
  while (1) {
    scanf("%d", &x);
    if (x == 0) break;
    if (x > max) max = x;
    if (x < min) min = x;
    soma += x;
    contador++;
    if (x % 2 == 0) {
      somaPar += x;
      contadorPar++;
    }
  }
  med = soma / contador;
  medPar = somaPar / contadorPar;

  printf("(a) A soma dos numeros digitados: %d\n(b) A quantidade de numeros digitados: %d\n(c) A media dos numeros digitados:  %.2f\n(d) O maior numero digitado:  %d\n(e) O menor numero digitado:  %d\n(f) A media dos numeros pares:  %.2f\n",soma, contador, med, max, min, medPar);

  return 0;
}