/* 9. Considere um cadastro de produtos de um estoque, com as seguintes informações
para cada produto:
- Código de identificação do produto: representado por um valor inteiro
- Nome do produto: com até 50 caracteres
- Quantidade disponível no estoque: representado por um número inteiro
- Preço de venda: representado por um valor real
a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as informações de um produto
b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário) e peça ao usuário para entrar com as informações de cada produto
c) Encontre o produto com o maior preço de venda
d) Encontre o produto com a maior quantidade disponível no estoque */

#include <stdio.h>
#include <stdlib.h>

// a)
typedef struct{
  int codigo;
  char nome[50];
  int quantidade;
  float preco;
}produto;

void imprime(produto *a, int b){
  printf("Codigo: %d\n", a[b].codigo);
  printf("Nome: %s", a[b].nome);
  printf("Quantidade: %d\n", a[b].quantidade);
  printf("Preço de venda: R$%.2f\n", a[b].preco);
}

int main() {
  
  // b)
  int N;
  printf("Quantos produtos deseja registrar: ");
  scanf("%d", &N);
  produto *vetor = (produto *)malloc(N * sizeof(produto));
  if (vetor == NULL) {
    printf("Erro na alocação de memória.\n");
    return 1;
  }
  for(int i = 0; i < N; i++){
    printf("\nInsira o codigo do %dº produto: ", i+1);
    scanf("%d", &vetor[i].codigo);
    printf("Insira o nome do %dº produto: ", i+1);
    setbuf(stdin, NULL);
    fgets(vetor[i].nome, 50, stdin);
    printf("Insira a quantidade disponivel do %dº produto: ", i+1);
    scanf("%d", &vetor[i].quantidade);
    printf("Insira o preco de venda do %d produto: ", i+1);
    scanf("%f", &vetor[i].preco);
  }

  // c) e d)
  float maisCaro = vetor[0].preco;
  int PmaisCaro = 0;
  int maiorQuantidade = vetor[0].quantidade;
  int PmaiorQuantidade = 0;
  for(int i = 0; i < N; i++){
    if(vetor[i].preco > maisCaro){
      maisCaro = vetor[i].preco;
      PmaisCaro = i;
    }
    if(vetor[i].quantidade > maiorQuantidade){
      maiorQuantidade = vetor[i].quantidade;
      PmaiorQuantidade = i;
    }
  }
  
  printf("\nPRODUTO COM MAIOR PREÇO DE VENDA:\n");
  imprime(vetor, PmaisCaro);

  printf("\nPRODUTO COM MAIOR QUANTIDADE DISPONÍVEL:\n");
  imprime(vetor, PmaiorQuantidade);
  
  free(vetor);
  
  return 0;
}