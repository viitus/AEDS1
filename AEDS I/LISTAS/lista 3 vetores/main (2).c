#include <stdio.h>

int main(void) {
  int v[6];
  printf("insira 6 valores inteiros\n");
  for(int i=0; i<6; i++){
    scanf("%d",&v[i]);
  }
  for(int i=0; i<6; i++){
    printf("%d ",v[i]);
  }
  return 0;
}