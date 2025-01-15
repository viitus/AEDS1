#include <stdio.h>

int main() {
  
  float h;
  char s;
  
  printf("Digite sua altura e em seguida seu sexo(h/m)\n");
  scanf("%f\n%c",&h,&s);

  if(s == 'h'){
    printf("seu peso ideal é %f", 72.7*h-58);
  } else if (s == 'm'){
    printf("Seu peso ideal é %f", 62.1*h-44.7);
  }


  
  return 0;
}