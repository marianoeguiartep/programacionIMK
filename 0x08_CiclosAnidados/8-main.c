#include <stdio.h>

int main()
{

    int n;
    printf("Ingrese el numero de filas:\n");
    scanf("%d", &n);

    for(int i=1;i<=n*2;i++)
    {
        for(int j=1;j<=n;j++)
            if(i==1 && (j==1 || j==n) || i==n && (j==1 || j==n)||i==n*2-1 && (j==1 || j==n) || j>=n*2)
            {
                printf(" ");
            }
            else if(i == 1 || i == n || j == 1 || j == n || i == n*2-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        printf("\n");
    }
    
}
