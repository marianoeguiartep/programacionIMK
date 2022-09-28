#include "main.h"
#include <stdio.h>

int main(void)
{
    int mul;
    int n1;
    int n2;
    printf("Ingrese el primer numero:\n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &n2);

    mul = multiplicacion(n1,n2);
    printf ("El valor de la multiplicacion es: %d\n",mul);
    return 0;
}
