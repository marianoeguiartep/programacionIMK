#include <stdio.h>
#include "main.h"

int main()
{
    float cm, met, km;

    printf("Ingrese la longitud en centimetros ");
    scanf("%f", &cm);

    met = CMtoM(cm);
    km    = CMtoKM(cm);

    printf("Longitud en metros = %.2f m \n", met);
    printf("Longitud en kilometros = %.2f km \n", km);

    return 0;
}
