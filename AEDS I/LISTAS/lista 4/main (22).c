/* Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o
desconto para pagamento a vista ` e de 10% sobre o valor total, calcular o
valor a ser  ́ pago a vista. Escrever o nome da mercadoria, o valor total, o
valor do desconto e o valor ` a ser pago a vista. `*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  float valor;
  char nome[30];
} mercadoria;

int main(void) {
  mercadoria item;

  printf("nome do item: ");
  setbuf(stdin, NULL);
  fgets(item.nome, 100, stdin);
  item.nome[strcspn(item.nome, "\n")] = '\0';
  
  printf("preço: ");
  scanf("%f", &item.valor);

  printf("\n----------\nItem: %s\nValor total: R$%.2f\n"
         "Valor do desconto: R$%.2f\nValor a vista: R$%.2f",
         item.nome, item.valor, item.valor / 10, item.valor - item.valor / 10);

  return 0;
}