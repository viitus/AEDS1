/* 4. Elabore uma função que receba três notas de um aluno como parâmetros e uma
letra. Se a letra for A, a função deverá calcular a média aritmética das notas
do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. */

#include <stdio.h>

float calculamedia(int a, int b, int c, char x) {
  if (x == 'A' || x == 'a') {
    return (a + b + c) / 3;
  }
  if (x == 'P' || x == 'p') {
    return (a * 5 + b * 3 + c * 2) / 10;
  }
  return 0;
}

int main(void) {
  float nota[3], media;
  char med;
  for (int i = 0; i < 3; i++) {
    printf("insira a %dª nota: ", i + 1);
    scanf("%f", &nota[i]);
  }
  printf("Calcular média Aritimetica ou Ponderada? (a/p): ");
  scanf(" %c", &med);

  media = calculamedia(nota[0], nota[1], nota[2], med);
  printf("Media = %.2f",media);
  
  return 0;
}