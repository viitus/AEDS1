#include <stdio.h>

int main(void) {
  float n[5], med=0, max, min; 
  int posmax, posmin;
  printf("Insira 5 numeros reais:\n");
  for (int i = 0; i < 5; i++) {
    scanf("%f", &n[i]);
    if(i==0){
      max = n[0];
      min = n[0];
    }
    if(n[i]>max) {
      max = n[i];
      posmax = i+1;
    }
    if(n[i]<min){
      min = n[i];
      posmin = i+1;
    }
  }
  printf("\nO vetor:\n[");
  for (int i = 0; i < 5; i++) {
    printf("%.2f ",n[i]);
  }
  printf("]\n\n");
  printf("Maior valor esta na posição = %d\nMenor esta na posição = %d\n",posmax,posmin);
  return 0;
}