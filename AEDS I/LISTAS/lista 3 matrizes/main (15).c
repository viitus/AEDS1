#include <stdio.h>

int main(void) {
  
  char A[5][10];
  char resposta[10] = {'a','c','a','b','d','b','b','c','d','a'};
  int resultado[5] = {0};

  printf("(opções a, b, c, d, letra minuscula)\n");
  
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      printf("ALUNO %d, insira a resposta da questão %d = ", i+1, j+1);
      setbuf(stdin, NULL);
      scanf(" %c",&A[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      if(A[i][j] == resposta[j]){
        resultado[i]++;
      }
    }
  }

  for(int i = 0; i < 5; i++){
    printf("Nota do aluno %d = %d\n", i+1, resultado[i]);
  }
  
  return 0;
}