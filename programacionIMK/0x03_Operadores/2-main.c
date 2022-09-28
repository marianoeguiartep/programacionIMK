#include <stdio.h>
#include "main.h"

int main()
{
    float lon, ancho, resultado;

    printf("Ingrese la longitud: ");
    scanf("%f", &lon);
    printf("Ingrese el ancho: ");
    scanf("%f", &ancho);

    resultado = area(lon, ancho);

    printf("El area es de = %f unidades cuadradas\n", resultado);

    return 0;
}
