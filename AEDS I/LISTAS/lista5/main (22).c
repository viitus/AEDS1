/*22. Faça uma função que receba duas strings e retorne a intercalação letra a
letra da primeira com a segunda string. A string intercalada deve ser retornada
na primeira string.*/

#include <stdio.h>
#include <string.h>

void intercalar(char string1[], char string2[]) {
  int tamanhoI = strlen(string1) + strlen(string2);
  char stringI[tamanhoI];
  int i1=0, i2=0, iI=0;
  while(iI < tamanhoI){
    if(i1 < strlen(string1)){
      stringI[iI++] = string1[i1++];
    }
    if(i2 < strlen(string2)){
      stringI[iI++] = string2[i2++];
    }
  }
  stringI[iI++] = '\0';
  strcpy(string1, stringI);
}

int main() {
  char string1[100];
  char string2[100];

  printf("Digite a primeira string: ");
  setbuf(stdin, NULL);
  fgets(string1, 100, stdin);
  string1[strcspn(string1, "\n")] = '\0';
  
  printf("Digite a segunda string: ");
  setbuf(stdin, NULL);
  fgets(string2, 100, stdin);
  string2[strcspn(string2, "\n")] = '\0';
  
  intercalar(string1, string2);

  printf("String intercalada: %s", string1);

  return 0;
}
