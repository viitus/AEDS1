#include <stdio.h>
int somaD(int *a, int *b){
  *a *= 2;
  *b *= 2;
  return *a + *b;
}
int main(void) {
  int A,B;
  printf("insira dois numeros inteiros\n");
  scanf("%d %d",&A,&B);
  printf("A soma dos dobros = %d", somaD(&A,&B));
  return 0;
}