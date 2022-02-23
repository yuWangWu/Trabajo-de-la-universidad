#include <stdio.h>

int main () {
    int b = 2, r;
    r = ++b;
    printf("b = %d, r = %d\n", b, r);

    b = 2;
    r = b++;
    printf("b = %d, r = %d\n", b, r);

    return 0;
}