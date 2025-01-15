#include <stdio.h>
void maiormenor(int *a, int *b){
  int temp;
  if(*b > *a){
    temp = *b;
    *b = *a;
    *a = temp;
  }
}
int main(void) {
  int A,B;
  printf("insira dois numeros inteiros\n");
  scanf("%d %d",&A,&B);
  maiormenor(&A, &B);
  printf("%d é maior que %d",A,B);
  return 0;
}