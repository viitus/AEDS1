/* 19. Escreva uma função que compare e retorne verdadeiro, caso uma string seja
anagrama da outra, e falso, caso contrário.*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool saoAnagramas(char str1[], char str2[]) {
  if (strlen(str1) != strlen(str2)) {
    return false;
  }
  int contagem1[26] = {0};
  int contagem2[26] = {0};
  for (int i = 0; str1[i] != '\0'; i++) {
    if (str1[i] >= 'a' && str1[i] <= 'z') {
      contagem1[str1[i] - 'a']++;
    }
  }
  for (int i = 0; str2[i] != '\0'; i++) {
    if (str2[i] >= 'a' && str2[i] <= 'z') {
      contagem2[str2[i] - 'a']++;
    }
  }
  for (int i = 0; i < 26; i++) {
    if (contagem1[i] != contagem2[i]) {
      return false;
    }
  }
  return true;
}

int main(void) {
  char str1[100], str2[100];
  
  printf("Digite a primeira string: ");
  setbuf(stdin, NULL);
  fgets(str1, 100, stdin);
  str1[strcspn(str1, "\n")] = '\0';
  
  printf("Digite a segunda string: ");
  setbuf(stdin, NULL);
  fgets(str2, 100, stdin);
  str2[strcspn(str2, "\n")] = '\0'; 
  
  
  if (saoAnagramas(str1, str2)) {
    printf("As strings são anagramas.\n");
  } else {
    printf("As strings não são anagramas.\n");
  }
  return 0;
}
