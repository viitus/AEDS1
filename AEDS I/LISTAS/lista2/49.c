#include <stdio.h>

int main() {

  float carlos, carlosTotal=0, joao, joaoTotal=0;
  int meses=0;
  
  printf("\ninsira o salario de Carlos: ");
  scanf("%f", &carlos);
  joao = carlos / 3;
  
  while(joaoTotal <= carlosTotal) {
    meses++;
    // printf("\n\n%d",meses);

    carlosTotal *= 1.02;
    carlosTotal = carlosTotal + carlos;
    // printf("\n%.2f",carlosTotal);

    joaoTotal *= 1.05;
    joaoTotal = joaoTotal + joao;
    // printf("\n%.2f",joaoTotal);
  }

  printf("\nEm %d meses o patimonio de João ultrapassa o de Carlos", meses);
  printf("\nCarlos = R$ %.2f", carlosTotal);
  printf("\nJoão   = R$ %.2f", joaoTotal);

  return 0;
}