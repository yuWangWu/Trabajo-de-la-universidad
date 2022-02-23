#include <stdio.h>

int main() {
    int a, b, count = 0;
    scanf("%d %d", &a, &b);

    for ( a; a <= b; a++)
    {
        if ((a % 5) == 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
    
}