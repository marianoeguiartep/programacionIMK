#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5; 
    float total, promedio, porcentaje;

    printf("Ingrese sus 5 calificaciones: \n");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    promedio = total / 5.0;
    porcentaje = (total / 500.0) * 100;

    printf("La suma de calificaciones es = %.2f\n", total);
    printf("Su promedio es = %.2f\n", promedio);
    printf("El porcentaje de la calificación que representa es = %.2f\n", porcentaje);

    return 0;
}
