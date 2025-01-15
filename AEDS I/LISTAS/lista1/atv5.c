#include <stdio.h>
#include <math.h>

int main()
{
    float cat1,cat2,hip;
    
    printf("primeiro cateto: ");
    scanf("%f", &cat1);
    printf("segundo cateto: ");
    scanf("%f", &cat2);
    
    hip = sqrt(cat1*cat1+cat2*cat2);
    
    printf("a hipotenusa é %.2f", hip);

    return 0;
}

