/*32. Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mes e
ano para ˆ 3 variaveis inteiras. Antes disso, verifique se as barras est  ́ ao no
lugar certo, e se DD, MM  ̃ e AAAA sao num  ̃ ericos.  ́*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char data[11];
  int dia, mes, ano;

  printf("Digite a data no formato DD/MM/AAAA: ");
  fgets(data, sizeof(data), stdin);

  if (strlen(data) != 10) {
    printf("Formato inválido da data.\n");
    return 0;
  }

  if (data[2] != '/' || data[5] != '/') {
    printf("Formato inválido da data.\n");
    return 0;
  }

  for (int i = 0; i < 10; i++) {
    if (i == 2 || i == 5) {
      continue;
    }
    if (!isdigit(data[i])) {
      printf("Formato inválido da data.\n");
      return 0;
    }
  }

  dia = atoi(data);
  mes = atoi(data + 3);
  ano = atoi(data + 6);

  if (dia > 0 && dia <= 31) {
    printf("Dia: %d\n", dia);
  } else {
    printf("Dia inválido\n");
  }
  if (mes > 0 && mes <= 12) {
    printf("Mês: %d\n", mes);
  } else {
    printf("Mês inválido\n");
  }
  printf("Ano: %d\n", ano);

  return 0;
}
