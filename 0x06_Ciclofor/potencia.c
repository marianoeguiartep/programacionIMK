#include <stdio.h>
#include "main.h"

int potencia(int base, int exp)
{
    int resultado = base;
    for(int i = 2; i<=exp;i++)
    {
        resultado = resultado * base;
    }
    return (resultado);
}
