/*31. Fac ̧a um programa que contenha um menu com as seguintes opc ̧oes:  ̃
(a) Ler uma string S1 (tamanho maximo 20 caracteres);  ́
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o  ́
resultado da comparac ̧ao;  ̃
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
concatenac ̧ao;  ̃
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere
desse ser informado pelo usuario;  ́
(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os ˆ
caracteres C1 e C2 serao lidos pelo usu  ̃ ario;  ́
(h) Verificar se uma string S2 e substring de S1. A string S2 deve ser informada pelo  ́
usuario;  ́
(i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de  ́
qual posic ̧ao deve ser criada a substring e qual  ̃ e o tamanho da substring.  ́*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu() {
  printf("\n(a) Insira uma string\n"
         "(b) Tamanho da string\n"
         "(c) Comparar strings\n"
         "(d) Concatenar strings\n"
         "(e) String inversa\n"
         "(f) Contar caractere\n"
         "(g) Substituir caractere\n"
         "(h) Verificar se substring pertence a string\n"
         "(i) Retornar substring\n");
}

int main(void) {
  char c, f, g1, g2;
  char S1[100], S2[20];
  int len, inicio, tam, contador;
  menu();
  while (1) {
    printf("\nInsira qual ação fazer: ");
    scanf(" %c", &c);
    getchar(); 

    switch (c) {
    case 'a':
      printf("Digite a primeira string: ");
      fgets(S1, sizeof(S1), stdin);
      S1[strcspn(S1, "\n")] = '\0';
      break;

    case 'b':
      len = strlen(S1);
      printf("O tamanho da primeira string é %d\n", len);
      break;

    case 'c':
      printf("Digite a segunda string: ");
      fgets(S2, sizeof(S2), stdin);
      S2[strcspn(S2, "\n")] = '\0';
      if (strcmp(S1, S2) == 0) {
        printf("A primeira e a segunda strings são iguais\n");
      } else {
        printf("A primeira e a segunda strings são diferentes\n");
      }
      break;

    case 'd':
      printf("Digite a segunda string: ");
      fgets(S2, sizeof(S2), stdin);
      S2[strcspn(S2, "\n")] = '\0';
      strcat(S1, S2);
      printf("Nova string: %s\n", S1);
      break;

    case 'e':
      len = strlen(S1);
      for (int i = len - 1; i >= 0; i--) {
        printf("%c", S1[i]);
      }
      printf("\n");
      break;

    case 'f':
      contador = 0;
      printf("Digite um caractere: ");
      scanf(" %c", &f);
      getchar(); 
      len = strlen(S1);
      for (int i = 0; i < len; i++) {
        if (S1[i] == f) {
          contador++;
        }
      }
      printf("O caractere aparece %d vezes na string\n", contador);
      break;

    case 'g':
      printf("Escolha um caractere da string: ");
      scanf(" %c", &g1);
      getchar(); 
      printf("Escolha outro caractere: ");
      scanf(" %c", &g2);
      getchar(); 
      for (int i = 0; i < strlen(S1); i++) {
        if (S1[i] == g1) {
          S1[i] = g2;
          break;
        }
      }
      printf("%s\n", S1);
      break;

    case 'h':
      printf("Digite a segunda string: ");
      fgets(S2, sizeof(S2), stdin);
      S2[strcspn(S2, "\n")] = '\0';
      if (strstr(S1, S2) != NULL) {
        printf("A substring foi encontrada.\n");
      } else {
        printf("A substring não foi encontrada.\n");
      }
      break;

    case 'i':
      printf("Criar nova substring a partir da posição: ");
      scanf("%d", &inicio);
      getchar(); 
      printf("Tamanho da substring: ");
      scanf("%d", &tam);
      getchar(); 
      len = strlen(S1);
      for (int i = inicio; i < inicio + tam && i < len; i++) {
        printf("%c", S1[i]);
      }
      printf("\n");
      break;

    default:
      printf("Ação inválida");
    }
  }

  return 0;
}
