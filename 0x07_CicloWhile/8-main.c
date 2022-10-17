#include <stdio.h>

int main()
{
    int n=2;
    int numero;
    printf("Ingrese el rango superior: ");
    scanf("%d", &numero);
    printf("Numeros pares del 1 al %d: ", numero);

    while(n <= numero)
    {
        printf("%d, ",n);
        n+=2;
        
    }
    printf(" \n");
    return (0);
}
