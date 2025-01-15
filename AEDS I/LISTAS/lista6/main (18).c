/* 18. Crie uma função para somar dois arrays. Esta função deve receber dois
arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro e
segundo array seja diferente então a função retornará ZERO (0). Caso a função
seja concluída com sucesso a mesma deve retornar o valor UM (1). Utilize
aritmética de ponteiros para manipulação do array. */

#include <stdio.h>

int somarArrays(int *array1, int *array2, int *resultado, int tam1, int tam2) {
  if(tam1 != tam2)
    return 0;
  else{
    int *p;
    int *d = array1;
    int *f = array2;
    for(p = resultado; p < resultado+5; p++, d++, f++){
      *p = *d + *f;
    }
    return 1;
  }
}

int main() {
  int *p;
  int a1[5], a2[5], r[5];
  int tam1 = 0, tam2 = 0;
  printf("insira os valores do primeiro vetor:\n");
  for(p = a1; p<a1 + 5; p++){
    scanf("%d",p);
    tam1++;
  }
  printf("insira os valores do segundo vetor:\n");
  for(p = a2; p<a2 + 5; p++){
    scanf("%d",p);
    tam2++;
  }
  
  if(somarArrays(a1, a2, r, tam1, tam2)){
    printf("vetor resultado: \n");
    for(p = r; p<r+5; p++){
      printf("%d ",*p);
    }
  }else{
    printf("vetores de tamanhos diferente");
  }

  return 0;
}
