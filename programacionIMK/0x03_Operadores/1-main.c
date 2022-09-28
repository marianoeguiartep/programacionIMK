#include <stdio.h>
#include "main.h"

int main()
{
    float lon, ancho, resultado;

    printf("Ingrese la longitud: \n");
    scanf("%f", &lon);
    printf("Ingrese el ancho: \n");
    scanf("%f", &ancho);

    resultado = perimetro(ancho, lon);

    printf("El perimetro es = %f \n", resultado);

    return 0;
}
