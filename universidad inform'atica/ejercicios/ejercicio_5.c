#include <stdio.h>
#include <math.h>

int main() {
    float real, ficticio;
    printf("Introduzca su temperatura en grados centigrados: \n");
    scanf("%f", &real);
    float constante = 9.0 / 5.0;
    ficticio = (real * constante) + 32;
    printf("La temperatura en grados Farenheit es: %fF\n", ficticio);

    return 0;
}