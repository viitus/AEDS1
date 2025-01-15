#include <stdio.h>

int main() {
  
  int n, m, x;
  
  for(int i=1000; i<=9999; i++){

    n = i/100;
    m = i%100;
    x = (m+n)*(m+n);
    
    if(x==i){
      printf("%d\n",x);
    }
    
  }
  
  return 0;
}