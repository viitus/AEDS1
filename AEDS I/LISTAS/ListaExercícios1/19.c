#include <stdio.h>
int main() {
  
  int x;
  
  printf("\ninsira um numero inteiro: ");
  scanf("%d", &x);
  
  if (x % 3 == 0) {
    printf("\n%d é divisivel por 3", x);
  } else {
    printf("\n%d não é divisível por 3", x);
  }
  if (x % 5 == 0) {
    printf("\n%d é divisivel por 5", x);
  } else {
    printf("\n%d não é divisível por 5", x);
  }

  return 0;
}