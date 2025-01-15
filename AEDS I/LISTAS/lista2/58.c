#include <stdio.h>

int main() {
  
  int c=0, a, b, s=0, j, soma=0;
  
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
      soma+=j;
      printf("%d ",j);
    }
    c=0;
  }
  printf("\nexistem %d primos entre %d e %d\na soma de todos eles é = %d",s,a,b,soma);
  
  return 0;
}