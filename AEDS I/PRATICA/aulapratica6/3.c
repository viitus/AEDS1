#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char str1[50], str2[50];
  int x;
  
  printf("insira a primeira string: ");
  setbuf(stdin, NULL);
  fgets(str1, 50, stdin);

  printf("insira a segunda string: ");
  setbuf(stdin, NULL);
  fgets(str2, 50, stdin);
  
  printf("comparar quantos caracteres? ");
  scanf("%d", &x);

  str1[x] = '\0';
  str2[x] = '\0';
    
  if (strcmp(str1, str2) == 0){
    printf("\n0");
  }else{
    printf("\n-1");
  }
  
  return 0;
}