#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char nome1[30];
  char nome2[30];

  printf("insira nome1: ");
  setbuf(stdin, NULL);
  fgets(nome1, 30, stdin);
  printf("insira nome2: ");
  setbuf(stdin, NULL);
  fgets(nome2, 30, stdin);
  
  int k = 0;
  if (strlen(nome1) == strlen(nome2)) {
    for (int i = 0; i < strlen(nome1); i++) {
      if (nome1[i] == nome2[i]) {
        k++;
      } else {
        printf("strings diferentes");
        break;
      }
    }
  } else {
    printf("strings diferentes");
  }
  if(k == strlen(nome1)){
    printf("strings iguais");
  }
  
  return 0;
}