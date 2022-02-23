#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;
    printf("Escriba sus coordenadas (r2): (x1 *enter* y1 *enter* ...)\n");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("Las coordenadas introducidas son: ( %f , %f) , ( %f , %f )\n", x1, y1, x2, y2);
    distancia = sqrt(pow( x2 - x1 , 2) + pow( y2 - y1 , 2));
    printf("La distancia entre las dos coordenadas introducidas es: %f", distancia);

    return 0;
}