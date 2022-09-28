#include "main.h"
#include <stdio.h>

float main()
{
    float consumo=0;
    float basico=0;
    float ibajo=0;
    float ialto=0;
    float ex=0;
    float cantidad=0;
    printf("Ingrese su consumo: \n");
    scanf("%f", &consumo);

    if(consumo>600)
    {
        basico = 175 * 0.786;
        ibajo = 225 * 0.911;
        ialto = 200 * 1.177;
        ex = consumo - 600;
        ex = ex * 3.134;
        cantidad = suma(basico, ibajo);
        cantidad = suma(cantidad, ialto);
        cantidad = suma(cantidad, ex);
        printf("Debe pagar %f \n", cantidad);
        scanf("%f,",&consumo );
    }
        if(600>=consumo && consumo < 400)
    {
        basico = 175 * 0.786;
        ibajo = 225 * 0.911;
        ialto = consumo - 400;
        ialto = ialto * 1.177;
        ex = 0;
        cantidad = suma(basico, ibajo);
        cantidad = suma(cantidad, ialto);
        cantidad = suma(cantidad, ex);
    }
      if(400>=consumo && consumo > 176)
    {
        basico = 175 * 0.786;
        ibajo = consumo - 176;
        ibajo = ibajo * 0.911;
        ialto = 0;
        ex = 0;
        cantidad = suma(basico, ibajo);
        cantidad = suma(cantidad, ialto);
        cantidad = suma(cantidad, ex);
    }
       if(176>consumo && consumo > 0)
    {
        basico = consumo - 0.786;
        ibajo = 0;
        ialto = 0;
        ex = 0;
        cantidad = suma(basico, ibajo);
        cantidad = suma(cantidad, ialto);
        cantidad = suma(cantidad, ex);
    }
    printf("Usted debe pagar $ %cantidad \n");
return 0;
}
