#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  printf("insira um nome: ");
  char diga[30];
  setbuf(stdin, NULL);
  fgets(diga,30,stdin);
  
  int k=0;
  while(1){
    if(diga[k] == '\n'){
      break;
    }
    k++;
  }
  printf("\nnome de %d letras", k);
  return 0;
}