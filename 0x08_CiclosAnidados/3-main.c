#include <stdio.h>

int main()
{
    int filas, columnas;
    printf("Ingrese el numero de filas:\n");
    scanf("%d", &filas);

    for(int i=0;i<filas;i++)
    {
        printf("* ");
    }
    printf("\n");
        for(int j=2;j<filas;j++)
    {
        printf("* ");
        for(int k=2;k<filas;k++)
        {
            printf("  ");
        }
        printf("*");
        printf("\n");
    }
    for(int i=0;i<filas;i++)
    {
        printf("* ");
    }
    printf("\n");
return(0);
}