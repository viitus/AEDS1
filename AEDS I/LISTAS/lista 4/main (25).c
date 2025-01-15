/* Escreva um programa que leia duas palavras e diga qual deles vem primeiro na
ordem alfabetica. Dica: ‘a’ e menor do que ‘b’.  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordem(char a[], char b[]) {
  char temp[100];
  int i = 0;
  while (1) {
    if (a[i] < b[i]) {
      return;
    }
    if (a[i] == b[i]) {
      i++;
    }
    if (a[i] > b[i]) {
      strcpy(temp, a);
      strcpy(a, b);
      strcpy(b, temp);
      return;
    }
  }
  return;
}

int main() {
  char A[100], B[100];

  printf("Digite uma palavra: ");
  setbuf(stdin, NULL);
  fgets(A, 100, stdin);

  printf("Digite outra palavra: ");
  setbuf(stdin, NULL);
  fgets(B, 100, stdin);

  ordem(A, B);
  printf("\n%svem primeiro na ordem alfabetica", A);

  return 0;
}