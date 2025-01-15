/*1a Questão
Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma letra.
Se a letra for "A", o procedimento calcula e escreve a média aritmética das
notas do aluno, se for "P", calcula e escreve a sua média ponderada (pesos: 5, 3
e 2). Escreva um programa que leia 3 notas de n alunos e acione a função para
cada aluno. O valor de n deve ser lido do teclado.*/

#include <stdio.h>

float calculamedia(int a, int b, int c, char x) {
  if (x == 'A' || x == 'a') {
    return (a + b + c) / 3.0;
  }
  if (x == 'P' || x == 'p') {
    return (a * 5 + b * 3 + c * 2) / 10.0;
  }
  printf("Error.");
  return 0;
}

int main(void) {
  char med;
  int n;
  printf("insira a quantidade de alunos: ");
  scanf("%d", &n);
  float nota[n][3], media;
  for (int j = 0; j < n; j++) {
    printf("\n\n - %dº Aluno -\n", j + 1);
    for (int i = 0; i < 3; i++) {
      printf("insira a %dª nota: ", i + 1);
      scanf("%f", &nota[j][i]);
    }
    printf("Calcular média Aritimetica ou Ponderada? (a/p): ");
    scanf(" %c", &med);
    media = calculamedia(nota[j][0], nota[j][1], nota[j][2], med);
    printf("Media = %.2f", media);
  }
  return 0;
}