#include <stdio.h>

int main()
{
    int i=1;
    float h=0;
    float t=0;
    float c=0;
    float m=0;
    char d=0;

    while(i==1)
    {
        printf("Qué día de la semana fue su llamada?\n");
        scanf("%s", &d);
        printf("A qué hora inició su llamada?\n");
        scanf("%f %f", &h, &m);
        printf("Cuánto duró la llamada?\n");
        scanf("%f", &t);

        if(d=='l' || d=='L' || d=='m' || d=='M' || d=='x' || d=='X' || d=='J' || d=='j' || d=='V' || d=='v')
        {
            if(6 <= h && h <= 20){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %.2f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %.2f \n",c);
                }
        }else if(d=='S'||d=='s' ||d=='d' ||d=='D' )
        {
            c= t*0.1;
            printf("El costo de la llamada es de: %.2f \n",c);
        }else{
            printf("El día no es correcto.");
        }

        printf("Quiere volver a hacer el cálculo?\nSi-1\nNo-0\n");
        scanf("%d", &i);

    }
    

}