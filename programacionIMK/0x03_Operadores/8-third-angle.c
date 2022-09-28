#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Ingrese dos ángulos del triángulo: \n");
    scanf("%d%d", &a, &b);

    c = 180 - (a + b);

    printf("El tercer angulo mide = %d grados \n", c);

    return 0;
}
