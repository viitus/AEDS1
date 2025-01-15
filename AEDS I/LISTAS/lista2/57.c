#include <stdio.h>

int main() {
  
  int c=0, a, b, s=0, j;
  
  printf("insira dois numeros\n");
  scanf("%d %d",&a,&b);
  
  for (j=a ; j<=b; j++){
    for(int i=1; i<=j; i++){
      if(j%i==0){
        c++;
      }
    }
    if(c==2){
      s++;
      printf("%d ",j);
    }
    c=0;
  }
  printf("\nexistem %d primos entre %d e %d",s,a,b);
  
  return 0;
}