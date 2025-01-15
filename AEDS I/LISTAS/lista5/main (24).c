/*24. Foi realizada um pesquisa de algumas características físicas de cinco
habitantes de certa região. De cada habitante foram coletados os seguintes
dados: sexo, cor dos olhos (A – Azuis ou C – Castanhos), cor dos cabelos (L –
Louros, P – Pretos ou C – Castanhos) e idade.
- Faça uma função que leia esses dados em um vetor.
- Faça uma função que determine a média de idade das pessoas com olhos
castanhos e cabelos pretos.
- Faça uma função que determine e devolva ao programa principal a maior idade
entre os habitantes.
- Faça uma função que determine e devolva ao programa principal a quantidade
de indivíduos do sexo feminino cuja idade está entre 18 e 35 (inclusive) e que
tenham olhos azuis e cabelos louros.*/

#include <stdio.h>

typedef struct {
  char sexo;
  char olho;
  char cabelo;
  int idade;
} habitante;

void recebeHabitantes(int pop, habitante h[]) {
  for (int i = 0; i < pop; i++) {
    printf("insira o sexo(M/F) do %dº hab: ", i + 1);
    scanf("%c", &h[i].sexo);
    getchar();
    printf("insira a cor dos olhos(A/C) do %dº hab: ", i + 1);
    scanf("%c", &h[i].olho);
    getchar();
    printf("insira a cor do cabelo(L/P/C) do %dº hab: ", i + 1);
    scanf("%c", &h[i].cabelo);
    getchar();
    printf("insira a idade do %dº hab: ", i + 1);
    scanf("%d", &h[i].idade);
    getchar();
  }
}

int contaFAL(habitante h[], int pop) {
  int contador = 0;
  for (int i = 0; i < pop; i++) {
    if (h[i].sexo == 'F' && h[i].olho == 'A' && h[i].cabelo == 'L' &&
        h[i].idade >= 18 && h[i].idade <= 35) {
      contador++;
    }
  }
  return contador;
}

int mediaCP(habitante h[], int pop) {
  int soma = 0, contador = 0;
  for (int i = 0; i < pop; i++) {
    if (h[i].olho == 'C' && h[i].cabelo == 'P') {
      soma += h[i].idade;
      contador++;
    }
  }
  return soma/contador;
}

int maiorIdade(habitante h[], int pop) {
  int maior = h[0].idade;
  for (int i = 0; i < pop; i++) {
    if (h[i].idade > maior) {
      maior = h[i].idade;
    }
  }
  return maior;
}

int main(void) {
  int p;
  printf("Quantos Habitantes? ");
  scanf("%d", &p);
  getchar();
  habitante h[p];
  recebeHabitantes(p, h);
  printf("Media da idade dos habitantes com olhos castanhos e cabelos pretos: %d\n",mediaCP(h, p));
  printf("Maior idade entre os habitantes é: %d\n",maiorIdade(h, p));
  printf("Quantidade de mulheres loiras e com olho azul entre 18 e 35 anos: %d\n",contaFAL(h, p));
  return 0;
}