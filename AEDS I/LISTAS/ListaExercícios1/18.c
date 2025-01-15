#include <stdio.h>
int main() {
  int x;
  float a, b, res;

  printf("Qual operação deseja fazer?\nAdição(1)\nSubitração(2)\nMultiplicação (3)\nDivisão(4)\n");
  scanf("%d", &x);

  printf("\ninsira dois numeros\n");
  scanf("%f%f", &a, &b);

  switch (x) {
  case 1:
    res = a + b;
    break;
  case 2:
    res = a - b;
    break;
  case 3:
    res = a * b;
    break;
  case 4:
    if(b == 0){
      printf("\nindefinido!");
      return 0;
    }else{
      res = a / b;
    }
    break;
  default:
    printf("\nOpção invalida");
  }
  printf("\nResultado da operação: %.2f",res);
  return 0;
}