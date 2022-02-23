#include <stdio.h>

/* SE TIENE QUE PONER %lf en ved de %f cuando se utiliza double */

int main() {
    double peso, altura;

    printf("Indica tu peso (kg) y altura (m) \n");
    scanf("%lf %lf", &peso, &altura);

    printf("Pesas %f kg, y mides %f m. \n", peso, altura);

    return 0;
}