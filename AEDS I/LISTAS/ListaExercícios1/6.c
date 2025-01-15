#include <stdio.h>

int main() {
  
  int x,y;
  printf("Digite dois números: \n");
  scanf("%d%d",&x,&y);
  
  if(x>=y){
    printf("%d é maior que %d e a diferença entre eles é %d",x,y,x-y);
  }
  else{
    printf("%d é maior que %d e a diferença entre eles é %d",y,x,y-x);
  }
  
  return 0;
}