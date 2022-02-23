#include <stdio.h>

int main() {
    float euros, pesetas, dolares;

    printf("Introduzca el valor en euros a convertir: \n");
    scanf("%f", &euros);
    pesetas = euros * 166.386;
    dolares = euros * 1.14;
    printf("El valor en pesetas es: %f\n", pesetas);
    printf("El valor en dolares a dia 11/02/2022 es: %f", dolares);

    return 0;
}