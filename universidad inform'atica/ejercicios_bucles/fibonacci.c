#include <stdio.h>

int main() {
    int elementos = 0, i, pre2 = 0, pre1 = 1, resultado;
    while (elementos <= 0)
    {
        printf("Introduzca cuantos terminos de Fibonacci quiere: \n ");
        scanf("%d", &elementos);
    }
    
    elementos = elementos - 1;

    printf("1.- %d\n", pre1);

    for ( i = 0; i < elementos; i++)
    {
        resultado = pre1 + pre2;
        printf("%d.- %d\n", i + 2, resultado);
        pre2 = pre1;
        pre1 = resultado;
    }
    

    return 0;
}