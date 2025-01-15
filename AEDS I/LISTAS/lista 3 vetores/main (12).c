#include <stdio.h>
#include <float.h>
int main(void) {
  float n[5], med=0, max=FLT_MIN, min=FLT_MAX;  
  printf("Insira 5 numeros reais:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &n[i]);
    if(n[i]>max) max = n[i];
    if(n[i]<min) min = n[i];
    med += n[i];
  }
  med /= 5;
  printf("\nO vetor:\n[");
  for (int i = 0; i < 5; i++) {
    printf("%.2f ",n[i]);
  }
  printf("]\n\n");
  printf("Maior valor = %.2f\nMenor valor = %.2f\nMedia dos valores = %.2f\n",max,min,med);
  return 0;
}