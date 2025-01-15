#include <stdio.h>

int main(void) {
  int x,y,r;
  printf("digite dois numeros\n");
  scanf("%d %d",&x,&y);
  if(x>y)r=x;
  else r=y;
  printf("\n%d é o maior número",r);
  
  return 0;
}