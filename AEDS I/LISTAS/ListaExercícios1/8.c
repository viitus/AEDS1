#include <stdio.h>

int main() {
  
  float x,y,media;
  printf("Digite as duas notas do aluno: \n");
  
  scanf("%f%f",&x,&y);
  
  if(x>=0.0 && x<=10.0 && y>=0.0 && y<=10.0){
    printf("a media das notas é %f", (x+y)/2);
  }
  else printf("Nota invalida");


  
  return 0;
}