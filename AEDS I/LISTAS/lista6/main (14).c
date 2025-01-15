/*14. Implemente uma função que calcule a área da superfície e o volume de uma
esfera de raio R. Essa função deve obedecer ao protótipo: */

#include <math.h>
#include <stdio.h>

void calc_esfera(float R, float *area, float *volume);

int main(void) {
  float raio, area, volume;
  printf("insira o valor do raio da esfera: ");
  scanf("%f", &raio);
  calc_esfera(raio, &area, &volume);
  printf("Area = %f\n", area);
  printf("Volume = %f\n", volume);
  return 0;
}

void calc_esfera(float R, float *area, float *volume) {
  *area = 4.0 * M_PI * pow(R, 2);
  *volume = 4.0 / 3.0 * M_PI * pow(R, 3);
}