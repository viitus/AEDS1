/* Construa um programa que leia duas strings fornecidas pelo usuario e
verifique se a segunda string lida esta contida no final da primeira,
retornando o resultado da verificacao. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar(char str1[], char str2[]) {
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  if (len2 > len1) {
    return 0;
  }
  for (int i = len1 - len2, j = 0; str1[i] != '\0'; i++, j++) {
    if (str1[i] != str2[j]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  char str1[100], str2[100];

  printf("Digite a primeira string: ");
  setbuf(stdin, NULL);
  fgets(str1, 100, stdin);
  str1[strcspn(str1, "\n")] = '\0';

  printf("Digite a segunda string: ");
  setbuf(stdin, NULL);
  fgets(str2, 100, stdin);
  str2[strcspn(str2, "\n")] = '\0';

  if (verificar(str1, str2)) {
    printf("\nA segunda string está contida no final da primeira.");
  } else {
    printf("\nA segunda string NÃO está contida no final da primeira.");
  }

  return 0;
}