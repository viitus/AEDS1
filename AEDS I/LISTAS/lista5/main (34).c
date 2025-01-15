/*34. Faça uma função recursiva para calcular os números de Pell. Os números de
Pell são definidos pela seguinte recursão: p(n) = 0 se n = 0; p(n) = 1 se n = 1;
p(n) = 2p(n-1)+ p(n-2) se n > 1;*/

#include <stdio.h>

int pell(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return 2 * pell(n - 1) + pell(n - 2);
}

int main(void) {
  int n;
  printf("insira um numero inteiro positivo\n");
  scanf("%d", &n);
  printf("O %dº numero de pell é %d", n, pell(n));

  return 0;
}