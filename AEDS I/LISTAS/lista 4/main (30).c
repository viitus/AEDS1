/* Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A
ocorre na cadeia B. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar(char str1[], char str2[]) {
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  int i, j, k = 0;
  for (i = 0; i <= len2 - len1; i++) {
    for (j = 0; j < len1; j++) {
      if (str2[i + j] != str1[j]) {
        break;
      }
    }
    if (j == len1) {
      k++;
    }
  }
  return k;
}

int main(void) {
  char A[100], B[100];

  printf("Digite a primeira string: ");
  setbuf(stdin, NULL);
  fgets(A, 100, stdin);
  A[strcspn(A, "\n")] = '\0';
  
  printf("Digite a segunda string: ");
  setbuf(stdin, NULL);
  fgets(B, 100, stdin);
  B[strcspn(B, "\n")] = '\0';

  int x = contar(B, A);
  printf("\nA segunda string aparece na primeira %d vezes", x);

  return 0;
}