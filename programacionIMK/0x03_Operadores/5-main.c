#include <stdio.h>
#include <math.h> 

int main()
{
    double base, expo, potencia;

    printf("Ingrese base: \n");
    scanf("%lf", &base);
    printf("Ingrese exponente: \n");
    scanf("%lf", &expo);

    potencia = pow(base, expo);

    printf("%.2lf ^ %.2lf = %.2lf\n", base, expo, potencia);

    return 0;
}
