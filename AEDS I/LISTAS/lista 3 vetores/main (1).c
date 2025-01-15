#include <stdio.h>

int main(void) {
  int A[6], soma=0;
  //a)
  A[0] = 1;
  A[1] = 0;
  A[2] = 5;
  A[3] = -2;
  A[4] = -5;
  A[5] = 7;
  
  for(int i=0; i<6; i++){
    if(i==0 || i==1 ||i==5){   //b)
      soma += A[i];
    }
    if(i==3){  //c)
      A[i] = 100;
    }
  }
  printf("Soma de A[0] + A[1] + A[5] = %d\n",soma); //b)
  
  for(int i=0; i<6; i++){
    printf("A[%d] = %d\n",i,A[i]);  //d)
  }
  
  return 0;
}