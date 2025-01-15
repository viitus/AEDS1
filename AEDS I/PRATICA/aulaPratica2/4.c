#include <stdio.h>

int main(void) {
  
  float x,fx,hx,gx;
  
  printf("\nDigite o valor de x:");
  scanf("%f",&x);

  hx = x*x + 3*x -20;
  
  if (hx <= 5) gx = 5;
  else gx = hx;

  if (gx > 10) fx = x + 2*(x*x);
  else fx = 10;

  printf("f(x) = %f",fx);

  return 0;
}