#include "main.h"
#include <stdio.h>
#include <math.h>

float radio(int volumen)
{
    float x;
//este programa calcula el valor del radio
    x = 2 * volumen;
    x = x / 12.56;
    x = cbrt(x);
    return (x);
}

