#include <stdio.h>

int main() {
  float x,y,z,media;
  printf("\ninsira as notas das 3 provas:\n");
  scanf("%f%f%f",&x,&y,&z);
  media = (x+y+2*z)/4;
  if(media>=60)printf("aluno aprovado!");
  else printf("aluno reprovado!");
  printf("\nNota final: %.2f",media);
  return 0;
}