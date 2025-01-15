/*11. Faça uma função não-recursiva que receba um número inteiro positivo N e
retorne o superfatorial desse número. O superfatorial de um número N é definida
pelo produto dos N primeiros fatoriais de N. Assim, o superfatorial de 4 é sf(4)
= 1! * 2! * 3! * 4! = 288.*/

#include <stdio.h>

int fat(int x) {
  int fat = 1;
  for (int i = 1; i <= x; i++) {
    fat *= i;
  }
  return fat;
}
int superFat(int x) {
  int sfat = 1;
  for (int i = 1; i <= x; i++) {
    sfat *= fat(i);
  }
  return sfat;
}

int main(void) {
  int x;
  printf("\nInsira um numero inteiro: ");
  scanf("%d", &x);
  printf("Super Fatorial: %d\n", superFat(x));
  return 0;
}