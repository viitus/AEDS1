#include <stdio.h>

int main(void) {
  printf("Digite o numero de termos que deseja calcular: ");
  int n, S = 0, i = 1;
  scanf("%d", &n);
  
  printf("\nSequencia 1:");
  for (i = 1; i <= n; i++) {
    S += i;
    printf(" + %d", i);
  }
  printf(" = %d", S);
  S = 0;
  
  printf("\nSequencia 2:");
  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      S -= i;
      printf(" - %d", i);
    } else {
      S += i;
      printf(" + %d", i);
    }
  }
  printf(" = %d", S);
  S = 0;
  
  printf("\nSequencia 3:");
  for (i = 1; i <= 2 * n; i += 2) {
    S += i;
    printf(" + %d", i);
  }
  printf(" = %d", S);

  return 0;
}