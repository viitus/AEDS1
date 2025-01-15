#include <stdio.h>

int main(void) {
  float n;
  int f;
  char c;
  printf("\nInsira a NOTA final do aluno: ");
  scanf("%f", &n);
  if (n < 0 || n > 10) {
    printf("NOTA INVALIDA!");
    return 0;
  }
  printf("\nInsira a quantidade de FALTAS do aluno: ");
  scanf("%d", &f);
  if (n >= 9 && n <= 10) {
    if (f <= 20){
      c = 'A';
    }else{
      c = 'B';
    }
  } else if (n >= 7.5 && n <= 8.9) {
    if (f <= 20) {
      c = 'B';
    } else {
      c = 'C';
    }
  } else if (n >= 5 && n <= 7.4) {
    if (f <= 20) {
      c = 'C';
    } else {
      c = 'D';
    }
  } else if (n >= 4 && n <= 4.9) {
    if (f <= 20) {
      c = 'D';
    } else {
      c = 'E';
    }
  } else {
    c = 'E';
  }
  printf("\nConseito Final: %c",c);
  return 0;
}