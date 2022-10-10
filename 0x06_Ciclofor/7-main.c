#include <stdio.h>
#include "main.h"

int main(void)
{
   int numero = 10;
   int acumulado = 0;
    
    for(int i=0;i<=numero;i++)
    {
        int impar;
        if(i%2!=0)
        {
            acumulado = i + acumulado;
        }
        
    }
    printf("The sum of odd numbers is: %d \n", acumulado);
    return(0);
}
