#include <stdio.h>

main()
{
    int n=2;
    int suma = 0;
    int aux = 0;
    while (aux < 100)
    {
        suma += n;
        n +=2;
        aux++;
    }

    printf("la suma de los primeros 100 numeros pares es de: %d\n",suma);
    return 0;
}