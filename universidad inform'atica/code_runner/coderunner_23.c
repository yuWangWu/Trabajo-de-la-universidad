#include <stdio.h>

int main() {
    int entrada;

    scanf("%d", &entrada);

    if ((entrada % 3) == 0)
    {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
    
}