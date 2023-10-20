#include <stdio.h>

int main(){
    int  numero, pares = 0, imp = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    while(numero >= 0){
        if (numero % 2 == 0){
            pares++;
        }else {
            imp++;
        }
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
    }
        printf("La cantidad de numeros pares introducidos es de: %d\n", pares);
        printf("La cantidad de numeros impares introducidos es de: %d\n", imp);
        return 0;
    }


