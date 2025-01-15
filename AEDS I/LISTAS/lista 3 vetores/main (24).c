#include <stdio.h>
#include <stdlib.h>

int main() {
  int n[10], nMax, nMin; 
  float a[10], aMax, aMin;
  
  for(int i=0; i<10; i++){
    printf("\ninsira o numero do aluno: ");
    scanf("%d", &n[i]);
    printf("insira a altura do aluno(m): ");
    scanf("%f", &a[i]);
  }
  aMax = a[0];
  aMin = a[0];

  for(int i=0; i<10; i++){
    if(a[i]>=aMax){
      aMax = a[i];
      nMax = n[i];
    }
    if(a[i]<=aMin){
      aMin = a[i];
      nMin = n[i];
    }
  }

  printf("\nO maior aluno é o de numero %d, medindo %.2f",nMax,aMax);
  printf("\nO menor aluno é o de numero %d, medindo %.2f",nMin,aMin);
  
  return 0;
}