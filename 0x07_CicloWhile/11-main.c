#include <stdio.h>

int main()
{
    int n=1;
    int numero;
    int acumulado = 0;
    printf("Ingrese el limite superior: ");
    scanf("%d", &numero);
    printf("Suma de los numeros impares del 1 al %d: ", numero);

    while(n <= numero)
    {
        acumulado = acumulado + n; 
        n+=2;
    }
    printf("%d \n", acumulado);
    return (0);
}
