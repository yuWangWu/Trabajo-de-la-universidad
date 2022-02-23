#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, resultadoP, resultadoN, dentroRaiz;
    printf("Vamos a resolver una ecuacion de segundo grado, introduzca a, b y c: \nax^2 + bx + c = 0 \n");
    scanf("%f %f %f", &a, &b, &c);

    dentroRaiz = pow(b,2) -4 * a * c;

    if(dentroRaiz < 0) {
        printf("Tiene dos soluciones complejas conjugadas. \n");
    } else {
        resultadoP = (-b + sqrt(dentroRaiz)) / (2 * a);
        resultadoN = (-b - sqrt(dentroRaiz)) / (2 * a);
        if ( resultadoP == resultadoN) {
            printf("La solucion a la ecuacion introducida es %f\n", resultadoN);
        } else {
            printf("Las raices de su ecuacion son: %f y %f\n", resultadoP, resultadoN);
        }
    }
    printf("Terminado. \n");

    return 0;
}