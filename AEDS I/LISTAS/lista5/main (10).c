/*10. Faça uma função não-recursiva que receba um número inteiro positivo impar N e
retorne o fatorial duplo desse número. O fatorial duplo é definido como o produto de
todos os números naturais ímpares de 1 até algum número natural ímpar N. Assim, o
fatorial duplo de 5 é: 5!! = 1 * 3 * 5 = 15.   */

#include <stdio.h>

int fatDuplo(int x){
  int fat = 1;
  for(int i=1; i<=x; i++){
    if(i%2!=0){
      fat *= i;
    }
  }
  return fat;
}

int main(void) {
  int x;
  while(1){
    printf("\nInsira um numero inteiro: ");
    scanf("%d",&x);
    if(x%2==0){
      printf("Não é impar!!\n");
    } else {
      break;
    }
  }
  
  printf("Fatorial Duplo: %d\n",fatDuplo(x));
  return 0;
}