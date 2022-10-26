#include <stdio.h>

int main()
{
    int i=1;
    float h=0;
    float t=0;
    float c=0;
    char d=0;

    while(i==1)
    {
        printf("Qué día de la semana fue su llamada?\n");
        scanf("%s", &d);
        printf("A qué hora inició su llamada?\n");
        scanf("%f", &h);
        printf("Cuánto duró la llamada?\n");
        scanf("%f", &t);
        

        switch(d)
        {
            case 'l':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'L':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'm':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'M':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'x':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'X':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'J':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'j':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'v':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 'V':
                if(600 <= h && h <= 2000){
                    c= t*0.3;
                    printf("El costo de la llamada es de: %f \n",c);
                }else{
                    c= t*0.2;
                    printf("El costo de la llamada es de: %f \n",c);
                }
            break;
            case 's':
                c= t*0.1;
                printf("El costo de la llamada es de: %f \n",c);
            break;
            case 'S':
                c= t*0.1;
                printf("El costo de la llamada es de: %f \n",c);
            break;
            case 'd':
                c= t*0.1;
                printf("El costo de la llamada es de: %f \n",c);
            break;
            case 'D':
                c= t*0.1;
                printf("El costo de la llamada es de: %f \n",c);
            break;
            default:
                printf("El día no es valido.");
            break;
        }
        printf("Quiere volver a hacer el cálculo?\nSi-1\nNo-0\n");
        scanf("%d", &i);

        d=0;
        t=0;
        h=0;
        c=0;
        
    }
    

}