#include <stdio.h>

int main()
{
    int a,b,resultado;
    
    printf("Digite o valor de 'a': ");
    scanf("%d", &a);
    printf("Digite o valor de 'b': ");
    scanf("%d", &b);
    
    resultado = (b*b*b)+(a*b)-(2*b)+(a%b);
    
    printf("O resultado é %d", resultado);
    
    return 0;
}

