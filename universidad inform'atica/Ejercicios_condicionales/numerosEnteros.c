#include <stdio.h>

int main() {
    int numeroA, numeroB;
    printf("Introduzca dos numeros enteros: \n");
    scanf("%d %d", &numeroA, &numeroB);

    if ((numeroA % numeroB) != 0) {
        printf("El primero numero introducido no es divisible por el segundo");
    } else {
        printf("El primer numero introducido es divisible por el segundo");
    }

    return 0;
}