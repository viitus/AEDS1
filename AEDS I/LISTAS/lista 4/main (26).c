/* O codigo de Cesar e uma das mais simples e conhecidas tecnicas de
criptografia. E um tipo de substituicao na qual cada letra do texto e
substituıda por outra, que se apresenta no alfabeto abaixo dela um numero fixo
de vezes. Por exemplo, com uma troca de tres posicoes, ‘A’ seria substituıdo por
‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faca
uso desse Codigo de Cesar (3 posicoes), entre com uma string e retorne a string
codificada. Exemplo:

String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encriptar(char a[]) {
  for (int i = 0; i < 100; i++) {
    if(a[i] == '\n')
      return;
    if(a[i] != ' ')
      a[i] += 3;
  }
}

int main() {
  char A[100];

  printf("insira uma string: ");
  setbuf(stdin, NULL);
  fgets(A, 100, stdin);

  printf("\nString: %s", A);
  encriptar(A);
  printf("Nova string: %s", A);
  
  return 0;
}