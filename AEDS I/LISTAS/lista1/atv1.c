#include <stdio.h>

int main()
{
    float peso;
    float altura;
    double imc;

    printf("Qual o seu peso?");
    scanf("%f/n", &peso);
    
    printf("Qual a sua altura?");
    scanf("%f/n", &altura);

    imc = peso/(altura*altura);
    printf("Seu IMC é %f", imc);
    
    return 0;
}

