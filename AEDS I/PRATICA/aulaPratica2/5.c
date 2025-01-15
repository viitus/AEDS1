#include <stdio.h>

int main(void) {
  int idade;
  
  printf("\nDigite a idade do atleta:");
  scanf("%d",&idade);

  if (idade>=5 && idade<=7)printf("Infantil A");
  else if (idade>=8 && idade<=10)printf("Infantil B");
  else if (idade>=11 && idade<=13)printf("Juvenil A");
  else if (idade>=14 && idade<=17)printf("Juvenil B");
  else if (idade>=18 && idade<=25)printf("Senior");
  else printf("idade inadequada");

  return 0;
}