#include <stdio.h>

int main(void) {
  int n = 10;  // numero de alunos
  int m = 3;   // numero de provas
  int A[n][m]; // notas
  int P[m];    // piores provas

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("ALUNO %d, nota da %dª prova = ", i + 1, j + 1);
      scanf(" %d", &A[i][j]);
    }
    printf("\n");
  }

  for (int j = 0; j < m; j++) {
    P[j] = 0;
  }

  for (int i = 0; i < n; i++) {
    if (A[i][0] <= A[i][1] && A[i][0] <= A[i][2]) {
      P[0]++;
    } else if (A[i][1] <= A[i][0] && A[i][1] <= A[i][2]) {
      P[1]++;
    } else if (A[i][2] <= A[i][1] && A[i][2] <= A[i][0]) {
      P[2]++;
    }
  }

  for (int j = 0; j < m; j++) {
    printf("quantidade de alunos cuja pior nota foi na %dª prova = %d\n", j + 1, P[j]);
  }

  return 0;
}