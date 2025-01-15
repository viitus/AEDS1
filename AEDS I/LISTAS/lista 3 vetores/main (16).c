#include <stdio.h>

int main(void) {
  float re[5] = {1.22, 3.21, 4.34, 5.45, 6.44};
  int cod;
  while (1) {
    printf("\n\nO que deseja fazer?\n[0]sair\n[1]mostra o vetor na ordem direta\n[2]mostra o vetor na ordem inversa\n");
    scanf("\n%d", &cod);
    switch (cod) {
    case 1:
      printf("[ ");
      for (int i = 0; i < 5; i++) {
        printf("%.2f ", re[i]);
      }
      printf("]");
      break;
    case 2:
      printf("[ ");
      for (int i = 4; i >= 0; i--) {
        printf("%.2f ", re[i]);
      }
      printf("]");
      break;
    case 0:
      printf("Obrigado");
      return 0;
      break;
    default:
      printf("Opção invalida, tente novamente.\n");
      break;
    }
  }

  return 0;
}