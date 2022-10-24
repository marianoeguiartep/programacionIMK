#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,perimetro,semi;
    float area;

    printf("Ingrese el primer lado: \n");
    scanf("%f",&a);
    printf("Ingrese el segundo lado: \n");
    scanf("%f",&b);
    printf("Ingrese el tercer lado: \n");
    scanf("%f",&c);

    perimetro = a+b+c;
    semi = perimetro/2;
    area = (semi*(semi-a)*(semi-b)*(semi-c));
    area = (sqrt(area));

    if(a+b>c && a+c>b && b+c>a)
    {
        printf("El area es: %f \n", area);
        printf("El perimetro es: %f \n", perimetro);
    }else{
        printf("Los valores no funcionan. \n");
    }
}
