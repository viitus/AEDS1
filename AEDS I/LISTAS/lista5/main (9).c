/* 9. Faça uma função chamada ‘simplifica’ que recebe como parâmetro o numerador
e o denominador de uma fração. Esta função deve simplificar a fração recebida
dividindo o numerador e o denominador pelo maior fator possível. Por exemplo, a
fração 36/60 simplifica para 3/5 dividindo o numerador e o denominador por 12. A
função deve modificar as variáveis passadas como parâmetro. */

#include <stdio.h>

void simplifica(int *num, int *den) {
  int maiorFatorComum;
  for (int i = 2; i <= *num && i <= *den; i++) {
    if (*num % i == 0 && *den % i == 0) {
      maiorFatorComum = i;
    }
  }
  *num /= maiorFatorComum;
  *den /= maiorFatorComum;
}

int main() {
  int num, den;

  printf("Digite o numerador: ");
  scanf("%d", &num);

  printf("Digite o denominador: ");
  scanf("%d", &den);

  simplifica(&num, &den);

  printf("Fração simplificada: %d/%d\n", num, den);

  return 0;
}