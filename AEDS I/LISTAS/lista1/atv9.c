#include <stdio.h>

int main()
{
    int A,B,temporario;
    
    printf("Insira o valor de A: ");
    scanf("%d", &A);
    printf("Insira o valor de B: ");
    scanf("%d", &B);     

    printf("Troca de valores...\n");
    
    temporario = A;
    A = B;
    B = temporario;
    
    printf("O valor de A é %d e o valor de B é %d", A , B );

    return 1;
}


