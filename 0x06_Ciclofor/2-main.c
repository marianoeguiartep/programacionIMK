#include <stdio.h>
#include "main.h"

int main(void)
{
   int numero = 10;

    printf("Natural numbers from 1 to 10 in reverse order: ");
    
    for(int i=10;i<=0;i--)
    {
        printf("%d, ",i);
    }
    return(0);
}
