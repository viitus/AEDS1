#include <stdio.h>

int main() {
  int j,n;
  float jfat=1,k=2,S=0;
  n=5;
  //scanf("%f",&n);
  //printf("\n1 : 0/0! = 0");
  //ignora o primeiro termo pq eu nao soube fazer 0! em code
  //por isso o contador k começa em 2
  //descomentar os printf faz fazer sentido oq eu pensei
  for (j=1; j<=2*(n-1); j++){

    jfat *= j;
    
    if(j%2==0){
      
      S+=((k-1)/jfat);
      //printf("\n%.0f : %.0f/%d! = %f",k,k-1,j,((k-1)/jfat));
      k++;
    }
    
  }
  printf("\n\nS(%d) = %f",n,S);

  return 0;
}