/*
Desarrollar un programa que pida el ingreso de un texto por teclado e indique cuántas
vocales y cuántas consonantes tiene dicho texto ingresado.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char palabra (200);
    int cantVocales;
    int cantConsonantes;
    int tamanodelapalabra;
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    for (palabra[i]; palabra[i] = palabra ; i++){

        if (palabra[i] = "a" || palabra[i] = "e" || palabra[i] = "i" || palabra[i] = "o" || palabra[i] = "u"){

            cantVocales++;
        }
    }
    tamanodelapalabra = strlen(palabra);
    cantConsonantes = tamanodelapalabra - cantVocales;
    printf("La palabra tiene un tamano de: %s\n "tamanodelapalabra);
    printf("La cantidad de vocales es: %s\n"cantVocales);
    printf("La cantidad de consonantes es de: %s\n"cantConsonantes);

    return 0;
    

}