#include <stdio.h>

int main() {
  int n, c=1;
  printf("quantas linhas de FLoyd? ");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      if(c<10){
        printf("0");
      }
      printf("%d ",c);
      c++;
    }
    printf("\n");
  }
  return 0;
}