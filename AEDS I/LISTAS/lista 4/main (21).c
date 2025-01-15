#include <stdio.h>
#include <string.h>

void inverterFrase(char frase[]) {
  int i;
  int len = strlen(frase);
  for (i = 0; i < len; i++) {
    if (frase[i] == 'A' || frase[i] == 'a') {
      frase[i] = '*';
    }
  }
  for (i = 0; i < len / 2; i++) {
    char temp = frase[i];
    frase[i] = frase[len - i - 1];
    frase[len - i - 1] = temp;
  }
}

int main() {
  char frase1[100];
  char frase2[100];

  printf("Digite a primeira frase: ");
  setbuf(stdin, NULL);
  fgets(frase1, 100, stdin);
  frase1[strcspn(frase1, "\n")] = '\0';

  printf("Digite a segunda frase: ");
  setbuf(stdin, NULL);
  fgets(frase2, 100, stdin);
  frase2[strcspn(frase2, "\n")] = '\0';

  inverterFrase(frase1);
  printf("\nFrase 1 invertida: %s", frase1);

  inverterFrase(frase2);
  printf("\nFrase 2 invertida: %s", frase2);

  return 0;
}
