#include <stdio.h>

int main() {
    float numero;
    printf("Introduzca el numero real del que desea saber sus mitades sucesivas: \n");
    scanf("%f", &numero);
    printf("Su numero es: %f\n Y sus mitades sucesivas son: \n", numero);

    while (numero > 1)
    {
        numero = numero / 2; 
        printf("%f\n", numero);
    }
    
    printf("Terminado.");
    
    return 0;
}