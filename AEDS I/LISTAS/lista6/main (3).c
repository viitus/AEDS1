#include <stdio.h>
void somaA(int *a,int*b){
  *a += *b;
}
int main(void) {
  int A,B;
  printf("insira dois numeros inteiros\n");
  scanf("%d %d",&A,&B);
  somaA(&A,&B);
  printf("A = %d\nB = %d",A,B );
  return 0;
}