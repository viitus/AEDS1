#include <stdio.h>

int main(void) {

  float a,p;
  printf("\nInsira sua Altura(m) e Peso(kg)\n");
  scanf("%f%f",&a,&p);

  if(a<1.20){
    if(p<60){
      printf("Pertence a categoria A");
    }else if(p>=60 && p<=90){
      printf("Pertence a categoria D");
    }else{
      printf("Pertence a categoria G");
    }
  }else if(a>=1.20 && a<=1.70){
    if(p<60){
      printf("Pertence a categoria B");
    }else if(p>=60 && p<=90){
      printf("Pertence a categoria E");
    }else{
      printf("Pertence a categoria H");
    }
  }else{
    if(p<60){
      printf("Pertence a categoria C");
    }else if(p>=60 && p<=90){
      printf("Pertence a categoria F");
    }else{
      printf("Pertence a categoria I");
    }
  }

  return 0;
}