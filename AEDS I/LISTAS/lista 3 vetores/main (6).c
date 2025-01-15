#include <stdio.h>
#include <limits.h>
int main() {
  int n[10], max=INT_MIN, min=INT_MAX;
  printf("Insira 10 numeros inteiros:\n");
  for (int i = 0; i < 10; i++) {  
    scanf("%d", &n[i]);
  }
  for (int i = 0; i < 10; i++){
    if(n[i]>max) max=n[i];
    if(n[i]<min) min=n[i];
  }
  printf("o maior elemento = %d\no menor elemento = %d",max,min);
  return 0;
}