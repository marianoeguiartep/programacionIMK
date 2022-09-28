#include "main.h"
#include <stdio.h>
#include <math.h>

float area(int volumen)
{
    //este programa calcula el valor del area
    float at, rad;
    //este programa calcula el valor del radio
    rad = 2 * volumen;
    rad = rad / 12.56;
    rad = cbrt(rad);

    at = 2 * M_PI * pow(rad, 2) + 2 * M_PI * rad * (volumen / (M_PI * rad));
    return (at);
}
