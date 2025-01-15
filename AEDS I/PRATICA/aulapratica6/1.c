#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str1[50], str2[50];
  
  printf("insira a primeira string: ");
  setbuf(stdin, NULL);
  gets(str1);

  printf("insira a segunda string: ");
  setbuf(stdin, NULL);
  gets(str2);

  if(strcmp(str1, str2) == 0){
    printf("\nstrings iguais");
  }else if (strlen(str1) > strlen(str2)) {
    printf("\na primeira string é maior que a segunda\n");
    strcat(str1, str2);
    printf("string concatenada: %s",str1);
  }else{
    printf("\na segunda string é maior que a primeira\n");
    strcat(str2, str1);
    printf("string concatenada: %s",str2);
  }

  return 0;
}