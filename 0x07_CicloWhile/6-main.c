#include <stdio.h>

int main()
{
    int n=1;
    int numero;
    int n1;
    int n2;
    int suma;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    n1 = numero % 10;

    while(numero >= 10)
    {
        numero = numero / 10;
        
        n2 = numero;
    }
    suma = n1 + n2;
    printf("Suma del primer y el ultimo numero: %d\n", suma);
    
    return (0);
}
