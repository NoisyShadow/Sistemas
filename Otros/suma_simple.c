#include <stdio.h>

int main(){
    int n1, n2;
    printf("ingrese el primer numero a sumar:\n");
    scanf("%d",&n1);
    printf("ingrese el segundo numero a sumar:\n");
    scanf("%d",&n2);
    int suma = n1 + n2;
    printf("el resultado de la suma es: %d\n", suma);
    return 0;
}
