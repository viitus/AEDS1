#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char abc[30];
  char vogal;
  printf("Insira uma string: \n");
  setbuf(stdin, NULL);
  fgets(abc, 30, stdin);
  printf("substutuir todas as vogais por qual caractere? ");
  scanf(" %c", &vogal);
  int k = 0;
  char efg[30];
  for(int i = 0; i < 30; i++){
    if(abc[i] == 'a'||abc[i] == 'e'||abc[i] == 'i'||abc[i] == 'o'||abc[i] == 'u'){
      efg[i] = vogal;
      k++;
    } else {
      efg[i] = abc[i];
    }
  }
  printf("%s",efg);
  printf("%d vogais substituidas", k);
  return 0;
}