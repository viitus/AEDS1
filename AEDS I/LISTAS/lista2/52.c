#include <stdio.h>
#include <stdlib.h>

int main() {
  int saq, a=0, b=0, c=0, d=0, e=0, f=0, g=0;
  printf("Quanto deseja sacar?: ");
  scanf("%d", &saq);
  while (saq != 0) {
    if (saq >= 100) {
      saq -= 100;
      a++;
    } else if (saq >= 50) {
      saq -= 50;
      b++;
    } else if (saq >= 20) {
      saq -= 20;
      c++;
    } else if (saq >= 10) {
      saq -= 10;
      d++;
    } else if (saq >= 5) {
      saq -= 5;
      e++;
    } else if (saq >= 2) {
      saq -= 2;
      f++;
    } else {
      saq -= 1;
      g++;
      break;
    }
  }
  if(a>0) printf("%d x R$100\n",a);
  if(b>0) printf("%d x R$50\n",b);
  if(c>0) printf("%d x R$20\n",c);
  if(d>0) printf("%d x R$10\n",d);
  if(e>0) printf("%d x R$5\n",e);
  if(f>0) printf("%d x R$2\n",f);
  if(g>0) printf("%d x R$1",g);
  
  return 0;
}