#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf("Ingrese su primer Nota:\n");
    scanf("%f",&n1 );

    printf("Ingrese su Segunda Nota:\n");
    scanf("%f",&n2 );

    printf("Ingrese su primer Nota:\n");
    scanf("%f",&n3 );
    
    float promedio = (n1*0.4) + (n2*0.3 ) + (n3*0.3);
    
    printf("El promedio ponderado de las notas es: %2.f\n", promedio);
}