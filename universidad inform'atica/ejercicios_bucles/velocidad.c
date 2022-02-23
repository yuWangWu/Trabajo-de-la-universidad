#include <stdio.h>
#include <math.h>

int main() {
    float distancia, velocidad, aceleracion, tiempo = 0;
    printf("Introduzca una aceleracion: \n");
    scanf("%f", &aceleracion);

    while (tiempo <= 10)
    {
        velocidad = aceleracion * tiempo;
        distancia = velocidad * tiempo;
        printf("t = %.2f s ----> v = %.2f m/s , d = %.2f m\n", tiempo, velocidad, distancia);
        tiempo = tiempo + 0.5;
    }

    printf("Terminado.");

    return 0;
    
}
