#include <stdio.h>
#include "main.h"

int main()
{
    float radio, diametro, cir, area;
    
    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    diametro = diametroC(radio);
    cir = cirC(radio);
    area = areaC(radio);

    printf("EL diametro es = %.2f  \n", diametro);
    printf("La circunferencia es = %.2f  \n", cir);
    printf("El area es = %.2f \n", area);

    return 0;
}
