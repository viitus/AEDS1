#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str[4][50], teste[50];
  for(int i=0; i<4; i++){
    printf("insira %dª string: ",i+1);
    setbuf(stdin, NULL);
    fgets(str[i], 50, stdin);
  }
  
  for(int i=0; i<4-1; i++){
    for(int j=0; j<4-i-1; j++){
      if(str[j][0] > str[j+1][0]){
        strcpy(teste, str[j]);
        strcpy(str[j], str[j+1]);
        strcpy(str[j+1], teste);
      }
    }
  }
  
  printf("\nlista de strings em ordem alfabetica:\n");
  for(int i=0; i<4; i++){
    printf("%s",str[i]);
  }
  
  return 0;
}