#include <stdio.h>
int main() {
  int x;
  float a, b, res;

  printf("\nEscolha a opcão:\n1- Soma de 2 números.\n2- Diferenca entre 2 números (maior pelo menor).\n3- Produto entre 2 números.\n4- Divisão entre 2 números (o denominador não pode ser zero).\nOpção: ");
  scanf("%d", &x);
  if (x < 1 || x > 4){
    printf("\nOpção invalida");
    return 0;
  }
  printf("\nInsira dois numeros:\n");
  scanf("%f%f", &a, &b);

  switch (x) {
  case 1:
    res = a + b;
    break;
  case 2:
    if(a>=b){
      res = a - b;
    }else{
      res = b - a; 
    }
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
  }
  printf("\nResultado da operação: %.3f",res);
  return 0;
}