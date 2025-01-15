#include <stdio.h>

int main()
{   
    float cel;
    float far;
    
    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &far);
    
    cel = 5*(far-32)/9;
    
    printf("Temperatura em Celsius é :%.2f", cel);
    
    return 0;
}


