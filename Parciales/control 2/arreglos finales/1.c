/*
Escribir un bucle para pedir un número entero al usuario con controles de errores. El
número ha de estar comprendido en el intervalo [0,10). En caso de que no esté, se imprimirá
un mensaje de error y se volverá a pedir el número de nuevo, continuando así hasta que el
usuario introduzca un número que esté dentro del intervalo solicitado.
*/

#include <stdio.h>

int main (){
    int i;
    int numero;
    printf("Ingrese un numero:");
    scanf("%d", &numero);
    while (numero < 0 || numero >= 10){
        printf("El numero ingresado no es valido. El numero se debe ingresar en el rango [0, 10).\n");
        printf("Ingrese un numero valido: ");
        scanf("%d", &numero);
    }

    printf("El numero ingresado es: %d\n", numero);


    return 0;
}