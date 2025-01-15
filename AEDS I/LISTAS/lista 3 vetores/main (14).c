#include <stdio.h>

int main(void) {
  
  int n[10]; 
  printf("Insira 10 numeros reais:\n");
  
  for (int i = 0; i < 10; i++) {
    scanf("%d", &n[i]);
  }
  
  printf("\nO vetor:\n[");
  for (int i = 0; i < 10; i++)printf("%d ",n[i]);
  printf("]\n");
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++){
      if(n[i]==n[j] && i!=j && i<j){
        printf("os valores da posição %d e %d são iguais\n",i+1,j+1);
      }
    }
  }
  return 0;
}