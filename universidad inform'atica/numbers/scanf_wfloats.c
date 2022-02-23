#include <stdio.h>

int main() {
    float peso, altura;

    printf("Indica tu peso (kg) y altura (m) \n");
    scanf("%f %f", &peso, &altura);

    printf("Pesas %f kg, y mides %f m. \n", peso, altura);

    return 0;
}