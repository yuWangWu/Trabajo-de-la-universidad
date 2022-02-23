#include <stdio.h>

int main () {
    float peso, altura, imc;

    printf("Indica tu peso (kg) y altura (m)\n");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);
    printf("Tu indice de masa corporal es %f\n", imc);

    return 0;
}