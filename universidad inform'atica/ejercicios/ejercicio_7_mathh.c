#include <stdio.h>
#include <math.h>

int main() {
    float radio, pi, volumen;
    pi = 3.1415926;
    printf("Introduzca el valor del radio de la esfera en metros: \n");
    scanf("%f", &radio);
    volumen = ( 4.0 / 3.0 ) * pi * pow(radio , 3);
    printf("El volumen de su esfera es: %fm^3", volumen);

    return 0;
}