#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Introdusca la medida del lado a del triangulo:");
    scanf("%d", &a);
    printf("Introdusca la medida del lado b del triangulo:");
    scanf("%d", &b);
    printf("Introdusca la medida del lado c del triangulo:");
    scanf("%d", &c);

    // Validar triangulo
    if (a + b > c && a + c > b && b + c > a) 
    { //tipo de triangulos
        if (a == b && b == c)
        {
            printf("El triangulo es Equilatero.\n");
        }
        else if (a == b || a == c || b == c) 
        {
            printf("Es un triangulo isosceles.\n");
        } 
        else 
        {
            printf("Es un triangulo escaleno.\n");
        }
    }
    else 
    {
        printf("No es un triangulo valido.\n");
    }
    return 0;
}