#include <stdio.h>

int main()
{
    int n=1;
    int numero;
    printf("Ingrese el limite superior: ");
    scanf("%d", &numero);
    printf("Numeros naturales del 1 al %d: ", numero);

    while(n <= numero)
    {
        printf("%d, ",n);
        n++;
        
    }
    printf(" \n");
    return (0);
}
