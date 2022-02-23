#include <stdio.h>

int main() {
    printf("introduzca una letra en minuscula: \n");
    int a, b;
    scanf("%c", &a);
    b = a - 32;
    printf("Su letra en mayuscula es: %c", b);

    return 0;

}