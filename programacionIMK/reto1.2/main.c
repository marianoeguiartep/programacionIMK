#include "main.h"
#include <stdio.h>

int main()
{
    char opcion;
    float n1;
    float n2;
    float resultado;
    printf("Seleccione una de las siguientes opciones: \n");
    printf("Suma = a \n");
    printf("Resta = b \n");
    printf("Multiplicacion = c \n");
    printf("Division = d \n");
    printf("Modulo = e \n");
    scanf("%c", &opcion);

    switch(opcion)
    {
        case 'a':
        printf("ingrese un numero: \n");
        scanf("%f", &n1);
        printf("ingrese el otro numero: \n");
        scanf("%f", &n2);
        resultado = suma(n1, n2);
        break;
        case 'b':
        printf("ingrese el minuendo: \n");
        scanf("%f", &n1);
        printf("ingrese el sustraendo: \n");
        scanf("%f", &n2);
        resultado = resta(n1, n2);
        break;
        case 'c':
        printf("ingrese el primer factor: \n");
        scanf("%f", &n1);
        printf("ingrese el segundo factor: \n");
        scanf("%f", &n2);
        resultado = multiplicacion(n1, n2);
        break;
        case 'd':
        printf("ingrese el dividendo: \n");
        scanf("%f", &n1);
        printf("ingrese el divisor: \n");
        scanf("%f", &n2);
        resultado = division(n1, n2);
        break;
        case 'e':
        printf("ingrese el primer numero: \n");
        scanf("%f", &n1);
        printf("ingrese el segundo numero: \n");
        scanf("%f", &n2);
        resultado = modulo(n1, n2);
        break;
        default:
        printf("Esta opcion no es valida");
        return(1);
    }
    printf("El resultado es: %f", resultado);

}
