#include <stdio.h>

int main() {
  
  int x,y;
  printf("Digite dois números: \n");
  scanf("%d%d",&x,&y);
  
  if(x>y){
    printf("%d é o maior",x);
  }
  else if (y>x){
    printf("%d é o maior ",y);
  }
  else {
    printf("numeors iguais");
  }
  
  return 0;
}