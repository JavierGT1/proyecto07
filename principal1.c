#include <stdio.h>

int main()
{
    int a, b, suma, resta, div, mult;

    printf("Ingrese un valor: ");
    scanf("%d", &a);

    printf("Ingrese otro valor: ");
    scanf("%d", &b);

    suma = a + b;
    resta = a - b;
    mult = a * b;
    div = a / b;

    printf("La suma de los valores es: %d", suma);
    printf("\nLa resta de los valores es: %d", resta);
    printf("\nLa multiplicacion de los valores es: %d", mult);
    printf("\nLa division de los valores es: %d", div);

    return 0;
}
