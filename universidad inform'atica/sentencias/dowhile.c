#include <stdio.h>

int main() {
    int num = 123456, cifra;

    do
    {
        cifra = num % 10;
        printf("%d", cifra);
        num = num / 10;
    } while (num > 10);

    printf("\n");
    
    return 0;
    
}