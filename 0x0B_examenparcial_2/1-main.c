#include <stdio.h>

int main()
{

    int n, j, i;
    printf("Ingrese el numero de filas:\n");

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }

        for(j=(2*i-2); j<(2*n-1); j++)
        {
            printf("*");
        }

        for(j=1; j<=i; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
}
