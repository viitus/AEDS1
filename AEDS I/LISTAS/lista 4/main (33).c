/*33. Fac ̧a um programa para ler uma tabela contendo os nomes dos alunos de uma
turma de 5 alunos. O programa deve solicitar ao usuario os nomes do aluno,
sempre perguntando  ́ se ele deseja inserir mais um nome na lista. Uma vez lidos
todos os alunos, o usuario  ́ ira indicar um nome que ele deseja verificar se est
́ a presente na lista, onde o programa  ́ deve procurar pelo nome (ou parte deste
nome) e se encontrar deve exibir na tela o nome completo e o  ́ındice do vetor
onde esta guardado este nome.  ́*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char nomes[5][50];
  char opcao;

  for (int i = 0; i < 5; i++) {
    printf("Digite o nome do aluno: ");
    fgets(nomes[i], 50, stdin);
    nomes[i][strcspn(nomes[i], "\n")] = '\0';

    if (i == 4){
      break;
    }
    
    printf("Deseja inserir mais um nome? (s/n): ");
    scanf(" %c", &opcao);
    getchar();
    if (!(opcao == 's' || opcao == 'S')) {
      break;
    }
  }
  printf("Sala cheia\n\n");
  
  char nomeBusca[50];
  printf("Digite o nome que deseja buscar: ");
  fgets(nomeBusca, 50, stdin);
  nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

  int encontrado = 0;
  for (int j = 0; j < 5; j++) {
    if (strstr(nomes[j], nomeBusca) != NULL) {
      printf("Nome encontrado: %s (índice: %d)\n", nomes[j], j+1);
      encontrado = 1;
    }
  }

  if (!encontrado) {
    printf("Nome nao encontrado.\n");
  }

  return 0;
}
