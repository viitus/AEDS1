#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char abc[30];
  printf("Insira uma string: \n");
  setbuf(stdin, NULL);
  fgets(abc, 30, stdin);
  int k = 0;
  char bc[30];
  for(int i = 0; i < 30; i++){
    if(!(abc[i] == 'a'||abc[i] == 'e'||abc[i] == 'i'||abc[i] == 'o'||abc[i] == 'u')){
      bc[k] = abc[i];
      k++;
    }
    if(abc[i] == '\n'){
      bc[k] = '\0';
      break;
    }
  }
  printf("%s",bc);
  return 0;
}