#include <stdio.h>

int main()
{
    
    int gas = 0;
    int milla = 0;
    float gal = 0;
    float resp = 0;

    printf("Cuantos litros de Gasolina gastaste?\n");
    scanf("%d" , &gas);
    printf("Cuantas millas recorriste?\n");
    scanf("%d" , &milla);
    
    gal = gas*0.264179;
    resp = milla/gal;

    printf("Tu auto gasta: %f", resp);
    printf(" millas por galon \n");

}
