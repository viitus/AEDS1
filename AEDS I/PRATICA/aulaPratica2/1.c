#include <stdio.h>

int main() {

  if ((2 > 7) && (9 < 3))
    printf("a) verdadeiro\n");
  else
    printf("a) Falso\n");

  if ((4 < 3) || (6 > 2))
    printf("b) verdadeiro\n");
  else
    printf("b) Falso\n");

  if (((1 == 2) || (2 > 1)) && (2 < 5))
    printf("c) verdadeiro\n");
  else
    printf("c) Falso\n");

  if ((3 != 3) && ((5 > 1) || (4 >= 4)))
    printf("d) verdadeiro\n");
  else
    printf("d) Falso\n");

  if (!((2 <= 3) && (5 >= 1)))
    printf("e) verdadeiro\n");
  else
    printf("e) Falso\n");

  return 0;
}