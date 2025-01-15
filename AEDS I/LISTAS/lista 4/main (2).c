#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char diga[30];
  setbuf(stdin, NULL);
  fgets(diga,30,stdin);
  
  int k=0;
  while(1){
    if(diga[k] == '\0'){
      break;
    }
    k++;
  }
  printf("\nsua string possui tamanho %d", k);
  //printf("\nsua string possui tamanho %d", strlen(diga));
  return 0;
}