#include <stdio.h>
#include <math.h>

int main() {
    char selection;
    float base, altura, radio, pi = 3.1416, area;
    printf("Introduzca si quiere calcular el area de un triangulo (pulse 1) o un circulo (pulse 2): \n");
    scanf("%c", &selection);

    switch (selection)
    {
    case '1':
        printf("Introduzca la medida de la base del triangulo: \n");
        scanf("%f", &base);
        printf("Introduzca la medida de la altura del triangulo: \n");
        scanf("%f", &altura);

        area = (base * altura) / 2.0;

        printf("El area de su triangulo es: %f\n", area);
        break;
    case '2':
        printf("Introduzca la medida del radio de su circulo: \n");
        scanf("%f", &radio);
        
        area = pi * pow(radio, 2);

        printf("El area de su circulo es: %f\n", area);
    
    default:
        printf("No ha introducido una de las dos opciones. \n");
        break;
    }
    printf("Terminado. \n");

    return 0;
}