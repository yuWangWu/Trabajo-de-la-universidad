#include <stdio.h>

int main() {
    float radio, pi, volumen;
    pi = 3.1415926;
    printf("Introduzca el valor del radio de la esfera en metros: \n");
    scanf("%f", &radio);
    volumen = ( 4.0 / 3.0 ) * pi * ( radio * radio * radio);
    // si estas utilizando math.h puedes hacer pow(r, 3) en vez de multiplicar r 3 veces para hacer la potencia.
    printf("El volumen de su esfera es: %fm^3", volumen);

    return 0;
}