#include <stdio.h>

main(){

    int c1,c2;

    printf("Ingrese el valor del primer cateto:\n");
    scanf("%d",&c1);
    printf("Ingrese el valor del segundo cateto:\n");
    scanf("%d",&c2);
    
    int h = (c1 + c2)*1/2;
    
    int perimetro = (h + c1 + c2);

    int area = (c1 + c2)/2;


    printf("el hipotenusa del triangulo es: %.2d\n", h);
    printf("el area del triangulo es: %.2d\n", area);
    printf("el perimetro del triangulo es: %d\n", perimetro);
    return 0;
}