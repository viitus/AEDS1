#include <stdio.h>

int main(void) {
  
  float n,hn=0,i;
  scanf("%f",&n);

  for(i=1; i<=n; i++){
    hn = hn + (1/i);
  }
  printf("H(%f) = %f ",n,hn);


  
  return 0;
}