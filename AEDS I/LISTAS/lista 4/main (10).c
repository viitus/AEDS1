#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char abc[30];
  printf("Insira uma string: \n");
  setbuf(stdin, NULL);
  fgets(abc, 30, stdin);
  int k = 0;
  for(int i = 0; i < 30; i++){
    if(abc[i] == '\n'){
      k = i - 1;
    }
  }
  char cba[30];
  cba[k+1] = '\0';
  for(int j = 0; k >= 0; j++, k--){
    cba[j] = abc[k];
  }
  printf("%s",cba);
  return 0;
}