#include <stdio.h>

int main(void) {
  int u, s;
  printf("digite o numero de usuario e senha\n");
  scanf("%d %d", &u, &s);

  if ((u == 675483 && s == 67453)||(u == 145627 && s == 89234)||(u == 98782 && s == 89132))
    printf("acesso permitido");
  else
    printf("acesso negado");

  return 0;
}