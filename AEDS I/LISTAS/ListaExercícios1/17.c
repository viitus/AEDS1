#include <stdio.h>
int main() {
  
  float bm,bn,h,area;
  printf("Insira as dimensões.\nBase maior: ");
  scanf("%f",&bm);
  printf("Base menor: ");
  scanf("%f",&bn);
  printf("Altura: ");
  scanf("%f",&h);

  if(bm == 0 || bn ==0){
    printf("isso é um triangulo!\n");
  }
  area = (bm+bn)*h/2;

  printf("Area = %.2f",area);
  
  
  return 0;
}