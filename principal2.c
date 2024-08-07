#include <stdio.h>
int main (){
    int numero;

    printf("Ingrese un numero\n>>");
    scanf("%d",&numero);
    if (numero%2==0)
    {
        printf("el numero es par\n");
    }

    else 
    {
        printf("EL numero es impar\n");
    }
}