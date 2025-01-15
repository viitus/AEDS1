#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char abc[30];
  char vogal;
  printf("Insira uma string: \n");
  setbuf(stdin, NULL);
  fgets(abc, 30, stdin);
  int k = 0;
  for(int i = 0; i < 30; i++){
    if(abc[i] == ' '){
      k++;
    } 
  }
  printf("%d espaços vazios", k);
  return 0;
}