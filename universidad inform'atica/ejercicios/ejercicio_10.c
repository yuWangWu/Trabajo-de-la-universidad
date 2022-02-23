#include <stdio.h>  

int main() {
    float numero;
    printf("Introduza un numero (min. -999, max. 999): \n");
    scanf("%f", &numero);

    float centenas, decenas, unidades;
    int centena, decena, unidad;
    if((numero > 1000) || (numero < -1000)) {
        printf("El numero no esta en el rango!\n");
    } else {
        centenas = numero / 100;
        centena = centenas;
        decenas = (numero / 10) - (centena * 10);
        decena = decenas;
        unidades = numero - (centena * 100) - (decena * 10);
        unidad = unidades;

        printf("El numero esta conformado por: \n");
        printf("%d centenas\n", centena);
        printf("%d decenas\n", decena);       
        printf("%d unidades\n", unidad); 
    }

    return 0;
}