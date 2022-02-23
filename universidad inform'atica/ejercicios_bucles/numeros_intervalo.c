#include <stdio.h>

int main() {
    int numeroA = 0, numeroB = 0, i;
    
    while (numeroA <= 1)
    {
        printf("Introduzca el numero entero menor del intervalo, tiene que ser estrictamente mayor que 1: \n");
        scanf("%d", &numeroA);
    }
    
    while (numeroB <= numeroA)
    {
        printf("Introduzca el numero entero mayor del intervalo, tiene que ser mayor que %d: \n", numeroA);
        scanf("%d", &numeroB);
    }
    
    printf("El intervalo introducido es [%d , %d]\n", numeroA, numeroB);

    if (numeroA > 100) {

        printf("No hay ningun numero entre 1 y 100 en su intervalo.\n");
    } else {

            printf("Los numeros entre 1 y 100 de su intervalo son: \n");

        if (numeroB > 100) {
            for ( i = numeroA; i <= 100; i++) {
                printf("%d\n", i);
            }
        } else {
            for ( i = numeroA; i <= numeroB; i++) {
                printf("%d\n", i);
            }
        }
    
        printf("Proceso terminado, Gracias. \n");
    }
    
    

    return 0;
}