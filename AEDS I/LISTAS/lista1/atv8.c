#include <stdio.h>

int main()
{
    int dias;
    
    printf("Quantos dias foram trabalhados? ");
    scanf("%d", &dias);
    
    float salario, salarioLiquido;
    
    salario = 30*dias;
    salarioLiquido = salario - salario*0.08;
    
    printf("Salario Liquido: %.2f",salarioLiquido);
    
    return 0;
}

