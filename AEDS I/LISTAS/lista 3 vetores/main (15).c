#include <stdio.h>

int main(void) {
  int n[20], x=0;
  printf("Insira 20 numeros:\n");

  for (int i = 0; i <20; i++) {
    scanf("%d", &n[i]);
  }

  printf("\nvetor original:\n[ ");
  for (int i = 0; i <20; i++) {
    printf("%d ", n[i]);
  }
  printf("]\n");

  printf("\nvetor sem repetição:\n[ ");
  for (int i = 0; i <20; i++) {
    for (int j = 0; j < i; j++) {
      if(n[i]==n[j]) x++; 
    }
    if(x==0){
      printf("%d ", n[i]);
    }
    x=0;
  }
  printf("]\n");

  return 0;
}