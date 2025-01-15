/* 5a Questão
Escreva uma função que recebe a média final de um aluno, identifica e exibe o
seu conceito, conforme a tabela abaixo. Faça um programa que leia a média de n
alunos, acionando a função para cada um deles. O valor de n deve ser lido do
teclado. */

#include <stdio.h>
void notaAluno() {
  int nota;
  char conceito;
  printf("Insira a Media Final: ");
  scanf("%d", &nota);
  if (nota <= 39)
    conceito = 'F';
  if (nota >= 40 && nota <= 59)
    conceito = 'E';
  if (nota >= 60 && nota <= 69)
    conceito = 'D';
  if (nota >= 70 && nota <= 79)
    conceito = 'C';
  if (nota >= 80 && nota <= 89)
    conceito = 'B';
  if (nota > 90)
    conceito = 'A';
  printf("Conceito: %c\n", conceito);
}
int main(void) {
  int n;
  printf("Insira a quantidade de alunos: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("\n - %dº Aluno - \n", i + 1);
    notaAluno();
  }
  return 0;
}