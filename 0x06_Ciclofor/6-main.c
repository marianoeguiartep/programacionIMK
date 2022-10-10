#include <stdio.h>
#include "main.h"

int main(void)
{
   int numero = 10;
   int acumulado = 0;

    for(int i=0;i<=numero;i++)
    {
        acumulado = i + acumulado;
    }
    printf("Sum of natural numbers: %d \n", acumulado);
    return(0);
}
