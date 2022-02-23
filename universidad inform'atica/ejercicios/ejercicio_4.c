#include <stdio.h>

int main() {
    float precio, precioiva;
    printf("Introduzca el precio del producto: \n");
    scanf("%f", &precio);
    precioiva = ((precio / 100) * 21) + precio;
    printf("El precio con IVA es: %.2f", precioiva);

    return 0;
    
}