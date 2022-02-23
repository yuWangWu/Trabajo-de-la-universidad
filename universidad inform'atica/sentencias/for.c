#include <stdio.h>

int main() {
    int i, suma = 0, n = 11;

    for (i = 0; i < n; i ++) {
        suma += i;
    }
    printf("La suma de los %d primeros enteros es %d", n, suma);
    
    return 0;
}