#include <stdio.h>
#include <math.h>

int main() {
    char operacion;
    float numero1, numero2, resultado;
    printf("Introduzca su primer numero, la operacion a realizar y el segundo numero: \n");
    scanf("%f %c %f", &numero1, &operacion, &numero2);

    switch (operacion)
    {
    case '+':
        resultado = numero1 + numero2;
        printf("%f", resultado);
        break;
    case '-':
        resultado = numero1 - numero2;
        printf("%f", resultado);
        break;
    case '*':
        resultado = numero1 * numero2;
        printf("%f", resultado);
        break;
    case '/':
        resultado = numero1 / numero2;
        printf("%f", resultado);
        break;
    case '^':
        resultado = pow(numero1, numero2);
        printf("%f", resultado);
        break;
    
    default:
        printf("No podemos hacer la operacion solicitada. \n");
        break;
    }
}