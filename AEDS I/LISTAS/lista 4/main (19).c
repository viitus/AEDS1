#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int idade;
  char nome[30];
} aluno;

int main(void) {
  aluno a[10];
  int i = 0;
  for ( ; i < 10; ) {
    printf("\nescreva o nome do %dº aluno: ", i + 1);
    setbuf(stdin, NULL);
    fgets(a[i].nome, 30, stdin);
    int x = strcspn(a[i].nome, "\n");
    a[i].nome[x] = '\0';
    printf("escreva a idade do %dº aluno: ", i + 1);
    scanf("%d", &a[i].idade);
    if (a[i].idade < 0) {
      break;
    } else {
      i++;
    }
  }
  
  int idadeMax, idadeMin, alunoMax, alunoMin;
  idadeMax = a[0].idade;
  idadeMin = a[0].idade;

  for (int k = 0; k <= i; k++){
    if (a[k].idade > idadeMax){
      idadeMax = a[k].idade;
      alunoMax = k;
    }
    if (a[k].idade < idadeMin && a[k].idade > 0){
      idadeMin = a[k].idade;
      alunoMin = k;
    }
  }

  printf("\nAluno mais velho:\nNome: %s\nIdade: %d\n", a[alunoMax].nome, a[alunoMax].idade);
  printf("\nAluno mais novo:\nNome: %s\nIdade: %d\n", a[alunoMin].nome, a[alunoMin].idade);

  return 0;
}