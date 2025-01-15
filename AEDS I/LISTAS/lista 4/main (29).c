/* Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro
positivo N. Concatene nao mais que N caracteres da string  ̃ str2 a string ` str1
e termine str1 com ‘\0’. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenarN(char str1[], char str2[], int n) {
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  int i, j;
  for (j = len1, i = 0; i < n; i++, j++){
    str1[j] = str2[i];
  }
  str1[j] = '\0';
}

int main() {
  char str1[100], str2[100];
  int N;

  printf("Digite a primeira string: ");
  setbuf(stdin, NULL);
  fgets(str1, 100, stdin);
  str1[strcspn(str1, "\n")] = '\0';

  printf("Digite a segunda string: ");
  setbuf(stdin, NULL);
  fgets(str2, 100, stdin);
  str2[strcspn(str2, "\n")] = '\0';

  printf("concatenar quantos caracteres da segunda string na primeira? ");
  scanf("%d", &N);

  concatenarN(str1, str2, N);

  printf("\nNova string: %s", str1);

  return 0;
}