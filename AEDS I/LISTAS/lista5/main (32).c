/*32. Faça uma função recursiva que receba um número N e retorne o N-ésimo termo
da sequência de tetranacci. Os números tetranacci iniciam com quatro termos pré-
determinados e a partir daí todos os demais números são obtidos pela soma dos
quatro números anteriores. Os primeiros números tetranacci são: 0, 0, 0, 1, 1,
2, 4, 8, 15, 29, 56, 108, 208...*/

#include <stdio.h>

int tetranacci(int n) {
  if (n == 1 || n == 2 || n == 3)
    return 0;
  else if (n == 4)
    return 1;
  return tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
}

int main() {
  int n;
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  printf("O %d-ésimo termo da sequência de Tetranacci é: %d\n", n, tetranacci(n));
  return 0;
}
