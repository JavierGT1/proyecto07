#include <stdio.h>
int main (){
    int numero;

    printf("Ingrese un numero\n>>");
    scanf("%d",&numero);
    if (numero>0)
    {
        printf("el numero es positivo\n");
    }

    else 
    {
        printf("EL numero es negativo\n");
    }
}