#include <stdio.h>

int main() {
  
  float l,a,e,media;
  printf("\ninsira as notas do laboratorio, avaliação e exame respectivamente\n");
  scanf("%f%f%f",&l,&a,&e);

  if (( l >= 0 && l <= 10 ) && ( a >= 0 && a <= 10 ) && ( e >= 0 && e <= 10 )){
    media = (2*l + 3*a + 5*e)/10;
    if(media >= 0 && media <=2.9){
      printf("Aluno Reprovado\n");
    }
    else if (media >= 3 && media <= 4.9){
      printf("Aluno em Recuperação\n");
    }
    else {
      printf("Aluno Aprovado\n");
    }
    printf("Media: %.2f",media); 
  }
  else printf("Nota invalida");
  
  return 0;
}