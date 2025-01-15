#include <stdio.h>

int main(void) {

  float n[10], soma = 0;
  int neg = 0;
  printf("Insira 10 numeros reais:\n");

  for (int i = 0; i < 10; i++) {
    scanf("%f", &n[i]);
    if (n[i] >= 0) {
      soma += n[i];
    } else {
      neg++;
    }
  }
  printf("\nO vetor possui %d numeros negativos e a soma dos positivos é = %.2f\n",neg,soma);
  return 0;
}