#include <stdio.h>

int main()
{
    float salBase,salFinal;
    
    printf("Salario base: ");
    scanf("%f", &salBase);
    
    salFinal = salBase*1.05 - salBase*0.07;
    
    printf("Salario final e: %.2f" , salFinal);
    

    return 0;
}


