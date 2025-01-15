#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int x, d1, d2;
  
  printf("deseja lançar 2 dados quantas vezes? ");
  scanf("%d",&x);

  srand(time(NULL));

  for(int i=1; i<=x; i++){
    d1 = rand()%6 + 1;
    d2 = rand()%6 + 1;

    if(d1>d2){
      printf("\nD1:%d > D2:%d",d1,d2);
    }else if(d1<d2){
      printf("\nD1:%d < D2:%d",d1,d2);
    }else{
      printf("\nD1:%d = D2:%d",d1,d2);
    }
  }
    

  return 0;
}