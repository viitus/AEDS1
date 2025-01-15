#include <stdio.h>

int main(void) {
  int v[10];
  printf("insira 10 numeros inteiros\n");
  for(int i=0; i<10; i++){
    scanf("%d",&v[i]);
  }

  for(int i=0; i<10; i++){
    if(v[i] < 0){
      v[i] = 0;
    }
  }
  
  printf("\n[ ");
  for(int i=0; i<10; i++){
    printf("%d ",v[i]);
  }
  printf("]");
  
  return 0;
}