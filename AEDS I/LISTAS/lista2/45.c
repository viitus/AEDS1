#include <stdio.h>

int main() {

  int x;
  float k, m;
  while(1){
    
    printf("\n[0]Sair\n[1]km/h > m/s\n[2]m/s > km/h\n");  
    scanf("%d",&x); 
    
    if(x==0){
      break;
    }else if(x==1){
      printf("km/h: ");
      scanf("%f",&k);
      m = k/3.6;
      printf(" = %.2f m/s\n",m);
    }else if(x==2){
      printf("m/s: ");
      scanf("%f",&m);
      k = m*3.6;
      printf(" = %.2f km/h\n",k);
    }else{
      printf("Opção inválida\n");
    }
  }
  printf("\nObrigado por usar o convertor");
  
  return 0;
}