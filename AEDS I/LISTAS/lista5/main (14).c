/*14. Crie um programa contendo as seguintes funções que recebem um vetor V
números reais como parâmetro:
- Impressão normal do vetor.
- Impressão inversa.
- Função que retorna o maior e o menor elemento do vetor.*/

#include <stdio.h>

void vetorInverso(float v[]);
void vetorNormal(float v[]);
void maiormenor(float v[]);

int main(void) {
  float v[10];
  printf("insira os valores do vetor: \n");
  for (int i = 0; i < 10; i++) {
    scanf("%f", &v[i]);
  }
  vetorNormal(v);
  vetorInverso(v);
  maiormenor(v);
  return 0;
}

void maiormenor(float v[]) {
  float maior = v[0], menor = v[0];
  for (int i = 0; i < 10; i++) {
    if (v[i] > maior) {
      maior = v[i];
    }
    if (v[i] < menor) {
      menor = v[i];
    }
  }
  printf("\nMaior numero do vetor: %.2f\nMenor numero do vetor: %.2f", maior, menor);
}

void vetorInverso(float v[]) {
  printf("\nVetor Inverso: \n[ ");
  for (int i = 9; i >= 0; i--) {
    printf("%.2f ", v[i]);
  }
  printf("]");
}

void vetorNormal(float v[]) {
  printf("\nVetor Normal: \n[ ");
  for (int i = 0; i < 10; i++) {
    printf("%.2f ", v[i]);
  }
  printf("]");
}
