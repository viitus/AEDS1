/*23. Um racional é qualquer número da forma p/q, sendo p inteiro e q inteiro
não nulo. É conveniente representar um racional por um registro: struct
racional{ int p, q; };
Vamos convencionar que o campo q de todo racional é estritamente positivo e que
o máximo divisor comum dos campos p e q é 1. Escreva:
a. uma função reduz que receba inteiros a e b e devolva o racional que
representa a/b;
b. uma função neg que receba um racional x e devolva o racional -x;
c. uma função soma que receba racionais x e y e devolva o racional que
representa a soma de x e y;
d. uma função mult que receba racionais x e y e
devolva o racional que representa o produto de x por y;
e. uma função div que receba racionais x e y e devolva o racional que representa
o quociente de x por y;*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int p, q;
} racional;

int mdc(int a, int b) {
  if (b == 0){
    return a;
  }
  return mdc(b, a % b);
}

racional reduz(int a, int b) {
  racional result;
  int divisor = mdc(abs(a), abs(b));
  result.p = a / divisor;
  result.q = b / divisor;
  return result;
}

racional neg(racional x) {
  racional result;
  result.p = -x.p;
  result.q = x.q;
  return result;
}

racional soma(racional x, racional y) {
  racional result;
  result.p = x.p * y.q + y.p * x.q;
  result.q = x.q * y.q;
  return reduz(result.p, result.q);
}

racional mult(racional x, racional y) {
  racional result;
  result.p = x.p * y.p;
  result.q = x.q * y.q;
  return reduz(result.p, result.q);
}

racional divi(racional x, racional y) {
  racional result;
  result.p = x.p * y.q;
  result.q = x.q * y.p;
  return reduz(result.p, result.q);
}

int main() {
  int a, b,c,d;
  printf("insira o numerador de X: ");
  scanf("%d",&a);
  printf("insira o denominador de X: ");
  scanf("%d",&b);
  
  printf("insira o numerador de Y: ");
  scanf("%d",&c);
  printf("insira o denominador de Y: ");
  scanf("%d",&d);
  
  racional x = reduz(a, b);
  racional y = reduz(c, d);
  racional n = neg(x);
  racional z = soma(x, y);
  racional w = mult(x, y);
  racional v = divi(x, y);

  printf("x: %d/%d\n", x.p, x.q);
  printf("y: %d/%d\n", y.p, y.q);
  printf("-x: %d/%d\n",n.p, n.q);
  printf("Soma: %d/%d\n", z.p, z.q);
  printf("Produto: %d/%d\n", w.p, w.q);
  printf("Divisão: %d/%d\n", v.p, v.q);

  return 0;
}
