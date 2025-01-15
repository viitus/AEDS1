/* 16. Faça um programa que:
 Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N
cidades e as armazene em um vetor de estruturas (N é informado pelo usuário);
 Crie uma matriz de distâncias entre cidades de tamanho N x N;
 Calcule as distâncias entre cada duas cidades e armazene na matriz;
 Exiba na tela a matriz de distâncias obtida;
 Quando o usuário digitar o número de duas cidades o programa deverá retornar
a distância entre elas. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[50];
  int x;
  int y;
} Cidade;

double calcularDistancia(Cidade cidade1, Cidade cidade2) {
  int deltaX = cidade2.x - cidade1.x;
  int deltaY = cidade2.y - cidade1.y;
  return sqrt(deltaX * deltaX + deltaY * deltaY);
}

void exibirMatrizDistancias(double **matrizDistancias, int N) {
  printf("\nMatriz de Distâncias entre as cidades:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%.2lf ", matrizDistancias[i][j]);
    }
    printf("\n");
  }
}

void liberarMatrizDistancias(double **matrizDistancias, int N) {
  for (int i = 0; i < N; i++) {
    free(matrizDistancias[i]);
  }
  free(matrizDistancias);
}

int main() {
  int N;

  printf("Digite o número de cidades: ");
  scanf("%d", &N);

  Cidade *cidades = (Cidade *)malloc(N * sizeof(Cidade));
  if (cidades == NULL) {
    printf("Erro na alocação de memória.\n");
    return 1;
  }

  for (int i = 0; i < N; i++) {
    printf("\nDigite o nome da cidade %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(cidades[i].nome, 50, stdin);
    cidades[i].nome[strcspn(cidades[i].nome, "\n")] = '\0';
    printf("Digite a coordenada X da cidade %d: ", i + 1);
    scanf("%d", &cidades[i].x);
    printf("Digite a coordenada Y da cidade %d: ", i + 1);
    scanf("%d", &cidades[i].y);
  }

  double **matrizDistancias = (double **)malloc(N * sizeof(double *));
  for (int i = 0; i < N; i++) {
    matrizDistancias[i] = (double *)malloc(N * sizeof(double));
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      matrizDistancias[i][j] = calcularDistancia(cidades[i], cidades[j]);
    }
  }

  exibirMatrizDistancias(matrizDistancias, N);

  int cidade1, cidade2;
  printf("\nDigite o número de duas cidades para obter a distância entre elas "
         "(0 para sair):\n");
  while (1) {
    printf("Cidade 1: ");
    scanf("%d", &cidade1);
    if (cidade1 == 0) {
      break;
    }
    printf("Cidade 2: ");
    scanf("%d", &cidade2);
    if (cidade2 == 0) {
      break;
    }

    if (cidade1 < 1 || cidade1 > N || cidade2 < 1 || cidade2 > N) {
      printf("Cidade inválida. Digite um número válido de 1 a %d.\n", N);
      continue;
    }

    printf("A distância entre %s e %s é: %.2lf\n", cidades[cidade1 - 1].nome,
           cidades[cidade2 - 1].nome,
           matrizDistancias[cidade1 - 1][cidade2 - 1]);
  }

  free(cidades);
  liberarMatrizDistancias(matrizDistancias, N);

  return 0;
}
