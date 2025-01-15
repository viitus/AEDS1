#include <stdio.h>
#include <stdlib.h>
int main(void) {

  int x[15], comp[15], a=0;
  printf("insira 15 numeros inteiros\n");
  for (int i = 0; i < 15; i++) {
    scanf("%d", &x[i]);
  }

  for(int i=0; i<15; i++){
    if(x[i] != 0){
      comp[a] = x[i];
      a++;
    }
  }
  
  printf("\nVetor compactado = ");
  for (int i = 0; i < a; i++){
    printf("%d ",comp[i]);
  }

  return 0;
}