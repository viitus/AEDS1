#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n = 11;
  
  int x[n], temp;
  printf("insira 11 numeros inteiros\n");
  for (int i = 0; i < 11; i++){
    scanf("%d", &x[i]);
  }

  for (int i = 0; i < 6-1; i++) {
    for (int j = 0; j < 6-i-1; j++) {
      if (x[j] > x[j+1]) {
        temp = x[j];
        x[j] = x[j+1];
        x[j+1] = temp;
      }
    }
  }

  for (int i = 0; i < 11-1; i++) {
    for (int j = 6; j < 11-i-1; j++) {
      if (x[j] < x[j+1]) {
        temp = x[j];
        x[j] = x[j+1];
        x[j+1] = temp;
      }
    }
  }

  printf("\nVetor em ordem = [ ");
  for (int i = 0; i < n; i++)
    printf("%d ", x[i]);
  printf("]");
  
  return 0;
}
