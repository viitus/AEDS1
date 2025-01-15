#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int x, q = 0, c = 0;
  srand(time(NULL));
  x = rand() % 1000 + 1;

  while (q != x) {

    printf("Chute: ");
    scanf("%d", &q);
    c++;

    if (q > x) {
      printf("é menor\n");
    } else if (q < x) {
      printf("é maior\n");
    } else {
      printf("Acertou em %d tentativas", c);
    }
  }

  return 0;
}