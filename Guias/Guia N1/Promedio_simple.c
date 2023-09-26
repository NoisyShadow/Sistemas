#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;

    printf("Ingrese su Primer Nota:\n");
    scanf("%f",&n1 );

    printf("Ingrese su Segunda Nota:\n");
    scanf("%f",&n2 );

    printf("Ingrese su Tercera Nota:\n");
    scanf("%f",&n3 );

    printf("Ingrese su Cuarta Nota:\n");
    scanf("%f",&n4 );
    
    float promedio = (n1 + n2 + n3 + n4)/4;
    
    printf("El promedio simple de las notas es: %2.f\n", promedio);
    return 0;
}