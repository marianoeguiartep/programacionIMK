#include <stdio.h>

int main()
{

    int n, columnas;
    printf("Ingrese el numero de filas:\n");
    scanf("%d", &n);

    columnas = 1;
    for(int i=1;i<=n*2;i++)
    {
        for(int j=1;j<=columnas;j++)
        {

            printf("*");
        }
        if(i < n)
        {
            columnas++;
        }
        else{
            columnas--;
        }
        printf("\n");

    }
    
}
