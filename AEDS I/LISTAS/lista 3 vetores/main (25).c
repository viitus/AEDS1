#include <stdio.h>

int main(void) {
  int vet[100];
  int i=1,j=0;
  
  while(1){
    if(i%7==0 || i%10==7){
      vet[j]=i;
      j++;
      if(j==100){
        break;
      }
    }
    i++;
  }

  for(int i=0; i<100; i++){
    printf("%d ",vet[i]);
  }
  
  return 0;
}