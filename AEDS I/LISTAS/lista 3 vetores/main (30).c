#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n = 10;
  int v1[n], v2[n], vi[n];
  printf("insira os valores do primeiro vetor:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &v1[i]);
  }
  printf("insira os valores do segundo vetor:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &v2[i]);
  }
  int a = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v1[i] == v2[j]) {
        int repete = 0;
        for(int k = 0; k < a; k++){
          if(v1[i] == vi[k]){
            repete++;
            break;
          }
        }
        if(repete == 0){
          vi[a] = v1[i];
          a++;
        }
        break;
      }
    }
  }
  printf("\nVetor intersecção = ");
  for (int i = 0; i < a; i++) {
    printf("%d ", vi[i]);
  }
  return 0;
}