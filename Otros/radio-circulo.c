#include <stdio.h>
#define pi 3.14

int main(){
    //float pi = 3.14;
    float r;
    printf("Ingrese el radio del circulo:\n");
    scanf("%f",&r);

    float perimetro = 2 * pi * r;
    float area = pi * (r * r);
    printf("El perimetro del circulo segun su radio es: %.2f\n", perimetro);
    printf("El area del circulo segun su radio es: %.2f\n", area);
    return 0;
}