#include <stdio.h>

int main(void) {
  float v[10], w[10];
  printf("insira 10 valores reais\n");
  
  for(int i=0; i<10; i++){
    scanf("%f",&v[i]);
    w[i] = v[i]*v[i];
  }
  
  printf("\nOs elementos do primeiro vetor são:\n");
  for(int i=0; i<10; i++){
    printf("%.2f ",v[i]);
  }
  
  printf("\nOs quadrados dos elementos do vetor são:\n");
  for(int i=0; i<10; i++){
    printf("%.2f ",w[i]);
  }

  
  return 0;
}