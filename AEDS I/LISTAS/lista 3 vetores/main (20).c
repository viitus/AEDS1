#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int x, v[10], w[10];
  printf("insira 10 numeros inteiros entre 0 e 50\n");
  for(int i=0; i<10; ){
    scanf("%d",&x);
    if(x>=0 && x<=50){
      v[i] = x;
      i++;
    }else{
      printf("nao permitido!\n");
    }
  }
  int j=0;
  for(int i=0; i<10; i++){
    if(v[i]%2!=0){
      w[j] = v[i];
      j++;
    }
  }
  for( ; j<10; j++){ //ou so declara o w[] como vetor cheio de zeros antes
    w[j] = 0;
  }
  printf("\n");
  for(int i=0; i<10; i++){
    printf("%d %d\n",v[i],w[i]);
  }  

  return 0;
}