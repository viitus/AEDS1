#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int v[50];
  
  for(int i=0; i<50; i++){
    v[i] = ((i+5*i)%(i+1));
    printf("%d ",v[i]);
  }

  return 0;
}