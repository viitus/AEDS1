/*31. Faça uma função recursiva que receba um número inteiro positivo N e retorne o
superfatorial desse número. O superfatorial de um número N é definida pelo produto dos
N primeiros fatoriais de N. Assim, o superfatorial de 4 é: sf(4) = 1! * 2! * 3! * 4! = 288.*/

#include <stdio.h>

int fatorial(int n){
  if(n==1)
    return 1;
  return n * fatorial(n-1);
}

int superFatorial(int n){
  if(n==1)
    return 1;
  return fatorial(n) * superFatorial(n-1);
}

int main(void) { 
  int n;
  scanf("%d",&n);
  printf("SF: %d",superFatorial(n));
  return 0;
}