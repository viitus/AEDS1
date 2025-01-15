/* 10a Questão
Escreva uma função que lê um número indeterminado de notas de alunos, calcula e
retorna a média das notas dos alunos aprovados (nota maior ou igual a 6). Faça
um programa que imprima a média retornada pela função. */

#include <stdio.h>

float mediaAprovados() {
  float nota, soma = 0;
  int aprovados = 0;
  while (1) {
    printf("Nota: ");
    scanf("%f", &nota);
    if (nota < 0) {
      break;
    }
    if (nota >= 6) {
      soma += nota;
      aprovados++;
    }
  }
  return soma / aprovados;
}

int main() {
  printf("Digite as notas dos alunos (digite um valor negativo para parar):\n");
  float media = mediaAprovados();
  printf("Media das notas dos alunos aprovados: %.2f", media);
  
  return 0;
}