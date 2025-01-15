#include <stdio.h>

int main() {

  int ano, f, dia, mes;
  printf("Insira sua data de nascimento (DD/MM/AAAA):\n");
  scanf("%d%d%d", &dia, &mes, &ano);

  if ((ano % 400 == 0) || (ano % 4 == 0 && !(ano % 100 == 0))) {
    f = 29;
  } else {
    f = 28;
  }
  if (ano > 2023){
    printf("Ano inálido!");
    return 0;
  }
  if (mes < 1 || mes > 12) {
    printf("Mês inválido!");
    return 0;
  }
  switch (mes) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (dia < 1 || dia > 31) {
      printf("Dia inválido!");
      return 0;
    }
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    if (dia < 1 || dia > 30) {
      printf("Dia inválido!");
      return 0;
    }
    break;
  case 2:
    if (dia < 1 || dia > f) {
      printf("Dia inválido!");
      return 0;
    }
    break;
  }
  printf("Data valida");
  return 0;
}