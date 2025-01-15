#include <stdio.h>

int main() {
  
  int idade,trab;
  printf("\nInsira a idade do trabalhador e os anos de trabalho\n");
  scanf("%d%d",&idade,&trab);

  if ((idade>=65 || trab>=30)||(idade>=60 && trab>=25)){
    printf("Pode aposentar");
  }else{
    printf("NAO pode aposentar");
  }

  return 0;
}