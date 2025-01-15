#include <stdio.h>

int main(void) {
  int n[6], m[6];
  printf("Insira 6 numeros inteiros:\n");
  for (int i = 0; i < 6; i++) {  
    scanf("%d", &n[i]);
  }
  for(int i=0,j=5; i<6; i++,j--){
    m[j] = n[i];
  }
  printf("vetor em ordem inversa:\n[ ");
  for (int i = 0; i < 6; i++){
    printf("%d ",m[i]);
  }
  printf("]");
  return 0;
}