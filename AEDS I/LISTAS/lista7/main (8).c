/* 8. Crie um programa que declare uma estrutura (registro) para o cadastro de
alunos. a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome
(apenas um) e ano de nascimento. b) Ao início do programa, o usuário deverá
informar o número de alunos que serão armazenados c) O programa deverá alocar
dinamicamente a quantidade necessária de memória para armazenar os registros dos
alunos. d) O programa deverá pedir ao usuário que entre com as informações dos
alunos. e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/

#include <stdio.h>
#include <stdlib.h>

// a)
typedef struct {
  int matricula;
  char sobrenome[50];
  int nascimento;
} registro;

int main() {
  // b)
  int numAlunos;
  printf("Quantos alunos deseja armazenar: ");
  scanf("%d", &numAlunos);

  // c)
  registro *vetor = (registro *)malloc(numAlunos * sizeof(registro));
  if (vetor == NULL) {
    printf("Erro na alocação de memória.\n");
    return 1;
  }

  // d)
  for(int i = 0; i < numAlunos; i++){
    printf("\nInsira o numero de matricula do %dº aluno: ", i+1);
    scanf("%d", &vetor[i].matricula);
    printf("Insira o sobrenome do %dº aluno: ", i+1);
    setbuf(stdin, NULL);
    fgets(vetor[i].sobrenome, 50, stdin);
    printf("Insira o ano de nascimento do %dº aluno: ", i+1);
    scanf("%d", &vetor[i].nascimento);
  }

  // e)
  printf("\n-----------------\n\nALUNOS REGISTRADOS:\n\n");
  for(int i = 0; i < numAlunos; i++){
    printf("Matricula: %d\n", vetor[i].matricula);
    printf("Sobrenome: %s", vetor[i].sobrenome);
    printf("Ano de Nascimento: %d\n\n", vetor[i].nascimento);
  }
  
  free(vetor);
  
  return 0;
}