#include <stdio.h>

int main() {
  int i=0;
  while (i <= 100000) {
    printf("%d ",i);
    i+=1000;
  }
  printf("FIM");
  
  return 0;
}