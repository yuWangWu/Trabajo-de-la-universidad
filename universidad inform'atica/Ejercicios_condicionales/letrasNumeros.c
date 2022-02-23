#include <stdio.h>

int main() {
    char input;
    printf("Introduzca un dato: \n");
    scanf("%c", &input);

    printf("%i", input);

    if ((input >= 48) && (input <= 57)) {
        printf("Es un numero");
    } else {}
    if ((input >= 65) && (input <= 90)) {
        printf("Es una letra mayuscula");
    } else {}
    if ((input >= 97) && (input <= 122)) {
        printf("Es una letra minuscula");
    } else {}
    if (input <= 47) {
        printf("Es un caracter especial");
    } else {}
    if ((input >= 58) && (input <= 63)) {
        printf("Es un caracter especial");
    } else {}
    if ((input >= 91) && (input <= 96)) {
        printf("Es un caracter especial");
    } else {}
    if (input >= 123) {
        printf("Es un caracter especial");
    } else {}

    return 0;
}