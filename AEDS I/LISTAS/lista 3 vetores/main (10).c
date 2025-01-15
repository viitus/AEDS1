#include <stdio.h>

int main(void) {

  float n[15], soma = 0, med;
  printf("Insira as notas dos 15 alunos:\n");

  for (int i = 0; i < 15; i++) {
    scanf("%f", &n[i]);
    soma += n[i];
  }
  med = soma/15;
  printf("\nA media das notas é %.2f\n", med);
  return 0;
}