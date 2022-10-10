#include <stdio.h>
#include "main.h"

int main(void)
{
   int numero = 10;
    printf("Odd numbers from 1 to 10: ");
    
    for(int i=0;i<=numero;i++)
    {
        if(i%2!=0)
        {
         printf("%d, ",i);
        }
        
    }
    return(0);
}
