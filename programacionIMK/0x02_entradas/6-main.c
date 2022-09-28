#include "main.h"
#include <stdio.h>

int main(void)
{
    int mod;
    int n1;
    int n2;
    printf("Ingrese el primer numero:\n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &n2);

    mod = modulo(n1,n2);
    printf ("El modulo es: %d\n",mod);
    return 0;
}
