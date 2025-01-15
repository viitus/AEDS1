#include <stdio.h>

int main() {

  int ano=0;
  float ch, ze;
  
  ch = 1.50;
  ze = 1.10;
  
  while (ze<=ch){
    ano++;
    ch += 0.02;
    ze += 0.03;
    //printf("\nano: %d / Chico: %.2f / Zé: %.2f",ano,ch,ze);
  }

  printf("\nem %d anos Zé será maior que Chico",ano);
  //printf("\n%.2f %.2f",ch,ze);
  
  return 0;
}