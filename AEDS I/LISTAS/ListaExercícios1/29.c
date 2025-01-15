#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int q, a, b, r, c = 0, e = 0;

  srand(time(NULL));

  for (q = 1; q <= 5; q++) {
    a = rand() % 100;
    b = rand() % 100;
    printf("\nQ%d) %d + %d = ", q, a, b);
    scanf("%d", &r);
    if (r == a + b) {
      printf("Correto\n");
      c++;
    } else {
      printf("Errado\n");
      e++;
    }
  }
  printf("\nVoce obteve %d respostas corretas e %d erradas", c, e);

  return 0;
}