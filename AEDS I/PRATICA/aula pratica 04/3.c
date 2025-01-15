#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[5], b[5];

  for (int i = 0; i < 5; i++) {
    printf("insira o %dº elemento do arranjo: ", i + 1);
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 5; i++) {
    b[i] = 3*a[i];  
  }
  printf("\nnovo arranjo: ");
  for (int i = 0; i < 5; i++){
    printf("%d ",b[i]);
  }

  return 0;
}