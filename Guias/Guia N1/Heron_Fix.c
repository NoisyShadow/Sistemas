#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Introdusca la medida del primer lado:");
    scanf("%d", &a);
    printf("Introdusca la medida del segundo lado:");
    scanf("%d", &b);
    printf("Introdusca la medida del tercer lado:");
    scanf("%d", &c);

    // Validar triangulo
    if (a + b > c && a + c > b && b + c > a) 
    {
        if perimetro = a + b + c;
        double s = perimetro / 2.0;

        // Formula de Heron
        double area = sqrt (s * (s - a) * (s - b) * (s - c));

        printf("Perimetro :%d\n", perimetro);
        printf("Semiperimetro: %.2f\n", s);
        printf("Area: %.2f\n", area);
    }
    else
    {
        printf("No es un triangulo valido.\n");
    }
    return 0;
}