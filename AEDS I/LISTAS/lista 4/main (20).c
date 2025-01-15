#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  float consumo;
  char modelo[30];
} carro;

int maisEconomico(carro a[]) {
  int melhor, ME;
  melhor = a[0].consumo;
  for (int k = 0; k < 5; k++) {
    if (a[k].consumo > melhor) {
      melhor = a[k].consumo;
      ME = k;
    }
  }
  return ME;
}

int main(void) {
  carro a[5];
  for (int i = 0; i < 5; i++) {
    printf("\n#%d carro", i + 1);
    printf("\nModelo: ");
    setbuf(stdin, NULL);
    fgets(a[i].modelo, 30, stdin);
    int x = strcspn(a[i].modelo, "\n");
    a[i].modelo[x] = '\0';
    printf("Consumo[km/l]: ");
    scanf("%f", &a[i].consumo);
  }
  int x = maisEconomico(a);
  printf("\n-----------\n"
         "Carro mais economico:\nModelo: %s\nConsumo: %.2fkm/l"
         "\n-----------\n",
         a[x].modelo, a[x].consumo);
  for (int i = 0; i < 5; i++) {
    printf("\n%s consome %.2f litros em 1000km\n", a[i].modelo, 1000 / a[i].consumo);
  }

  return 0;
}