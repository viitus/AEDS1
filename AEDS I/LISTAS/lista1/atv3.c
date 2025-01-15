#include <stdio.h>

int main()
{
    float raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    float area;
    float circ;
    area = 3.14*raio*raio;
    circ = 3.14*raio*2;
    printf("A area do circulo é %f e sua circunferencia é %f",area,circ);
    
    return 0;
}

