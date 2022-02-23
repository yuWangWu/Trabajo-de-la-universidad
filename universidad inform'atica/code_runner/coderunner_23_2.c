#include <stdio.h>

int main() {
    char a, b, c, e, f, g;
    scanf("%c %c %c", &a, &b, &c);

    e = a + 2;
    f = b + 2;
    g = c + 2;

    printf("Las letras %c %c %c codificadas son: %c %c %c.", a, b, c, e, f, g);

    return 0;
}