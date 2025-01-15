#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int v[10];
  printf("insira 10 numeros inteiros\n");
  for(int i=0; i<10; i++){
    scanf("%d",&v[i]);
  }
  int x;
  printf("insira um numero inteiro\n");
  scanf("%d",&x);

  for(int i=0; i<10; i++){
    if(v[i]%x==0){
      printf("%d ",v[i]);
    }
  }
  printf(" são multiplos de %d presentes na matriz",x);
  return 0;
}