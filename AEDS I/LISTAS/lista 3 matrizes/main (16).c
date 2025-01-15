#include <stdio.h>

int main(void) {
  int n = 3; //numero de alunos
  char A[n][10];
  char resposta[10] = {'a','c','a','b','d','b','b','c','d','a'};
  int resultado[n];
  int matricula[n];
  printf("(opções a, b, c, d, letra minuscula)\n");
  
  for (int i = 0; i < n; i++) {
    printf("insira o numero de matricula do %dº aluno: ",i+1);
    scanf("%d",&matricula[i]);
    resultado[i] = 0;
    for (int j = 0; j < 10; j++) {
      printf("ALUNO %d, insira a resposta da questão %d = ", i+1, j+1);
      setbuf(stdin, NULL);
      scanf(" %c",&A[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      if(A[i][j] == resposta[j]){
        resultado[i]++;
      }
    }
  }

  for(int i = 0; i < n; i++){
    printf("\nAluno matricula %d: nota = %d\nrespostas: ", matricula[i], resultado[i]);
    for(int j = 0; j < 10; j++){
      printf("%c ",A[i][j]);
    }
    if(resultado[i] >= 7){
      printf(" Aprovado!!\n");
    }else{
      printf(" Reprovado!!\n");
    }
  }
  
  return 0;
}