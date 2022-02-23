#include <stdio.h>

int main() {
    char input;
    printf("Introduzca un numero del 1 al 7: ");
    scanf("%c", &input);

    switch (input)
    {
    case '1':       
        printf("Su dia es lunes.\n");
        break;
    case '2':
        printf("Su dia es martes.\n");
        break;
    case '3':
        printf("Su dia es miercoles.\n");
        break;
    case '4':
        printf("Su dia es jueves.\n");
        break;
    case '5':
        printf("Su dia es viernes.\n");
        break;
    case '6':
        printf("Su dia es sabado.\n");
        break;
    case '7':
        printf("Su dia es domingo.\n");
        break;
    default:
        printf("El numero introducido no esta entre el 1 y el 7.\n");
        break;
    }
    printf("Terminado.");

    return 0;
}