/* 9a Questão
Escreva uma função que recebe um valor inteiro e verifica se o valor é positivo
ou negativo. A função deve retornar um valor lógico (true ou false). Faça um
programa que lê n números e para cada um deles exibe uma mensagem informando se
ele é positivo ou não, dependendo se foi retornado verdadeiro ou falso pela
função. */

#include <stdbool.h>
#include <stdio.h>

bool verificar(int valor) {
  if (valor >= 0) {
    return true;
  } else {
    return false;
  }
}
/*
int verificar(int valor) {
  if (valor >= 0) {
    return 1;
  } else {
    return 0;
  }
}
*/
int main() {
  int n;
  printf("Verificar quantos numeros? ");
  scanf("%d", &n);

  int x;
  for (int i = 0; i < n; i++) {
    printf("Insira um numero: ");
    scanf("%d", &x);

    if (verificar(x)) {
      printf("Positivo.\n");
    } else {
      printf("Negativo.\n");
    }
  }

  return 0;
}
