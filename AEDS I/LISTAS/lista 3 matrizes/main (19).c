#include <stdio.h>
struct aluno {
  int matricula;
  float mediaP, mediaT, notaF;
};
int main(void) {
  struct aluno A[5];
  for (int i = 0; i < 5; i++) {
    printf("Insira a matricula do %dº aluno: ", i + 1);
    scanf("%d", &A[i].matricula);
    printf("Insira a media das provas do %dº aluno: ", i + 1);
    scanf("%f", &A[i].mediaP);
    printf("Insira a media dos trabalhos do %dº aluno: ", i + 1);
    scanf("%f", &A[i].mediaT);
    printf("\n");
    A[i].notaF = A[i].mediaP + A[i].mediaT;
  }
  float mediaTodos = 0;
  float maiorN = A[0].notaF;
  int melhorA; 
  for (int i = 0; i < 5; i++){
    mediaTodos += A[i].notaF;
    if(A[i].notaF >= maiorN){
      maiorN = A[i].notaF;
      melhorA = A[i].matricula;
    }
  }
  mediaTodos /= 5; 
  printf("#matricula do aluno com a maior nota final = %d\n", melhorA);
  printf("com a nota final = %.2f\n\n", maiorN);
  printf("Media das notas finais = %.2f",mediaTodos);
  return 0;
}