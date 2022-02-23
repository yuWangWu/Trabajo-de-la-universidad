#include <stdio.h>

int main() {
    int a = 3, b = 2, c = 4, d = 5;

    printf("resultado = %d\n", (a > b) && (c < d));
    printf("resultado = %d\n", (a < 10) || (d != 5));
    printf("resultado = %d\n", (a != b) && (2 * d < 8));

    return 0;
}