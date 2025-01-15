#include <stdio.h>
#include <limits.h>

int main() {
  int n[10], max=INT_MIN, pos;
  printf("Insira 10 numeros inteiros:\n");
  for (int i = 0; i < 10; i++) {  
    scanf("%d", &n[i]);
  }
  for (int i = 0; i < 10; i++){
    if(n[i]>max) max=n[i];
    pos = i;
  }
  printf("[ ");
  for(int i = 0; i < 10; i++){
    printf("%d ",n[i]);
  }
  printf("]");
  printf("\no maior elemento = %d e se encontra na posição = %d\n",max,pos);
  
  return 0;
}