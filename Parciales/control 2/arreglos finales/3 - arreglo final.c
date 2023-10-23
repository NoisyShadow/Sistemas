/*
Desarrollar un programa que pida el ingreso de un texto por teclado e indique cuántas
vocales y cuántas consonantes tiene dicho texto ingresado.
*/
#include <stdio.h>
#include <string.h>

int main(){
    int i = 0;
    char palabra [200];
    int cantVocales = 0;
    int cantConsonantes = 0;
    int tamanodelapalabra;
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    while (palabra[i] != '\0'){

        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u'){

            cantVocales++;
        }
        i++;
    }
    tamanodelapalabra = strlen(palabra);
    cantConsonantes = tamanodelapalabra - cantVocales;
    printf("La palabra tiene un tamano de: %d\n ", tamanodelapalabra);
    printf("La cantidad de vocales es: %d\n", cantVocales);
    printf("La cantidad de consonantes es de: %d\n", cantConsonantes);

    return 0;
    

}