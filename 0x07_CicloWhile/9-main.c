#include <stdio.h>

int main()
{
    int n=1;
    int numero;
    printf("Ingrese el limite superior: ");
    scanf("%d", &numero);
    printf("Numeros impares del 1 al %d: ", numero);

    while(n <= numero)
    {
        printf("%d, ",n);
        n+=2;
        
    }
    printf(" \n");
    return (0);
}
