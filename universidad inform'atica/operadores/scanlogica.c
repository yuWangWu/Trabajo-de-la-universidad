#include <stdio.h>

int main() {
    int x, resto;

    printf("Escribe un numero entero: ");

    scanf("%d", &x);

    resto = x % 2;
    printf("Es un numero %s\n", (resto == 0 ) ? "par" : "impar");

    return 0;
}