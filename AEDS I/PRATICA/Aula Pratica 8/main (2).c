/* 2a Questão
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o
salário e número de filhos. Escreva uma função que leia esses dados para um número não
determinado de pessoas, calcule e exiba a média de salário da população (a condição de parada,
deve ser quando o salário digitado for menor que zero). Faça um programa que acione a função. */

#include <stdio.h>

void recebeHab(){
  int habitantes = 0;
  float salario, soma = 0;
  int filhos;
  while(1){
    printf("\n - %dº Habitante - \n", habitantes+1);
    printf("Salario: R$");
    scanf("%f",&salario);
    if(salario < 0){
      break;
    }
    printf("Nº de filhos: ");
    scanf("%d",&filhos);
    soma += salario;
    habitantes++;
  }
  float media = soma/habitantes;
  printf("\nMedia dos salarios: R$%.2f", media);
}

int main(void) {
  printf("Digite os dados dos habitantes (salario e numero de filhos).\n");
  printf("Para encerrar a leitura, digite um salario negativo.\n");
  recebeHab();
  return 0;
}