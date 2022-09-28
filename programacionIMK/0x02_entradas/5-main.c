#include "main.h"
#include <stdio.h>

int main(void)
{
    int div;
    int n1;
    int n2;
    printf("Ingrese el primer numero:\n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &n2);

    div = division(n1,n2);
    printf ("El valor de la division es: %d\n",div);
    return 0;
}
