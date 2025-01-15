#include <stdio.h>

int main(void) {
  
  int n, m, i, soma=0;
  
  printf("\ninsira um intervalo de 2 numeros: ");
  scanf("%d %d", &n, &m);

  if(m<n){
    printf("\nIntervalo invalido!!!");
    return 0;
  }

  for (i=n ; i<=m ; i++){
    if(i%2!=0){
      soma+=i;
    }  
  }
  
  printf("a Soma dos numeros impares entre %d e %d é %d",n ,m ,soma );
  
  return 0;
}