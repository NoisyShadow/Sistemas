#include <stdio.h>
#include <string.h>

void CadenaInvertida(char str[])
{
    int longitud = strlen(str);
    for (int i=0; i < longitud /2; i++)
    {
        char temp = str[i];
        str[i] = str[longitud - i -1];
        str[longitud - i - 1] = temp;
    }
}

int main()
{
    char palabra[100];
    
    printf("Escriba una palabra: \n");
    scanf("%s", palabra);

    printf("cadena original: %s\n", palabra);
    CadenaInvertida(palabra);
    printf("cadena invertida: %s\n", palabra);
    return 0;
}