#include <stdio.h>

int main() {

  double sal=2000, aum=0.015;
  int ano, x;
  
  printf("insira o ano: ");
  scanf("%d",&x);
  
  for (ano=1996; ano<=x; ano++){
    if(ano==1996){
      sal*=(1+aum);
    }else {
      aum*=2;
      sal*=(1+aum);
    }
  }
    
  printf("No ano %d, o salario será de %.2lf",x,sal);
  
  return 0;
}