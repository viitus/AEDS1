#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int n = 10;
  double med = 0, sum = 0, v[n], desPadrao;
  printf("insira 10 numeros inteiros\n");
  for (int i = 0; i < n; i++) {
    scanf("%lf", &v[i]);
    med += v[i];
  }
  med = med / n;
  for (int i = 0; i < n; i++) {
    sum += pow(v[i] - med, 2);
  }
  desPadrao = sqrt(sum / n);
  printf("Média = %.5f\nDesvio Padrão = %.5f", med, desPadrao);

  return 0;
}