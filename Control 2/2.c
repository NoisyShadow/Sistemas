/*
Ingresar por teclado, tres números flotantes de doble precisión A, B y C y el operador
aritmético op (suma “+”, resta “-“, producto “*” o división “/”) para realizar el cálculo y
mostrar el resultado. La impresión del resultado debe ser con cuatro números flotantes.
*/
#include <stdio.h>
int main(){
    float A, B, C;
    int operador;
    printf("Ingrese el primer numero:\n ");
    scanf("%f", A);

    printf("Ingrese el segundo numero: \n");
    scanf("%f", B);

    printf("Ingrese el tercer numero: \n");
    scanf("%f", C);

    printf("Ingrese la operacion que desee realizar ingresando el operador: \n");
    scanf("%f", operador);
        
    //float suma = (A + B + C);
    //float resta = (A - B - C);
    //float producto = (A * B * C);
   // float division = (A / B / C);

    if (operador = "+" ){
        float suma = (A + B + C);
        printf("La suma de los numeros es: %.4f\n " suma);

    } else if (operador = "-" ){
        float resta = (A - B - C);
        printf("La suma de los numeros es: %.4f\n" resta);

    } else if (operador = "*" ){
        float producto = (A * B * C);
        printf("La suma de los numeros es: %.4f\n" producto);

    } else if (operador = "/" ){
        float division = (A / B / C);
        printf("La suma de los numeros es: %.4f\n"division);
        
    } else{
        printf("Operador no reconocido");
    }

    return 0;

}