#include <stdio.h>
#include <math.h>
int main() {
  
  double a=1, b=1, c=1;
  
  
  while(a<1000){
    
    while(b<1000){
      c = sqrt(a*a + b*b);
      
      if(a+b+c==1000){
        printf("\nOs termos pitagoricos são a=%.0f , b=%0.f , c=%0.f",a,b,c);
        printf("\n\n%.0f^2 + %.0f^2 = %.0f^2\n%.0f + %.0f = %.0f",a,b,c,a*a,b*b,c*c);
        printf("\n\n%.0f + %.0f + %.0f = %.0f",a,b,c,a+b+c);
        return 0;//sem o return 0 mostra o resultado em que a e b trocam de valor
      }
      b++;
    }
    b=1;
    a++;
  }

  


  
  
  return 0;
}